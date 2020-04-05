#ifndef PROGRAMSWINDOW_H
#define PROGRAMSWINDOW_H

#include <QDialog>

namespace Ui {
class ProgramsWindow;
}

class ProgramsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ProgramsWindow(QDialog *parent = nullptr);
    ~ProgramsWindow();

private slots:
    void fetchBatteryLife();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void on_selectButton_clicked();


    void on_pushButton_clicked();

private:
    Ui::ProgramsWindow *ui;
    QString programsOptions[3] = {"PAIN", "HEAD", "COLD"};
    void menuOptionHandler(QString selection);
    void displayMenu(QString arr[], int size);
    int selectionIndex;
    int menuSize;
    QString screenTitle;

};

#endif // PROGRAMSWINDOW_H
