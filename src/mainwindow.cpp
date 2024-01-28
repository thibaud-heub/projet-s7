#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

// Constructeur de la classe MainWindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imageAdd = false;  // Initialisation à false, aucune image n'est insérée au début.
    rowCount = 0;  // Initialisation du nombre de lignes à zéro.
}

// Destructeur de la classe MainWindow
MainWindow::~MainWindow()
{
    delete ui;  // Libération de la mémoire associée à l'interface utilisateur.
}

// Méthode appelée lorsqu'on clique sur le bouton 2
void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);  // Changer l'index du stackedWidget à 0.
}

// Méthode appelée lorsqu'on clique sur le bouton 3
void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);  // Changer l'index du stackedWidget à 1.
}

// Méthode appelée lorsqu'on clique sur le bouton 4
void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);  // Changer l'index du stackedWidget à 2.
}

// Méthode appelée lorsqu'on clique sur le bouton 5
void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);  // Changer l'index du stackedWidget à 3.
}

// Méthode appelée lorsqu'on clique sur le bouton 9
void MainWindow::on_pushButton_9_clicked()
{
    // Ouvrir une boîte de dialogue de fichier pour sélectionner une image.
    QString nomFichier = QFileDialog::getOpenFileName(this, tr("Sélectionnez une image"), "", tr("Images (*.png *.jpg *.bmp);;Tous les fichiers (*.*)"));

    // Vérifier si l'utilisateur a annulé la sélection.
    if (nomFichier.isEmpty())
    {
        qDebug() << "Aucun fichier sélectionné.";
        return;
    }

    // Afficher le chemin du fichier sélectionné.
    qDebug() << "Fichier sélectionné : " << nomFichier;

    // Charger l'image dans le label_5.
    QPixmap image(nomFichier);
    ui->label_5->setPixmap(image);
    ui->label_5->setScaledContents(true);  // Ajuster la taille de l'image au label.

    imageAdd = true;  // Indiquer qu'une image a été insérée.
}

// Méthode appelée lorsqu'on clique sur le bouton d'importation
void MainWindow::on_importer_button_clicked()
{
    // Sélectionner un fichier CSV à importer.
    QString filePath = QFileDialog::getOpenFileName(this, tr("Import CSV FILES : Importing "), QDir::rootPath(), "CSV Files (*.csv)");
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

        rowCount += 1;  // Incrémenter le nombre de lignes.

        cter += 1;
        ui->tableWidget->setRowCount(cter);
        for(int k = 0; k < listValue.size(); k++)
        {
            // Créer un élément non modifiable et l'ajouter à la table.
            QTableWidgetItem *item = new QTableWidgetItem(listValue[k]);
            item->setFlags(item->flags() & ~Qt::ItemIsEditable);  // Désactiver l'édition.
            ui->tableWidget->setItem(cter-1, k, item);
        }
    }
    mFile.flush();
    mFile.close();
}

// Méthode appelée lorsqu'on clique sur le bouton 8
void MainWindow::on_pushButton_8_clicked()
{
    if (!imageAdd) {
        qDebug() << "Aucune image insérée.";
        return;
    }

    // Afficher la progression de la barre de progression.
    for(int value = 1; value <= ui->progressBar->maximum() ; value++)
    {
        QThread::msleep(50);
        ui->progressBar->setValue(value);
        qApp->processEvents(QEventLoop::AllEvents);
    }

    // Changer l'index du stackedWidget à 4.
    ui->stackedWidget->setCurrentIndex(4);
    ui->progressBar->setValue(0);

    // Réinitialiser l'image.
    resetImage();

    //////////////////// CODE DE THIBAUD ////////////////////
    /*

    */
}

// Méthode appelée lorsqu'on clique sur le bouton 6
void MainWindow::on_pushButton_6_clicked()
{
    if (rowCount <= 0) {
        qDebug() << "Aucun tableau inséré.";
        return;
    }

    // Afficher la progression de la barre de progression.
    for(int value = 1; value <= ui->progressBar_2->maximum() ; value++)
    {
        QThread::msleep(50);
        ui->progressBar_2->setValue(value);
        qApp->processEvents(QEventLoop::AllEvents);
    }

    // Changer l'index du stackedWidget à 4.
    ui->stackedWidget->setCurrentIndex(4);
    ui->progressBar_2->setValue(0);

    // Réinitialiser le ui->tableWidget.
    resetTableWidget();

    //////////////////// CODE DE THIBAUD ////////////////////
    /*

    */
}

// Méthode pour réinitialiser le contenu du label_5 après le changement de l'index du stackedWidget.
void MainWindow::resetImage()
{
    ui->label_5->clear();  // Effacer le contenu du label pour faire disparaître l'image.
    imageAdd = false;  // Réinitialiser la variable pour indiquer qu'aucune image n'est insérée.

    // Charger l'image "no-image.jpg" à partir des ressources.
    QImage noImage(":/Image/no-image.jpg");
    QPixmap pixmap = QPixmap::fromImage(noImage);

    ui->label_5->setPixmap(pixmap);
}

// Méthode pour réinitialiser le ui->tableWidget après le changement de l'index du stackedWidget.
void MainWindow::resetTableWidget()
{
    ui->tableWidget->clear();  // Effacer toutes les cellules du tableau.
    ui->tableWidget->setRowCount(0);  // Réinitialiser le nombre de lignes à zéro.
    ui->tableWidget->setColumnCount(0);  // Réinitialiser le nombre de colonnes à zéro.
    rowCount = 0;  // Réinitialiser la variable pour le nombre de lignes à zéro.
}
