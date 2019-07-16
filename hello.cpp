#include <QtGui>
#include <QApplication>
#include <QLabel>

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    QLabel label("Hello, me!");
    label.show();
    return app.exec();
}