#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QPushButton>
#include <QPainter>
#include <QPaintEvent>
#include <QTimer>
#include <QMediaPlayer>

class Button : public QPushButton
{
    Q_OBJECT

public:
    Button() = default;
    Button(QWidget *parent = nullptr);
    ~Button();
    void paintEvent(QPaintEvent *e);
    // void keyPressEvent(QKeyEvent *e);
public slots:
    void setUp();
    void setDown();
private:
    QPixmap p1, p2, p3;
    QMediaPlayer *player;
};
#endif // MAINWINDOW_H
