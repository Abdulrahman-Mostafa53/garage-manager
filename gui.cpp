#include "gui.h"
#include "./ui_gui.h"
#include "Garage.h"
#include "Racer.h"
#include "Support.h"
#include <iostream>
#include <QDebug>
#include <nlohmann/json.hpp>
#include <fstream>
#include <string>
#include <QMessageBox>

using json = nlohmann::json;
int currentTab=0;
Gui::Gui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Garage)
{
    // setup the ui and load data
    ui->setupUi(this);
    ui->crewSizeC->hide();
    ui->reliabilityRatingC->hide();
    ui->crewSizeL->hide();
    ui->reliabilityRatingL->hide();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->racerDisplay->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->supportDisplay->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->racerDisplay->hide();
    ui->supportDisplay->hide();
    ui->editFrame->hide();
    ui->dataFrame->hide();
    int rowCount=ui->tableWidget->rowCount();
    int checkInRes;
    std::ifstream input_file("output.json");
    json loaded_file;
    input_file>>loaded_file;
    json cars = loaded_file["cars"];

    for(int i=0;i<loaded_file["cars"].size();i++){
        if(cars[i]["type"]=="Racer"){
            checkInRes=garage.checkInCar(cars[i]["number"].get<int>(),cars[i]["age"].get<int>(),cars[i]["speed"].get<int>(),cars[i]["capacity"].get<int>(),cars[i]["numOfRaces"].get<int>(),cars[i]["lapsComp"].get<int>(),cars[i]["type"].get<std::string>(),cars[i]["fullName"].get<std::string>(),cars[i]["racingTeam"].get<std::string>());
        }
        else{
            char reliabilityRating=cars[i]["reliabilityRating"].get<std::string>()[0];
            checkInRes=garage.checkInCar(cars[i]["number"].get<int>(),cars[i]["age"].get<int>(),cars[i]["speed"].get<int>(),cars[i]["capacity"].get<int>(),cars[i]["crewSize"].get<int>(),cars[i]["type"].get<std::string>(),cars[i]["fullName"].get<std::string>(),cars[i]["racingTeam"].get<std::string>(),reliabilityRating);
        }
        rowCount=ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(rowCount);
        ui->tableWidget->setItem(rowCount,0,new QTableWidgetItem(QString::number(cars[i]["number"].get<int>())));
        ui->tableWidget->setItem(rowCount,1,new QTableWidgetItem(QString::fromStdString(cars[i]["fullName"].get<std::string>())));
        ui->tableWidget->setItem(rowCount,2,new QTableWidgetItem(QString::number(cars[i]["age"].get<int>())));
        ui->tableWidget->setItem(rowCount,3,new QTableWidgetItem(QString::number(cars[i]["speed"].get<int>())));
        ui->tableWidget->setItem(rowCount,4,new QTableWidgetItem(QString::number(cars[i]["capacity"].get<int>())));
        ui->tableWidget->setItem(rowCount,5,new QTableWidgetItem(QString::fromStdString(cars[i]["racingTeam"].get<std::string>())));
        ui->tableWidget->setItem(rowCount,6,new QTableWidgetItem(QString::fromStdString(cars[i]["type"].get<std::string>())));
        QPushButton* btn_delete = new QPushButton("RETIRE",this);
        QHBoxLayout* layout = new QHBoxLayout();
        QMessageBox* msgBox = new QMessageBox;
        msgBox->setText("Confirm!");
        msgBox->setInformativeText("Do you realy want to retire that car!");
        msgBox->setStandardButtons(QMessageBox::Ok|QMessageBox::Cancel);
        msgBox->setDefaultButton(QMessageBox::Ok);
        btn_delete->setLayout(layout);
        connect(btn_delete,&QPushButton::clicked,this,[=](){
            int result = msgBox->exec();
            if(result==QMessageBox::Ok){
                auto &car = garage.getCar();
                car.erase(car.begin()+ui->tableWidget_2->currentRow());
                ui->tableWidget->removeRow(ui->tableWidget_2->currentRow());
                ui->tableWidget_2->removeRow(ui->tableWidget_2->currentRow());

                json config = {{"cars",json::array()}};
                for(int i = 0;i<car.size();i++){
                    if(garage.getCar()[i]->getType()=="Racer"){
                        auto racer = dynamic_cast<Racer*>(car[i].get());
                        config["cars"].push_back({{"number",racer->getCarNumber()},{"age",racer->getAge()},{"speed",racer->getSpeed()},{"capacity",racer->getCapacity()},{"numOfRaces",racer->getNumOfRaces()},{"lapsComp",racer->getLapsComp()},{"type",racer->getType()},{"fullName",racer->getFullName()},{"racingTeam",racer->getRacingTeam()},{"performanceScore",racer->getPerformanceScore()}});
                    }
                    else{
                        auto support = dynamic_cast<Support*>(car[i].get());
                        std::string reliabilityRating(1,support->getReliabilityRating());
                        config["cars"].push_back({{"number",support->getCarNumber()},{"age",support->getAge()},{"speed",support->getSpeed()},{"capacity",support->getCapacity()},{"reliabilityRating",reliabilityRating},{"crewSize",support->getCrewSize()},{"type",support->getType()},{"fullName",support->getFullName()},{"racingTeam",support->getRacingTeam()},{"performanceScore",support->getPerformanceScore()}});
                    }
                }

                std::ofstream output_file("output.json");
                output_file<<config.dump(4);
                output_file.close();
                }
        });
        ui->tableWidget_2->insertRow(rowCount);
        ui->tableWidget_2->setItem(rowCount,0,new QTableWidgetItem(QString::number(cars[i]["number"].get<int>())));
        ui->tableWidget_2->setItem(rowCount,1,new QTableWidgetItem(QString::fromStdString(cars[i]["fullName"].get<std::string>())));
        ui->tableWidget_2->setItem(rowCount,2,new QTableWidgetItem(QString::number(cars[i]["age"].get<int>())));
        ui->tableWidget_2->setItem(rowCount,3,new QTableWidgetItem(QString::number(cars[i]["speed"].get<int>())));
        ui->tableWidget_2->setItem(rowCount,4,new QTableWidgetItem(QString::number(cars[i]["capacity"].get<int>())));
        ui->tableWidget_2->setItem(rowCount,5,new QTableWidgetItem(QString::fromStdString(cars[i]["racingTeam"].get<std::string>())));
        ui->tableWidget_2->setItem(rowCount,6,new QTableWidgetItem(QString::fromStdString(cars[i]["type"].get<std::string>())));
        ui->tableWidget_2->setCellWidget(rowCount,7,btn_delete);


    }

}

Gui::~Gui()
{
    delete ui;
}

void Gui::on_checkInBut_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}


void Gui::on_viewGarageBut_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}


void Gui::on_searchAndTuneBut_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void Gui::on_retirePanel_clicked()
{
    ui->tabWidget->setCurrentIndex(4);
}

void Gui::on_checkIn_clicked()
{
    int rowCount=ui->tableWidget->rowCount();
    int checkInRes;
    QString number = ui->carNumC->text();
    QString type = ui->typeC->currentText();
    QString speed = ui->carSpeedC->text();
    QString age = ui->carAgeC->text();
    QString capacity = ui->carCapacityC->text();
    QString numOfRaces = ui->numOfRacesC->text();
    QString lapsComp = ui->lapsCompC->text();
    QString fullName = ui->carFullNameC->text();
    QString racingTeam = ui->carRacingTeamC->text();
    QString crewSize = ui->crewSizeC->text();
    QString reliabilityRating = ui->reliabilityRatingC->currentText();
    if(type=="Racer"){
        checkInRes=garage.checkInCar(number.toInt(),age.toInt(),speed.toInt(),capacity.toInt(),numOfRaces.toInt(),lapsComp.toInt(),type.toStdString(),fullName.toStdString(),racingTeam.toStdString());
    }
    else{
        checkInRes=garage.checkInCar(number.toInt(),age.toInt(),speed.toInt(),capacity.toInt(),crewSize.toInt(),type.toStdString(),fullName.toStdString(),racingTeam.toStdString(),reliabilityRating.at(0).toLatin1());
    }
    if(checkInRes!=1){
        ui->tableWidget->insertRow(rowCount);
        ui->tableWidget->setItem(rowCount,0,new QTableWidgetItem(number));
        ui->tableWidget->setItem(rowCount,1,new QTableWidgetItem(fullName));
        ui->tableWidget->setItem(rowCount,2,new QTableWidgetItem(age));
        ui->tableWidget->setItem(rowCount,3,new QTableWidgetItem(speed));
        ui->tableWidget->setItem(rowCount,4,new QTableWidgetItem(capacity));
        ui->tableWidget->setItem(rowCount,5,new QTableWidgetItem(racingTeam));
        ui->tableWidget->setItem(rowCount,6,new QTableWidgetItem(type));

        QPushButton* btn_delete = new QPushButton("RETIRE",this);
        QHBoxLayout* layout = new QHBoxLayout();
        
        QMessageBox* msgBox = new QMessageBox;
        msgBox->setText("Confirm!");
        msgBox->setInformativeText("Do you realy want to retire that car!");
        msgBox->setStandardButtons(QMessageBox::Ok|QMessageBox::Cancel);
        msgBox->setDefaultButton(QMessageBox::Ok);
        btn_delete->setLayout(layout);
        connect(btn_delete,&QPushButton::clicked,this,[=](){
            int result = msgBox->exec();
            if(result == QMessageBox::Ok){
                auto &car = garage.getCar();
                car.erase(car.begin()+ui->tableWidget_2->currentRow());
                ui->tableWidget->removeRow(ui->tableWidget_2->currentRow());
                ui->tableWidget_2->removeRow(ui->tableWidget_2->currentRow());

                json config = {{"cars",json::array()}};
                for(int i = 0;i<car.size();i++){
                    if(garage.getCar()[i]->getType()=="Racer"){
                        auto racer = dynamic_cast<Racer*>(car[i].get());
                        config["cars"].push_back({{"number",racer->getCarNumber()},{"age",racer->getAge()},{"speed",racer->getSpeed()},{"capacity",racer->getCapacity()},{"numOfRaces",racer->getNumOfRaces()},{"lapsComp",racer->getLapsComp()},{"type",racer->getType()},{"fullName",racer->getFullName()},{"racingTeam",racer->getRacingTeam()},{"performanceScore",racer->getPerformanceScore()}});
                    }
                    else{
                        auto support = dynamic_cast<Support*>(car[i].get());
                        std::string reliabilityRating(1,support->getReliabilityRating());
                        config["cars"].push_back({{"number",support->getCarNumber()},{"age",support->getAge()},{"speed",support->getSpeed()},{"capacity",support->getCapacity()},{"reliabilityRating",reliabilityRating},{"crewSize",support->getCrewSize()},{"type",support->getType()},{"fullName",support->getFullName()},{"racingTeam",support->getRacingTeam()},{"performanceScore",support->getPerformanceScore()}});
                    }
                }

                std::ofstream output_file("output.json");
                output_file<<config.dump(4);
                output_file.close();
            }

        });
        ui->tableWidget_2->insertRow(rowCount);
        ui->tableWidget_2->setItem(rowCount,0,new QTableWidgetItem(number));
        ui->tableWidget_2->setItem(rowCount,1,new QTableWidgetItem(fullName));
        ui->tableWidget_2->setItem(rowCount,2,new QTableWidgetItem(age));
        ui->tableWidget_2->setItem(rowCount,3,new QTableWidgetItem(speed));
        ui->tableWidget_2->setItem(rowCount,4,new QTableWidgetItem(capacity));
        ui->tableWidget_2->setItem(rowCount,5,new QTableWidgetItem(racingTeam));
        ui->tableWidget_2->setItem(rowCount,6,new QTableWidgetItem(type));
        ui->tableWidget_2->setCellWidget(rowCount,7,btn_delete);

        json config = {{"cars",json::array()}};
        auto &car = garage.getCar();
        for(int i = 0;i<car.size();i++){
            if(garage.getCar()[i]->getType()=="Racer"){
                auto racer = dynamic_cast<Racer*>(car[i].get());
                config["cars"].push_back({{"number",racer->getCarNumber()},{"age",racer->getAge()},{"speed",racer->getSpeed()},{"capacity",racer->getCapacity()},{"numOfRaces",racer->getNumOfRaces()},{"lapsComp",racer->getLapsComp()},{"type",racer->getType()},{"fullName",racer->getFullName()},{"racingTeam",racer->getRacingTeam()},{"performanceScore",racer->getPerformanceScore()}});
            }
            else{
                auto support = dynamic_cast<Support*>(car[i].get());
                std::string reliabilityRating(1,support->getReliabilityRating());
                config["cars"].push_back({{"number",support->getCarNumber()},{"age",support->getAge()},{"speed",support->getSpeed()},{"capacity",support->getCapacity()},{"reliabilityRating",reliabilityRating},{"crewSize",support->getCrewSize()},{"type",support->getType()},{"fullName",support->getFullName()},{"racingTeam",support->getRacingTeam()},{"performanceScore",support->getPerformanceScore()}});
            }
        }
        std::ofstream output_file("output.json");
        output_file<<config.dump(4);
        output_file.close();
    }
}


void Gui::on_searchBut_clicked()
{
    int carIndex;
    QString query = ui->searchF->text();
    bool okInt;
    int queryInt = query.toInt(&okInt);
    if(okInt){
        carIndex = garage.findCar(queryInt);
        qDebug()<<carIndex<<" car index";

    }
    else{
        carIndex = garage.findCar(query.toStdString());
        qDebug()<<carIndex<<" car index";
    }
    qDebug()<<carIndex;
    if(carIndex!=-1){
        ui->editFrame->hide();
        auto &car = garage.getCar()[carIndex];
        int number = car->getCarNumber();
        int age = car->getAge();
        int speed= car->getSpeed();
        int capacity = car->getCapacity();
        std::string fullName = car->getFullName();
        std::string racingTeam = car->getRacingTeam();
        std::string type = car->getType();

        currentCarNum = number;
        ui->carSpeedE->setValue(speed);
        ui->carAgeE->setValue(age);
        ui->carCapacityE->setValue(capacity);
        ui->carFullNameE->setText(QString::fromStdString(fullName));
        ui->carRacingTeamE->setText(QString::fromStdString(racingTeam));
        ui->racerDisplay->setRowCount(0);
        ui->supportDisplay->setRowCount(0);

        if(type=="Racer"){
            auto racer = dynamic_cast<Racer*>(car.get());
            int numberOfRaces = racer->getNumOfRaces();
            int lapsComp = racer->getLapsComp();
            int performanceScore = racer->getPerformanceScore();
            ui->dataFrame->show();
            ui->racerDisplay->show();
            ui->supportDisplay->hide();
            ui->racerDisplay->insertRow(0);

            ui->racerDisplay->setItem(0,0,new QTableWidgetItem(QString::number(number)));
            ui->racerDisplay->setItem(0,1,new QTableWidgetItem(QString::number(age)));
            ui->racerDisplay->setItem(0,2,new QTableWidgetItem(QString::number(speed)));
            ui->racerDisplay->setItem(0,3,new QTableWidgetItem(QString::number(capacity)));
            ui->racerDisplay->setItem(0,4,new QTableWidgetItem(QString::number(numberOfRaces)));
            ui->racerDisplay->setItem(0,5,new QTableWidgetItem(QString::number(lapsComp)));
            ui->racerDisplay->setItem(0,6,new QTableWidgetItem(QString::fromStdString(fullName)));
            ui->racerDisplay->setItem(0,7,new QTableWidgetItem(QString::fromStdString(racingTeam)));
            ui->racerDisplay->setItem(0,8,new QTableWidgetItem(QString::number(performanceScore)));
            ui->racerDisplay->setItem(0,9,new QTableWidgetItem(QString::fromStdString(type)));


            ui->typeE->setCurrentIndex(0);
            ui->numOfRacesE->setValue(numberOfRaces);
            ui->lapsCompE->setValue(lapsComp);

            ui->numOfRacesE->show();
            ui->lapsCompE->show();
            ui->numOfRacesL2->show();
            ui->lapsCompL2->show();

            ui->reliabilityRatingE->hide();
            ui->crewSizeE->hide();
            ui->reliabilityRatingL2->hide();
            ui->crewSizeL2->hide();


        }
        else{
            auto support = dynamic_cast<Support*>(car.get());
            int crewSize = support->getCrewSize();
            char reliabilityRating = support->getReliabilityRating();
            int performanceScore = support->getPerformanceScore();
            ui->dataFrame->show();
            ui->racerDisplay->hide();
            ui->supportDisplay->show();
            ui->supportDisplay->insertRow(0);
            ui->supportDisplay->setItem(0,0,new QTableWidgetItem(QString::number(number)));
            ui->supportDisplay->setItem(0,1,new QTableWidgetItem(QString::number(age)));
            ui->supportDisplay->setItem(0,2,new QTableWidgetItem(QString::number(speed)));
            ui->supportDisplay->setItem(0,3,new QTableWidgetItem(QString::number(capacity)));
            ui->supportDisplay->setItem(0,4,new QTableWidgetItem(QString::number(crewSize)));
            ui->supportDisplay->setItem(0,5,new QTableWidgetItem(QString(QChar(reliabilityRating))));
            ui->supportDisplay->setItem(0,6,new QTableWidgetItem(QString::fromStdString(fullName)));
            ui->supportDisplay->setItem(0,7,new QTableWidgetItem(QString::fromStdString(racingTeam)));
            ui->supportDisplay->setItem(0,8,new QTableWidgetItem(QString::number(performanceScore)));
            ui->supportDisplay->setItem(0,9,new QTableWidgetItem(QString::fromStdString(type)));

            ui->typeE->setCurrentIndex(1);
            ui->crewSizeE->setValue(crewSize);
            ui->reliabilityRatingE->setCurrentText(QString(QChar(reliabilityRating)));

            ui->reliabilityRatingE->show();
            ui->crewSizeE->show();
            ui->reliabilityRatingL2->show();
            ui->crewSizeL2->show();

            ui->numOfRacesE->hide();
            ui->lapsCompE->hide();
            ui->numOfRacesL2->hide();
            ui->lapsCompL2->hide();
        }
    }

}


void Gui::on_typeC_currentTextChanged(const QString &arg1)
{
    if(arg1=="Racer"){
        ui->numOfRacesC->show();
        ui->lapsCompC->show();
        ui->numOfRacesL->show();
        ui->lapsCompL->show();
        ui->crewSizeC->hide();
        ui->reliabilityRatingC->hide();
        ui->crewSizeL->hide();
        ui->reliabilityRatingL->hide();

    }
    else if(arg1=="Support"){
        ui->crewSizeC->show();
        ui->reliabilityRatingC->show();
        ui->crewSizeL->show();
        ui->reliabilityRatingL->show();
        ui->numOfRacesC->hide();
        ui->lapsCompC->hide();
        ui->numOfRacesL->hide();
        ui->lapsCompL->hide();

    }
}


void Gui::on_editButton_clicked()
{
    ui->editFrame->show();
}


void Gui::on_typeE_currentTextChanged(const QString &arg1)
{
    if(arg1=="Racer"){
        ui->numOfRacesE->show();
        ui->lapsCompE->show();
        ui->numOfRacesL2->show();
        ui->lapsCompL2->show();
        ui->crewSizeE->hide();
        ui->reliabilityRatingE->hide();
        ui->crewSizeL2->hide();
        ui->reliabilityRatingL2->hide();

    }
    else if(arg1=="Support"){
        ui->crewSizeE->show();
        ui->reliabilityRatingE->show();
        ui->crewSizeL2->show();
        ui->reliabilityRatingL2->show();
        ui->numOfRacesE->hide();
        ui->lapsCompE->hide();
        ui->numOfRacesL2->hide();
        ui->lapsCompL2->hide();

    }
}
void Gui::on_editNowBut_clicked()
{
    int editRes;
    QString type = ui->typeE->currentText();
    QString speed = ui->carSpeedE->text();
    QString age = ui->carAgeE->text();
    QString capacity = ui->carCapacityE->text();
    QString numOfRaces = ui->numOfRacesE->text();
    QString lapsComp = ui->lapsCompE->text();
    QString fullName = ui->carFullNameE->text();
    QString racingTeam = ui->carRacingTeamE->text();
    QString crewSize = ui->crewSizeE->text();
    QString reliabilityRating = ui->reliabilityRatingE->currentText();
    int number = garage.findCar(currentCarNum);
    qDebug()<<"ok i can hee";
    if(type=="Racer"){
        editRes=garage.editByNumber(currentCarNum,age.toInt(),speed.toInt(),capacity.toInt(),numOfRaces.toInt(),lapsComp.toInt(),type.toStdString(),fullName.toStdString(),racingTeam.toStdString());
    }
    else{
        editRes=garage.editByNumber(currentCarNum,age.toInt(),speed.toInt(),capacity.toInt(),crewSize.toInt(),type.toStdString(),fullName.toStdString(),racingTeam.toStdString(),reliabilityRating.at(0).toLatin1());
    }
    qDebug()<<editRes<<" can i edit?";
    if(editRes!=1){
        qDebug()<<number<<"  j";
        ui->tableWidget->setItem(number,0,new QTableWidgetItem(QString::number(garage.getCar()[number]->getCarNumber())));
        ui->tableWidget->setItem(number,1,new QTableWidgetItem(fullName));
        ui->tableWidget->setItem(number,2,new QTableWidgetItem(age));
        ui->tableWidget->setItem(number,3,new QTableWidgetItem(speed));
        ui->tableWidget->setItem(number,4,new QTableWidgetItem(capacity));
        ui->tableWidget->setItem(number,5,new QTableWidgetItem(racingTeam));
        ui->tableWidget->setItem(number,6,new QTableWidgetItem(type));

        ui->tableWidget_2->setItem(number,0,new QTableWidgetItem(QString::number(garage.getCar()[number]->getCarNumber())));
        ui->tableWidget_2->setItem(number,1,new QTableWidgetItem(fullName));
        ui->tableWidget_2->setItem(number,2,new QTableWidgetItem(age));
        ui->tableWidget_2->setItem(number,3,new QTableWidgetItem(speed));
        ui->tableWidget_2->setItem(number,4,new QTableWidgetItem(capacity));
        ui->tableWidget_2->setItem(number,5,new QTableWidgetItem(racingTeam));
        ui->tableWidget_2->setItem(number,6,new QTableWidgetItem(type));
        if(type=="Racer"){
            ui->racerDisplay->setRowCount(0);
            ui->supportDisplay->hide();
            ui->racerDisplay->insertRow(0);
            ui->racerDisplay->show();
            ui->racerDisplay->setItem(0,0,new QTableWidgetItem(QString::number(garage.getCar()[number]->getCarNumber())));
            ui->racerDisplay->setItem(0,1,new QTableWidgetItem(age));
            ui->racerDisplay->setItem(0,2,new QTableWidgetItem(speed));
            ui->racerDisplay->setItem(0,3,new QTableWidgetItem(capacity));
            ui->racerDisplay->setItem(0,4,new QTableWidgetItem(numOfRaces));
            ui->racerDisplay->setItem(0,5,new QTableWidgetItem(lapsComp));
            ui->racerDisplay->setItem(0,6,new QTableWidgetItem(fullName));
            ui->racerDisplay->setItem(0,7,new QTableWidgetItem(racingTeam));
            ui->racerDisplay->setItem(0,8,new QTableWidgetItem(QString::number(garage.getCar()[number]->getPerformanceScore())));
            ui->racerDisplay->setItem(0,9,new QTableWidgetItem(type));
        }
        else{
            ui->supportDisplay->setRowCount(0);
            ui->supportDisplay->show();
            ui->racerDisplay->hide();
            ui->supportDisplay->insertRow(0);
            ui->supportDisplay->setItem(0,0,new QTableWidgetItem(QString::number(garage.getCar()[number]->getCarNumber())));
            ui->supportDisplay->setItem(0,1,new QTableWidgetItem(age));
            ui->supportDisplay->setItem(0,2,new QTableWidgetItem(speed));
            ui->supportDisplay->setItem(0,3,new QTableWidgetItem(capacity));
            ui->supportDisplay->setItem(0,4,new QTableWidgetItem(crewSize));
            ui->supportDisplay->setItem(0,5,new QTableWidgetItem(reliabilityRating));
            ui->supportDisplay->setItem(0,6,new QTableWidgetItem(fullName));
            ui->supportDisplay->setItem(0,7,new QTableWidgetItem(racingTeam));
            ui->supportDisplay->setItem(0,8,new QTableWidgetItem(QString::number(garage.getCar()[number]->getPerformanceScore())));
            ui->supportDisplay->setItem(0,9,new QTableWidgetItem(type));
        }

        json config = {{"cars",json::array()}};
        auto &car = garage.getCar();
        for(int i = 0;i<car.size();i++){
            if(garage.getCar()[i]->getType()=="Racer"){
                auto racer = dynamic_cast<Racer*>(car[i].get());
                config["cars"].push_back({{"number",racer->getCarNumber()},{"age",racer->getAge()},{"speed",racer->getSpeed()},{"capacity",racer->getCapacity()},{"numOfRaces",racer->getNumOfRaces()},{"lapsComp",racer->getLapsComp()},{"type",racer->getType()},{"fullName",racer->getFullName()},{"racingTeam",racer->getRacingTeam()},{"performanceScore",racer->getPerformanceScore()}});
            }
            else{
                auto support = dynamic_cast<Support*>(car[i].get());
                std::string reliabilityRating(1,support->getReliabilityRating());
                config["cars"].push_back({{"number",support->getCarNumber()},{"age",support->getAge()},{"speed",support->getSpeed()},{"capacity",support->getCapacity()},{"reliabilityRating",reliabilityRating},{"crewSize",support->getCrewSize()},{"type",support->getType()},{"fullName",support->getFullName()},{"racingTeam",support->getRacingTeam()},{"performanceScore",support->getPerformanceScore()}});
            }
        }

        std::ofstream output_file("output.json");
        output_file<<config.dump(4);
        output_file.close();
    }
}


void Gui::on_tabWidget_currentChanged(int index)
{
    if(currentTab==3){
        ui->dataFrame->hide();
        ui->editFrame->hide();
    }
    currentTab = index;
}

