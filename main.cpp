#include "mainwindow.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    //  High DPI
    // qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", "1");
    // QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling, true);
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);

    QApplication a(argc, argv);

    QFont font("Source Han Sans");
    font.setStyleHint(QFont::SansSerif);
    QApplication::setFont(font);

    // 设置应用标志信息，用于保存设置 QSettings
    QCoreApplication::setOrganizationName("WY");
    QCoreApplication::setApplicationName("CopyPlusPlus");

    MainWindow w;
    w.show();

    return a.exec();
}
