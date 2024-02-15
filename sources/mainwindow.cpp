#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imageAdd = false;  // Initialisation à false, aucune image n'est insérée au début.
    tableauAdd = 0;  // Initialisation à false, aucun tableau n'est insérée au début.

    // Désactiver les boutons d'analyse de base
    ui->csvAnalyzeButton->setEnabled(false);
    ui->imageAnalyseButton->setEnabled(false);
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
    if (tableauAdd == 0) {
        qDebug() << "Aucun tableau inséré";
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
        QMessageBox::warning(this,"Image introuvable", "Aucun fichier selectionné");
        return;
    }

    imagePixmap = QPixmap(nomFichier);

    // Vérifier si le chargement de l'image est réussi
    if (imagePixmap.isNull()) {
        QMessageBox message;
        message.setText("Erreur lors du chargement de l'image.");
        message.exec();
        return;
    }

    // Redimensionner l'image avec le nouveau ratio d'aspect et la placer dans le label

    ui->image->setPixmap(imagePixmap.scaled(ui->image->size(), Qt::KeepAspectRatio));

    imageAdd = true;  // Indiquer qu'une image a été insérée.
    ui->imageAnalyseButton->setEnabled(true);
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

    inFile.setEncoding(QStringConverter::Latin1);  // Utilisez la nouvelle classe pour Qt 6 et versions ultérieures


    QString allFile = inFile.readAll();
    QStringList listRow = allFile.split('\n');

    for(int i = 0 ; i < listRow.size() ; i++)
    {
        QStringList row = listRow.at(i).split(';');

        int currentRowCount = ui->csvTable->rowCount();
        ui->csvTable->insertRow(currentRowCount);

        int currentColumnCount = ui->csvTable->columnCount();
        int newColumnCount = row.size();

        if (newColumnCount > currentColumnCount) {
            ui->csvTable->setColumnCount(newColumnCount);
        }

        for (int col = 0; col < row.size(); ++col) {

            QString cellValue = row[col].remove("\"");
            QTableWidgetItem *item = new QTableWidgetItem(cellValue);
            ui->csvTable->setItem(currentRowCount, col, item);
        }
        ui->csvTable->horizontalHeader()->hide();
        ui->csvTable->verticalHeader()->hide();
    }
    mFile.close();
    tableauAdd = 1;
    ui->csvAnalyzeButton->setEnabled(true);
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
    ui->imageAnalyseButton->setEnabled(false);
}

// Méthode pour réinitialiser le ui->tableWidget après le changement de l'index du stackedWidget.
void MainWindow::resetTableWidget()
{
    ui->csvTable->clear();  // Effacer toutes les cellules du tableau.
    ui->csvTable->setRowCount(0);  // Réinitialiser le nombre de lignes à zéro.
    ui->csvTable->setColumnCount(0);  // Réinitialiser le nombre de colonnes à zéro.
    tableauAdd = 0;
    ui->csvAnalyzeButton->setEnabled(false);
}

void MainWindow::resizeEvent(QResizeEvent* QEvent)
{
    QMainWindow::resizeEvent(QEvent);

    if (imageAdd) {
        ui->image->setPixmap(imagePixmap.scaled(ui->image->size(), Qt::KeepAspectRatio));
    }
}

