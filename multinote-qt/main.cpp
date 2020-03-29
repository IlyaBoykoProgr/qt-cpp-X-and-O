#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Notepad w;
    QObject::connect(w.ui->act_Quit,SIGNAL(triggered()),&w,SLOT(close()));
    return a.exec();
}
