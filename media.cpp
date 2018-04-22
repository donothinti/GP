#include "media.h"
#include "ui_media.h"



media::media(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::media)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    videoWidget = new QVideoWidget(this);
    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl::fromLocalFile("D:\\Wildlife.wmv"));

    videoWidget->show();


    player->play();
}

media::~media()
{
    delete ui;
}
