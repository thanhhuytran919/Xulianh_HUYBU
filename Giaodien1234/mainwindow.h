#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void DisplayImage(QImage &img, QString title);

private slots:
    void on_bt_Chon_clicked();

    void on_pushButton_clicked();

    void on_bt_xlax_clicked();

    void on_bt_xlam_clicked();

    void on_bt_xlpn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
