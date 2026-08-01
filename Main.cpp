#include "gui.h"

#include <QApplication>
#include "Garage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gui w;
    w.show();
    return QApplication::exec();
}
