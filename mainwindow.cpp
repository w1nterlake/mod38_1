#include "mainwindow.h"

Button::Button(QWidget *parent){
    setParent(parent);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    p1 = QPixmap("..\\..\\pic1.png");
    p2 = QPixmap("..\\..\\pic1.png");
    p3 = QPixmap("..\\..\\pic2.png");
    setGeometry(p1.rect());
    player = new QMediaPlayer;
    player->setVolume(50);
    player->setMedia(QUrl("../../music.mp3"));
    connect(this, &QPushButton::clicked, this, &Button::setDown);
}

void Button::paintEvent(QPaintEvent *e){
    QPainter f(this);
    f.drawPixmap(e->rect(), p1);
}

// void Button::keyPressEvent(QKeyEvent *e){
//     setDown();
// }

void Button::setDown(){
    p1 = p3;
    update();
    player->play();
    QTimer::singleShot(3000, this, &Button::setUp);
}

void Button::setUp(){
    p1 = p2;

}

Button::~Button() {}
