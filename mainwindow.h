#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "bikeanaliticsdoc.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // Objects collection for application work
    BikeAnaliticsDoc AppDoc; // Document -
                             //          - Users list
                             //          - Current user
                             //          - Trainings list
                             //          - Current training
    //BikeAnaliticsSettings AppSetting;// Settings
    //BikeAnaliticsDataBase AppTrainingDataBase;// DataBase
    //BikeAnaliticsTrainingLoader TrainingsLoader;// Trainings loader

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
