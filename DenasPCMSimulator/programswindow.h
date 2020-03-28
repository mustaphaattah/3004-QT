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

private:
    Ui::ProgramsWindow *ui;
};

#endif // PROGRAMSWINDOW_H
