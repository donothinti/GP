#ifndef MEDIA_H
#define MEDIA_H

#include <QWidget>
#include <QMediaPlayer>
#include <QVideoWidget>

namespace Ui {
class media;
}

class media : public QWidget
{
    Q_OBJECT

public:
    explicit media(QWidget *parent = 0);
    ~media();

private:
    Ui::media *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
};

#endif // MEDIA_H
