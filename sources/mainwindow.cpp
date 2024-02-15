#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imageAdd = false;  // Initialisation à false, aucune image n'est insérée au début.
    rowCount = 0;  // Initialisation du nombre de lignes à zéro.
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_csvButton_clicked()
{
    ui->content->setCurrentIndex(0);
}


void MainWindow::on_imageButton_clicked()
{
    ui->content->setCurrentIndex(1);
}


void MainWindow::on_helpButton_clicked()
{
    ui->content->setCurrentIndex(2);
}


void MainWindow::on_csvAnalyzeButton_clicked()
{
    if (rowCount <= 0) {
        qDebug() << "Aucun tableau inséré.";
        return;
    }

    // Afficher la progression de la barre de progression.
    for(int value = 1; value <= ui->csvProgressBar->maximum() ; value++)
    {
        QThread::msleep(50);
        ui->csvProgressBar->setValue(value);
        qApp->processEvents(QEventLoop::AllEvents);
    }

    // Changer l'index du stackedWidget à 4.
    ui->content->setCurrentIndex(3);
    ui->csvProgressBar->setValue(0);

    // Réinitialiser le ui->tableWidget.
    resetTableWidget();

    //////////////////// CODE DE THIBAUD ////////////////////
    /*

    */
}


void MainWindow::on_imageAnalyseButton_clicked()
{
    if (!imageAdd) {
        qDebug() << "Aucune image insérée.";
        return;
    }

    // Afficher la progression de la barre de progression.
    for(int value = 1; value <= ui->imageProgressBar->maximum() ; value++)
    {
        QThread::msleep(50);
        ui->imageProgressBar->setValue(value);
        qApp->processEvents(QEventLoop::AllEvents);
    }

    // Changer l'index du stackedWidget à 4.
    ui->content->setCurrentIndex(4);
    ui->imageProgressBar->setValue(0);

    // Réinitialiser l'image.
    resetImage();

    //////////////////// CODE DE THIBAUD ////////////////////
    /*

    */
}


void MainWindow::on_imageLoadButton_clicked()
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

    // Charger l'image dans le label_12.
    imagePixmap = QPixmap(nomFichier);

    // Récupérer les dimensions du label_12
    int labelWidth = ui->image->width();
    int labelHeight = ui->image->height();

    // Redimensionner l'image avec le nouveau ratio d'aspect
    imagePixmap.scaled(ui->imageContainer->width(), ui->imageContainer->height(), Qt::KeepAspectRatio);

    ui->image->setPixmap(imagePixmap);

    imageAdd = true;  // Indiquer qu'une image a été insérée.
}


void MainWindow::on_csvLoadButton_clicked()
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
    QStringList listValue = readedLine.split(";");
    ui->csvTable->setColumnCount(listValue.size());
    ui->csvTable->setHorizontalHeaderLabels(listValue);

    while(!inFile.atEnd())
    {
        QString readedLine = inFile.readLine();
        QStringList listValue = readedLine.split(";");

        rowCount += 1;  // Incrémenter le nombre de lignes.

        cter += 1;
        ui->csvTable->setRowCount(cter);
        for(int k = 0; k < listValue.size(); k++)
        {
            // Créer un élément non modifiable et l'ajouter à la table.
            QTableWidgetItem *item = new QTableWidgetItem(listValue[k]);
            ui->csvTable->setItem(cter-1, k, item);
        }
    }
    mFile.flush();
    mFile.close();
}

// Méthode pour réinitialiser le contenu du label_5 après le changement de l'index du stackedWidget.
void MainWindow::resetImage()
{
    ui->image->clear();  // Effacer le contenu du label pour faire disparaître l'image.
    imageAdd = false;  // Réinitialiser la variable pour indiquer qu'aucune image n'est insérée.

    // Charger l'image "no-image.jpg" à partir des ressources.
    QImage noImage(":/Image/no-image.jpg");
    QPixmap pixmap = QPixmap::fromImage(noImage);

    ui->image->setPixmap(pixmap);
}

// Méthode pour réinitialiser le ui->tableWidget après le changement de l'index du stackedWidget.
void MainWindow::resetTableWidget()
{
    ui->csvTable->clear();  // Effacer toutes les cellules du tableau.
    ui->csvTable->setRowCount(0);  // Réinitialiser le nombre de lignes à zéro.
    ui->csvTable->setColumnCount(0);  // Réinitialiser le nombre de colonnes à zéro.
    rowCount = 0;  // Réinitialiser la variable pour le nombre de lignes à zéro.
}
