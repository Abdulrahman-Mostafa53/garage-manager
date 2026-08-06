#ifndef GUI_H
#define GUI_H
#include "Garage.h"
#include <QHeaderView>

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Garage;
}
QT_END_NAMESPACE

class Gui : public QWidget
{
    Q_OBJECT

public:
    explicit Gui(QWidget *parent = nullptr);
    ~Gui() override;

private slots:
    void on_checkInBut_clicked();

    void on_viewGarageBut_clicked();

    void on_searchAndTuneBut_clicked();

    void on_retirePanel_clicked();

    void on_checkIn_clicked();

    void on_searchBut_clicked();

    void on_typeC_currentTextChanged(const QString &arg1);

    void on_editButton_clicked();

    void on_typeE_currentTextChanged(const QString &arg1);

    void on_editNowBut_clicked();

    void on_tabWidget_currentChanged(int index);

private:
    Ui::Garage *ui;
    Garage garage;
    int currentCarNum;
};
#endif // GUI_H
