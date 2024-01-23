#include "headers/mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void MainWindow::on_pushButton_9_clicked()
{
    // Ouvrir la boîte de dialogue de fichier
    QString nomFichier = QFileDialog::getOpenFileName(this,tr("Sélectionnez une image"),"",tr("Images (*.png *.jpg *.bmp);;Tous les fichiers (*.*)"));

    // Vérifiez si l'utilisateur a annulé la sélection
    if (nomFichier.isEmpty())
    {
        qDebug() << "Aucun fichier sélectionné.";
        return;
    }

    // Afficher le chemin du fichier selectionné
    qDebug() << "Fichier sélectionné : " << nomFichier;

    // Chargez l'image dans le label_5
    QPixmap image(nomFichier);
    ui->label_5->setPixmap(image);
    ui->label_5->setScaledContents(true);  // Pour ajuster la taille de l'image au label



}


void MainWindow::on_importer_button_clicked()
{
    // Hold the file
    QString filePath = QFileDialog::getOpenFileName(this, "Import CSV FILES : Importing ", QDir::rootPath(), "CSV Files (*.csv)");
    qDebug() << filePath << "is the path of the file";

    QFile mFile(filePath);
    if(!mFile.open(QFile::Text | QFile::ReadOnly))
    {
        return;
    }
    QTextStream inFile(&mFile);

    int cter = 0;
    QString readedLine = inFile.readLine();
    QStringList listValue = readedLine.split(",");
    ui->tableWidget->setColumnCount(listValue.size());
    ui->tableWidget->setHorizontalHeaderLabels(listValue);

    while(!inFile.atEnd())
    {
        QString readedLine = inFile.readLine();
        QStringList listValue = readedLine.split(",");

        cter += 1;
        ui->tableWidget->setRowCount(cter);
        for(int k = 0; k < listValue.size(); k++)
        {
            // Créer un élément non modifiable et l'ajouter à la table
            QTableWidgetItem *item = new QTableWidgetItem(listValue[k]);
            item->setFlags(item->flags() & ~Qt::ItemIsEditable);  // Désactiver l'édition
            ui->tableWidget->setItem(cter-1, k, item);
        }
    }
    mFile.flush();
    mFile.close();
}


