#include <QtGui/QApplication>
#include <QTextCodec>

#include "mainwindow.h"

#include "mainmenudialog.h"
#include "videomenudialog.h"
#include "playbackdialog.h"
#include "settingdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置程序使用utf8编码格式
    QTextCodec *codec=QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForTr(codec);

    MainWindow w;
//    MainMenuDialog w;
//    VideoMenuDialog w;
//    PlayBackDialog w;
//    SettingDialog w;
    w.show();
    
    return a.exec();
}
