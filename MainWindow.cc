//
// Created by doss on 24/06/25.
//

#include "MainWindow.hh"

#include <QToolBar>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    :   QMainWindow(parent),
        player(new QMediaPlayer(this)),
        videoWidget(new QVideoWidget(this)),
        playButton(new QPushButton(this)),
        positionSlider(new QSlider(this)),
        statusLabel(new QLabel(this))
{
    setupUi();
}

MainWindow::~MainWindow() = default;

void MainWindow::setupUi() {
    auto centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    auto toolBar = new QToolBar(this);
    auto openAction = toolBar->addAction("Open");
    connect(openAction, &QAction::triggered, this, &MainWindow::openFile);

    auto* layout = new QVBoxLayout(centralWidget);
    layout->addWidget(videoWidget);

    auto* controlLayout = new QHBoxLayout;
    controlLayout->addWidget(playButton);
    controlLayout->addWidget(positionSlider);

    layout->addLayout(controlLayout);
    layout->addWidget(statusLabel);
}

void MainWindow::openFile() {

}

void MainWindow::playPause() {

}

void MainWindow::updatePosition(qint64 position) {

}

void MainWindow::setPosition(int position) {

}

