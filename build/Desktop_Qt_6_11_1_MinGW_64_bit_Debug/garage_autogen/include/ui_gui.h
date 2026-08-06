/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Garage
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QFrame *frame;
    QGridLayout *gridLayout_6;
    QPushButton *viewGarageBut;
    QPushButton *searchAndTuneBut;
    QPushButton *retirePanel;
    QPushButton *checkInBut;
    QWidget *checkInTab;
    QGridLayout *gridLayout_7;
    QFrame *frame_2;
    QGridLayout *gridLayout_8;
    QComboBox *typeC;
    QSpinBox *carSpeedC;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_4;
    QGridLayout *gridLayout_9;
    QLabel *reliabilityRatingL;
    QLabel *numOfRacesL;
    QLabel *crewSizeL;
    QComboBox *reliabilityRatingC;
    QSpinBox *lapsCompC;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_8;
    QSpinBox *crewSizeC;
    QSpinBox *numOfRacesC;
    QLabel *lapsCompL;
    QSpinBox *carNumC;
    QSpinBox *carCapacityC;
    QFrame *frame_3;
    QLabel *label_5;
    QSpinBox *carAgeC;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QPushButton *checkIn;
    QLineEdit *carFullNameC;
    QLineEdit *carRacingTeamC;
    QWidget *viewGarageTab;
    QGridLayout *gridLayout_10;
    QTableWidget *tableWidget;
    QWidget *searchTuneTab;
    QGridLayout *gridLayout_3;
    QFrame *frame_5;
    QGridLayout *gridLayout_11;
    QLineEdit *searchF;
    QFrame *editFrame;
    QGridLayout *gridLayout_13;
    QSpinBox *carAgeE;
    QSpinBox *carSpeedE;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_11;
    QSpinBox *carCapacityE;
    QLabel *label_15;
    QLabel *label_10;
    QComboBox *typeE;
    QPushButton *editNowBut;
    QLabel *label_12;
    QFrame *frame_6;
    QGridLayout *gridLayout_12;
    QSpinBox *lapsCompE;
    QLabel *lapsCompL2;
    QLabel *label_9;
    QSpinBox *crewSizeE;
    QLabel *crewSizeL2;
    QLabel *reliabilityRatingL2;
    QComboBox *reliabilityRatingE;
    QLabel *numOfRacesL2;
    QSpinBox *numOfRacesE;
    QLineEdit *carRacingTeamE;
    QLineEdit *carFullNameE;
    QLabel *label_16;
    QPushButton *searchBut;
    QFrame *dataFrame;
    QGridLayout *gridLayout_14;
    QTableWidget *supportDisplay;
    QTableWidget *racerDisplay;
    QPushButton *editButton;
    QSpacerItem *horizontalSpacer_3;
    QWidget *retireTab;
    QGridLayout *gridLayout_15;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *Garage)
    {
        if (Garage->objectName().isEmpty())
            Garage->setObjectName("Garage");
        Garage->resize(1085, 674);
        gridLayout_2 = new QGridLayout(Garage);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(Garage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName("gridLayout_4");
        label = new QLabel(tab);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Myanmar Text")});
        font.setPointSize(28);
        font.setBold(true);
        label->setFont(font);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        frame = new QFrame(tab);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 500));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color:#EEEEEE"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_6 = new QGridLayout(frame);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(11, -1, -1, -1);
        viewGarageBut = new QPushButton(frame);
        viewGarageBut->setObjectName("viewGarageBut");
        viewGarageBut->setMinimumSize(QSize(0, 80));
        viewGarageBut->setMaximumSize(QSize(200, 16777215));
        viewGarageBut->setAutoFillBackground(false);
        viewGarageBut->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_6->addWidget(viewGarageBut, 0, 1, 1, 1);

        searchAndTuneBut = new QPushButton(frame);
        searchAndTuneBut->setObjectName("searchAndTuneBut");
        searchAndTuneBut->setMinimumSize(QSize(0, 80));
        searchAndTuneBut->setMaximumSize(QSize(300, 16777215));
        searchAndTuneBut->setAutoFillBackground(false);
        searchAndTuneBut->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_6->addWidget(searchAndTuneBut, 2, 0, 1, 1);

        retirePanel = new QPushButton(frame);
        retirePanel->setObjectName("retirePanel");
        retirePanel->setMinimumSize(QSize(0, 80));
        retirePanel->setMaximumSize(QSize(200, 16777215));
        retirePanel->setAutoFillBackground(false);
        retirePanel->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_6->addWidget(retirePanel, 2, 1, 1, 1);

        checkInBut = new QPushButton(frame);
        checkInBut->setObjectName("checkInBut");
        checkInBut->setMinimumSize(QSize(0, 80));
        checkInBut->setMaximumSize(QSize(200, 16777215));
        checkInBut->setAutoFillBackground(false);
        checkInBut->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_6->addWidget(checkInBut, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        checkInTab = new QWidget();
        checkInTab->setObjectName("checkInTab");
        gridLayout_7 = new QGridLayout(checkInTab);
        gridLayout_7->setObjectName("gridLayout_7");
        frame_2 = new QFrame(checkInTab);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color:#EEEEEE"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_8 = new QGridLayout(frame_2);
        gridLayout_8->setObjectName("gridLayout_8");
        typeC = new QComboBox(frame_2);
        typeC->addItem(QString());
        typeC->addItem(QString());
        typeC->setObjectName("typeC");
        typeC->setMinimumSize(QSize(0, 50));
        typeC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_8->addWidget(typeC, 0, 1, 1, 2);

        carSpeedC = new QSpinBox(frame_2);
        carSpeedC->setObjectName("carSpeedC");
        carSpeedC->setMinimumSize(QSize(60, 40));
        carSpeedC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_8->addWidget(carSpeedC, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_2, 9, 1, 1, 1);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(0, 100));
        frame_4->setStyleSheet(QString::fromUtf8("background-color:#EEEEFF"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_9 = new QGridLayout(frame_4);
        gridLayout_9->setObjectName("gridLayout_9");
        reliabilityRatingL = new QLabel(frame_4);
        reliabilityRatingL->setObjectName("reliabilityRatingL");

        gridLayout_9->addWidget(reliabilityRatingL, 4, 1, 1, 1);

        numOfRacesL = new QLabel(frame_4);
        numOfRacesL->setObjectName("numOfRacesL");

        gridLayout_9->addWidget(numOfRacesL, 1, 0, 1, 1);

        crewSizeL = new QLabel(frame_4);
        crewSizeL->setObjectName("crewSizeL");

        gridLayout_9->addWidget(crewSizeL, 4, 0, 1, 1);

        reliabilityRatingC = new QComboBox(frame_4);
        reliabilityRatingC->addItem(QString());
        reliabilityRatingC->addItem(QString());
        reliabilityRatingC->addItem(QString());
        reliabilityRatingC->setObjectName("reliabilityRatingC");
        reliabilityRatingC->setMinimumSize(QSize(0, 30));
        reliabilityRatingC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_9->addWidget(reliabilityRatingC, 6, 1, 1, 1);

        lapsCompC = new QSpinBox(frame_4);
        lapsCompC->setObjectName("lapsCompC");
        lapsCompC->setMinimumSize(QSize(0, 30));
        lapsCompC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_9->addWidget(lapsCompC, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 3, 1, 1, 1);

        label_8 = new QLabel(frame_4);
        label_8->setObjectName("label_8");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_8->setFont(font1);

        gridLayout_9->addWidget(label_8, 0, 0, 1, 1);

        crewSizeC = new QSpinBox(frame_4);
        crewSizeC->setObjectName("crewSizeC");
        crewSizeC->setMinimumSize(QSize(0, 30));
        crewSizeC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_9->addWidget(crewSizeC, 6, 0, 1, 1);

        numOfRacesC = new QSpinBox(frame_4);
        numOfRacesC->setObjectName("numOfRacesC");
        numOfRacesC->setMinimumSize(QSize(0, 30));
        numOfRacesC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_9->addWidget(numOfRacesC, 2, 0, 1, 1);

        lapsCompL = new QLabel(frame_4);
        lapsCompL->setObjectName("lapsCompL");

        gridLayout_9->addWidget(lapsCompL, 1, 1, 1, 1);


        gridLayout_8->addWidget(frame_4, 10, 1, 1, 2);

        carNumC = new QSpinBox(frame_2);
        carNumC->setObjectName("carNumC");
        carNumC->setMinimumSize(QSize(60, 40));
        carNumC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_8->addWidget(carNumC, 2, 1, 1, 1);

        carCapacityC = new QSpinBox(frame_2);
        carCapacityC->setObjectName("carCapacityC");
        carCapacityC->setMinimumSize(QSize(60, 40));
        carCapacityC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_8->addWidget(carCapacityC, 4, 2, 1, 1);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout_8->addWidget(frame_3, 18, 1, 1, 1);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_5, 3, 2, 1, 1);

        carAgeC = new QSpinBox(frame_2);
        carAgeC->setObjectName("carAgeC");
        carAgeC->setMinimumSize(QSize(60, 40));
        carAgeC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_8->addWidget(carAgeC, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_2, 7, 4, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 5, 1, 1, 1);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_6, 7, 1, 1, 1);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_3, 1, 2, 1, 1);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_7, 7, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer, 4, 0, 1, 1);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_4, 3, 1, 1, 1);

        checkIn = new QPushButton(frame_2);
        checkIn->setObjectName("checkIn");
        checkIn->setMinimumSize(QSize(0, 60));
        checkIn->setMaximumSize(QSize(7000, 16777215));
        checkIn->setFont(font1);
        checkIn->setStyleSheet(QString::fromUtf8("background:#52a3ff;color:white;"));

        gridLayout_8->addWidget(checkIn, 11, 1, 1, 2);

        carFullNameC = new QLineEdit(frame_2);
        carFullNameC->setObjectName("carFullNameC");
        carFullNameC->setMinimumSize(QSize(0, 40));
        carFullNameC->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_8->addWidget(carFullNameC, 8, 1, 1, 1);

        carRacingTeamC = new QLineEdit(frame_2);
        carRacingTeamC->setObjectName("carRacingTeamC");
        carRacingTeamC->setMinimumSize(QSize(0, 40));
        carRacingTeamC->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout_8->addWidget(carRacingTeamC, 8, 2, 1, 1);


        gridLayout_7->addWidget(frame_2, 0, 1, 1, 1);

        tabWidget->addTab(checkInTab, QString());
        viewGarageTab = new QWidget();
        viewGarageTab->setObjectName("viewGarageTab");
        gridLayout_10 = new QGridLayout(viewGarageTab);
        gridLayout_10->setObjectName("gridLayout_10");
        tableWidget = new QTableWidget(viewGarageTab);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);

        gridLayout_10->addWidget(tableWidget, 0, 0, 1, 1);

        tabWidget->addTab(viewGarageTab, QString());
        searchTuneTab = new QWidget();
        searchTuneTab->setObjectName("searchTuneTab");
        gridLayout_3 = new QGridLayout(searchTuneTab);
        gridLayout_3->setObjectName("gridLayout_3");
        frame_5 = new QFrame(searchTuneTab);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("background-color:#EEEEEE"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_11 = new QGridLayout(frame_5);
        gridLayout_11->setObjectName("gridLayout_11");
        searchF = new QLineEdit(frame_5);
        searchF->setObjectName("searchF");
        searchF->setMinimumSize(QSize(0, 50));
        searchF->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout_11->addWidget(searchF, 3, 0, 1, 1);

        editFrame = new QFrame(frame_5);
        editFrame->setObjectName("editFrame");
        editFrame->setMinimumSize(QSize(0, 200));
        editFrame->setMaximumSize(QSize(16777215, 250));
        editFrame->setStyleSheet(QString::fromUtf8("background-color:#dbe5ff"));
        editFrame->setFrameShape(QFrame::Shape::StyledPanel);
        editFrame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_13 = new QGridLayout(editFrame);
        gridLayout_13->setObjectName("gridLayout_13");
        carAgeE = new QSpinBox(editFrame);
        carAgeE->setObjectName("carAgeE");
        carAgeE->setMinimumSize(QSize(60, 40));
        carAgeE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_13->addWidget(carAgeE, 3, 2, 1, 1);

        carSpeedE = new QSpinBox(editFrame);
        carSpeedE->setObjectName("carSpeedE");
        carSpeedE->setMinimumSize(QSize(60, 40));
        carSpeedE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_13->addWidget(carSpeedE, 3, 1, 1, 1);

        label_14 = new QLabel(editFrame);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_13->addWidget(label_14, 2, 7, 1, 1);

        label_13 = new QLabel(editFrame);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_13->addWidget(label_13, 2, 2, 1, 1);

        label_11 = new QLabel(editFrame);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(0, 40));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        gridLayout_13->addWidget(label_11, 1, 1, 1, 2);

        carCapacityE = new QSpinBox(editFrame);
        carCapacityE->setObjectName("carCapacityE");
        carCapacityE->setMinimumSize(QSize(60, 40));
        carCapacityE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_13->addWidget(carCapacityE, 3, 4, 1, 3);

        label_15 = new QLabel(editFrame);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_13->addWidget(label_15, 2, 1, 1, 1);

        label_10 = new QLabel(editFrame);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_13->addWidget(label_10, 2, 4, 1, 1);

        typeE = new QComboBox(editFrame);
        typeE->addItem(QString());
        typeE->addItem(QString());
        typeE->setObjectName("typeE");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(typeE->sizePolicy().hasHeightForWidth());
        typeE->setSizePolicy(sizePolicy);
        typeE->setMinimumSize(QSize(200, 60));
        typeE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_13->addWidget(typeE, 4, 1, 1, 2);

        editNowBut = new QPushButton(editFrame);
        editNowBut->setObjectName("editNowBut");
        sizePolicy.setHeightForWidth(editNowBut->sizePolicy().hasHeightForWidth());
        editNowBut->setSizePolicy(sizePolicy);
        editNowBut->setMinimumSize(QSize(0, 60));
        editNowBut->setMaximumSize(QSize(7000, 16777215));
        editNowBut->setFont(font1);
        editNowBut->setStyleSheet(QString::fromUtf8("background-color:#52a3ff;color:white;"));

        gridLayout_13->addWidget(editNowBut, 4, 6, 1, 3);

        label_12 = new QLabel(editFrame);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_13->addWidget(label_12, 2, 8, 1, 1);

        frame_6 = new QFrame(editFrame);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(0, 0));
        frame_6->setStyleSheet(QString::fromUtf8("background-color:#EEEEFF"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_12 = new QGridLayout(frame_6);
        gridLayout_12->setObjectName("gridLayout_12");
        lapsCompE = new QSpinBox(frame_6);
        lapsCompE->setObjectName("lapsCompE");
        lapsCompE->setMinimumSize(QSize(0, 30));
        lapsCompE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_12->addWidget(lapsCompE, 2, 1, 1, 1);

        lapsCompL2 = new QLabel(frame_6);
        lapsCompL2->setObjectName("lapsCompL2");

        gridLayout_12->addWidget(lapsCompL2, 1, 1, 1, 1);

        label_9 = new QLabel(frame_6);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);

        gridLayout_12->addWidget(label_9, 0, 0, 1, 1);

        crewSizeE = new QSpinBox(frame_6);
        crewSizeE->setObjectName("crewSizeE");
        crewSizeE->setMinimumSize(QSize(0, 30));
        crewSizeE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_12->addWidget(crewSizeE, 5, 0, 1, 1);

        crewSizeL2 = new QLabel(frame_6);
        crewSizeL2->setObjectName("crewSizeL2");

        gridLayout_12->addWidget(crewSizeL2, 3, 0, 1, 1);

        reliabilityRatingL2 = new QLabel(frame_6);
        reliabilityRatingL2->setObjectName("reliabilityRatingL2");

        gridLayout_12->addWidget(reliabilityRatingL2, 3, 1, 1, 1);

        reliabilityRatingE = new QComboBox(frame_6);
        reliabilityRatingE->addItem(QString());
        reliabilityRatingE->addItem(QString());
        reliabilityRatingE->addItem(QString());
        reliabilityRatingE->setObjectName("reliabilityRatingE");
        reliabilityRatingE->setMinimumSize(QSize(0, 30));
        reliabilityRatingE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_12->addWidget(reliabilityRatingE, 5, 1, 1, 1);

        numOfRacesL2 = new QLabel(frame_6);
        numOfRacesL2->setObjectName("numOfRacesL2");

        gridLayout_12->addWidget(numOfRacesL2, 1, 0, 1, 1);

        numOfRacesE = new QSpinBox(frame_6);
        numOfRacesE->setObjectName("numOfRacesE");
        numOfRacesE->setMinimumSize(QSize(0, 30));
        numOfRacesE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_12->addWidget(numOfRacesE, 2, 0, 1, 1);


        gridLayout_13->addWidget(frame_6, 0, 11, 6, 1);

        carRacingTeamE = new QLineEdit(editFrame);
        carRacingTeamE->setObjectName("carRacingTeamE");
        carRacingTeamE->setMinimumSize(QSize(0, 40));
        carRacingTeamE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_13->addWidget(carRacingTeamE, 3, 7, 1, 1);

        carFullNameE = new QLineEdit(editFrame);
        carFullNameE->setObjectName("carFullNameE");
        carFullNameE->setMinimumSize(QSize(0, 40));
        carFullNameE->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_13->addWidget(carFullNameE, 3, 8, 1, 1);


        gridLayout_11->addWidget(editFrame, 6, 0, 1, 2);

        label_16 = new QLabel(frame_5);
        label_16->setObjectName("label_16");
        QFont font3;
        font3.setPointSize(14);
        label_16->setFont(font3);

        gridLayout_11->addWidget(label_16, 1, 0, 1, 1);

        searchBut = new QPushButton(frame_5);
        searchBut->setObjectName("searchBut");
        searchBut->setMinimumSize(QSize(200, 50));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        searchBut->setFont(font4);
        searchBut->setStyleSheet(QString::fromUtf8("background-color:#52a3ff;color:white;"));

        gridLayout_11->addWidget(searchBut, 3, 1, 1, 1);

        dataFrame = new QFrame(frame_5);
        dataFrame->setObjectName("dataFrame");
        dataFrame->setStyleSheet(QString::fromUtf8("background-color:white;"));
        dataFrame->setFrameShape(QFrame::Shape::StyledPanel);
        dataFrame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_14 = new QGridLayout(dataFrame);
        gridLayout_14->setObjectName("gridLayout_14");
        supportDisplay = new QTableWidget(dataFrame);
        if (supportDisplay->columnCount() < 10)
            supportDisplay->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        supportDisplay->setHorizontalHeaderItem(9, __qtablewidgetitem16);
        supportDisplay->setObjectName("supportDisplay");
        supportDisplay->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);

        gridLayout_14->addWidget(supportDisplay, 2, 0, 1, 2);

        racerDisplay = new QTableWidget(dataFrame);
        if (racerDisplay->columnCount() < 10)
            racerDisplay->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(6, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(7, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(8, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        racerDisplay->setHorizontalHeaderItem(9, __qtablewidgetitem26);
        racerDisplay->setObjectName("racerDisplay");
        racerDisplay->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);

        gridLayout_14->addWidget(racerDisplay, 0, 0, 2, 2);

        editButton = new QPushButton(dataFrame);
        editButton->setObjectName("editButton");
        editButton->setMinimumSize(QSize(250, 40));
        editButton->setMaximumSize(QSize(250, 16777215));
        editButton->setFont(font1);
        editButton->setStyleSheet(QString::fromUtf8("background:#52a3ff;color:white;"));

        gridLayout_14->addWidget(editButton, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_3, 3, 0, 1, 1);


        gridLayout_11->addWidget(dataFrame, 4, 0, 1, 2);


        gridLayout_3->addWidget(frame_5, 0, 0, 1, 1);

        tabWidget->addTab(searchTuneTab, QString());
        retireTab = new QWidget();
        retireTab->setObjectName("retireTab");
        gridLayout_15 = new QGridLayout(retireTab);
        gridLayout_15->setObjectName("gridLayout_15");
        tableWidget_2 = new QTableWidget(retireTab);
        if (tableWidget_2->columnCount() < 8)
            tableWidget_2->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem34);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);

        gridLayout_15->addWidget(tableWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(retireTab, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Garage);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Garage);
    } // setupUi

    void retranslateUi(QWidget *Garage)
    {
        Garage->setWindowTitle(QCoreApplication::translate("Garage", "Garage", nullptr));
        label->setText(QCoreApplication::translate("Garage", "Welcome Sheriff!", nullptr));
        viewGarageBut->setText(QCoreApplication::translate("Garage", "View Garage", nullptr));
        searchAndTuneBut->setText(QCoreApplication::translate("Garage", "Search and Tune up", nullptr));
        retirePanel->setText(QCoreApplication::translate("Garage", "Retire Panel", nullptr));
        checkInBut->setText(QCoreApplication::translate("Garage", "Check In ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Garage", "Home", nullptr));
        typeC->setItemText(0, QCoreApplication::translate("Garage", "Racer", nullptr));
        typeC->setItemText(1, QCoreApplication::translate("Garage", "Support", nullptr));

        reliabilityRatingL->setText(QCoreApplication::translate("Garage", "Reliability Rating", nullptr));
        numOfRacesL->setText(QCoreApplication::translate("Garage", "Number of Races", nullptr));
        crewSizeL->setText(QCoreApplication::translate("Garage", "Crew Size", nullptr));
        reliabilityRatingC->setItemText(0, QCoreApplication::translate("Garage", "A", nullptr));
        reliabilityRatingC->setItemText(1, QCoreApplication::translate("Garage", "B", nullptr));
        reliabilityRatingC->setItemText(2, QCoreApplication::translate("Garage", "C", nullptr));

        label_8->setText(QCoreApplication::translate("Garage", "Based on type", nullptr));
        lapsCompL->setText(QCoreApplication::translate("Garage", "Laps Completed", nullptr));
        label_5->setText(QCoreApplication::translate("Garage", "Capacity", nullptr));
        label_2->setText(QCoreApplication::translate("Garage", "Car Number", nullptr));
        label_6->setText(QCoreApplication::translate("Garage", "Full Name", nullptr));
        label_3->setText(QCoreApplication::translate("Garage", "Car Age", nullptr));
        label_7->setText(QCoreApplication::translate("Garage", "Racing Team", nullptr));
        label_4->setText(QCoreApplication::translate("Garage", "Speed", nullptr));
        checkIn->setText(QCoreApplication::translate("Garage", "Check In!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(checkInTab), QCoreApplication::translate("Garage", "check In", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Garage", "Car Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Garage", "Car Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Garage", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Garage", "Speed", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Garage", "Capacity", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Garage", "Racing Team", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Garage", "Type", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(viewGarageTab), QCoreApplication::translate("Garage", "View Garage Panel", nullptr));
        label_14->setText(QCoreApplication::translate("Garage", "Racing Team", nullptr));
        label_13->setText(QCoreApplication::translate("Garage", "Car Age", nullptr));
        label_11->setText(QCoreApplication::translate("Garage", "Editing Car ", nullptr));
        label_15->setText(QCoreApplication::translate("Garage", "Speed", nullptr));
        label_10->setText(QCoreApplication::translate("Garage", "Capacity", nullptr));
        typeE->setItemText(0, QCoreApplication::translate("Garage", "Racer", nullptr));
        typeE->setItemText(1, QCoreApplication::translate("Garage", "Support", nullptr));

        editNowBut->setText(QCoreApplication::translate("Garage", "Edit!", nullptr));
        label_12->setText(QCoreApplication::translate("Garage", "Full Name", nullptr));
        lapsCompL2->setText(QCoreApplication::translate("Garage", "Laps Completed", nullptr));
        label_9->setText(QCoreApplication::translate("Garage", "Based on type", nullptr));
        crewSizeL2->setText(QCoreApplication::translate("Garage", "Crew Size", nullptr));
        reliabilityRatingL2->setText(QCoreApplication::translate("Garage", "Reliability Rating", nullptr));
        reliabilityRatingE->setItemText(0, QCoreApplication::translate("Garage", "A", nullptr));
        reliabilityRatingE->setItemText(1, QCoreApplication::translate("Garage", "B", nullptr));
        reliabilityRatingE->setItemText(2, QCoreApplication::translate("Garage", "C", nullptr));

        numOfRacesL2->setText(QCoreApplication::translate("Garage", "Number of Races", nullptr));
        label_16->setText(QCoreApplication::translate("Garage", "Search A Car!", nullptr));
        searchBut->setText(QCoreApplication::translate("Garage", "Search", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = supportDisplay->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Garage", "number", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = supportDisplay->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Garage", "age", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = supportDisplay->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Garage", "speed", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = supportDisplay->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Garage", "capacity", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = supportDisplay->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Garage", "crew size", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = supportDisplay->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Garage", "reliability rating", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = supportDisplay->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Garage", "full name", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = supportDisplay->horizontalHeaderItem(7);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Garage", "racing team", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = supportDisplay->horizontalHeaderItem(8);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Garage", "performance score", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = supportDisplay->horizontalHeaderItem(9);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Garage", "type", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = racerDisplay->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Garage", "number", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = racerDisplay->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Garage", "age", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = racerDisplay->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Garage", "speed", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = racerDisplay->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Garage", "capacity", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = racerDisplay->horizontalHeaderItem(4);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Garage", "number of races", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = racerDisplay->horizontalHeaderItem(5);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("Garage", "laps completed", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = racerDisplay->horizontalHeaderItem(6);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("Garage", "full name", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = racerDisplay->horizontalHeaderItem(7);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("Garage", "racing team", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = racerDisplay->horizontalHeaderItem(8);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("Garage", "performance score", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = racerDisplay->horizontalHeaderItem(9);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("Garage", "type", nullptr));
        editButton->setText(QCoreApplication::translate("Garage", "Edit Car", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(searchTuneTab), QCoreApplication::translate("Garage", "Search and Tune", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("Garage", "Car Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("Garage", "Car Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("Garage", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("Garage", "Speed", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("Garage", "Capacity", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("Garage", "Racing Team", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("Garage", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("Garage", "Option", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(retireTab), QCoreApplication::translate("Garage", "Retire Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Garage: public Ui_Garage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
