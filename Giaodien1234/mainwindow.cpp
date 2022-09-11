#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QFileDialog"
#include "QPixmap"
#include "Qlabel"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt_Chon_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open File",
                        "F:/Nam 4/HK1/Xu li anh/IMG",
                         "*.* All Files;;*.bmp;;*.jpeg;;*.ppm,;;*.png;;*.jpg");
    if (filename.isEmpty())
        return;
    ui->ln_TenFile->setText(filename);

    QPixmap pixmap(filename);
    QLabel *label = new QLabel();
    label->setPixmap(pixmap);
    label->setWindowTitle(QFileInfo(filename).fileName());
    label->show();
}

void MainWindow::DisplayImage(QImage &img, QString title) {
    QLabel *label = new QLabel();
    label->setPixmap(QPixmap::fromImage(img));
    label->setWindowTitle(title);
    label->show();
}



void MainWindow::on_bt_xlax_clicked()
{
    QString filename = ui->ln_TenFile->text();
    QImage image_in(filename);//doc anh tu file
    QImage image_out(image_in.width() ,image_in.height(), QImage::Format_ARGB32);
    for(int x = 0; x < image_in.width(); x++)
        for(int y = 0 ; y < image_in.height(); y++) {
            QRgb color = image_in.pixel(x,y);//lay mau gia tri pixel(x,y)
            int gray_in = qGray(color);//doi gia tri mau thanh muc xam
            int gray_out = 255 - gray_in;//thay doi do am ban anh xam
            QRgb color_out = qRgb(gray_out, gray_out, gray_out);//anh xam (R=G=B)
            image_out.setPixel(x,y,color_out);
        }
    DisplayImage(image_in,QFileInfo(filename).fileName());
    DisplayImage(image_out,QFileInfo(filename).fileName());
}

void MainWindow::on_bt_xlam_clicked()
{
    QString filename = ui->ln_TenFile->text();
    QImage image_in(filename);//doc anh tu file
    QImage image_out(image_in.width() ,image_in.height(), QImage::Format_ARGB32);
    for(int x = 0; x < image_in.width(); x++)
        for(int y = 0 ; y < image_in.height(); y++) {
            QRgb rgb = image_in.pixel(x,y);//lay mau gia tri pixel(x,y)
            QColor color_in(rgb);
            int h,s,v;
            color_in.getHsv(&h, &s, &v);//lay 3 thanh phan h s v tu color
//            int h_out = 255 - h;
//            int s_out = 255 - s;
            int v_out = 255 - v;
            QColor color_out = QColor::fromHsv(h,s,v_out);
            image_out.setPixel(x,y,color_out.rgb());
        }
    DisplayImage(image_in,QFileInfo(filename).fileName());
    DisplayImage(image_out,QFileInfo(filename).fileName());
}

void MainWindow::on_bt_xlpn_clicked()
{
    QString filename = ui->ln_TenFile->text();
    QImage image_in(filename);//doc anh tu file
    QImage image_out(image_in.width() ,image_in.height(), QImage::Format_ARGB32);
    int n = ui->ln_pn->text().toInt(); // doi chuoi thanh so
    for(int x = 0; x < image_in.width(); x++)
        for(int y = 0 ; y < image_in.height(); y++) {
            QRgb color = image_in.pixel(x,y);//lay mau gia tri pixel(x,y)
            QRgb color_out;
            int gray_in = qGray(color);//doi gia tri mau thanh muc xam
            int gray_out = gray_in;//thay doi do sang toi
            if(gray_out>n) //kiem tra gia muc xam 0...255
                color_out = qRgb(255, 255, 255);//xet anh ve 255
            else if (gray_out<n)
                color_out = qRgb(0, 0, 0);//set anh ve 0
            image_out.setPixel(x,y,color_out);
        }
    DisplayImage(image_in,QFileInfo(filename).fileName());
    DisplayImage(image_out,QFileInfo(filename).fileName());
}
