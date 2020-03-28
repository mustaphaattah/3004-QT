#ifndef FREQUENCYWINDOW_H
#define FREQUENCYWINDOW_H

#include <QDialog>

namespace Ui {
class FrequencyWindow;
}

class FrequencyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FrequencyWindow(QDialog *parent = nullptr);
    ~FrequencyWindow();

private:
    Ui::FrequencyWindow *ui;
};

#endif // FREQUENCYWINDOW_H
