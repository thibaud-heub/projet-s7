#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QThread>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void resizeEvent(QResizeEvent *QEvent) override;

private slots:
    void on_csvButton_clicked();

    void on_imageButton_clicked();

    void on_helpButton_clicked();

    void on_imageAnalyseButton_clicked();

    void on_csvAnalyzeButton_clicked();

    void on_imageLoadButton_clicked();

    void on_csvLoadButton_clicked();

private:
    Ui::MainWindow *ui;
    bool imageAdd;
    void resetImage();
    int tableauAdd;
    void resetTableWidget();
    QPixmap imagePixmap;
};
#endif // MAINWINDOW_H
