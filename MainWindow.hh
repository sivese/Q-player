//
// Created by doss on 24/06/25.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QPushButton>
#include <QSlider>
#include <QLabel>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void openFile();
    void playPause();
    void updatePosition(qint64 position);
    void setPosition(int position);

private:
    QMediaPlayer*   player;
    QVideoWidget*   videoWidget;
    QPushButton*    playButton;
    QSlider*        positionSlider;
    QLabel*         statusLabel;

    void setupUi();
};



#endif //MAINWINDOW_H
