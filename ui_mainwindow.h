/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *header;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QSpacerItem *headerSpacer;
    QWidget *body;
    QHBoxLayout *horizontalLayout_2;
    QWidget *navbar;
    QVBoxLayout *verticalLayout_2;
    QPushButton *csvButton;
    QPushButton *imageButton;
    QPushButton *helpButton;
    QSpacerItem *navbarSpacer;
    QStackedWidget *content;
    QWidget *csvPage;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *csvTable;
    QWidget *csvPageButtons;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *csvProgressBar;
    QSpacerItem *csvPageSpacer;
    QPushButton *csvLoadButton;
    QPushButton *csvAnalyzeButton;
    QWidget *imagePage;
    QVBoxLayout *verticalLayout_4;
    QWidget *imageContainer;
    QHBoxLayout *horizontalLayout_8;
    QLabel *image;
    QWidget *imageOptions;
    QVBoxLayout *verticalLayout_7;
    QLabel *scaleLabel;
    QComboBox *scaleComboBox;
    QSpacerItem *imageOptionsSpacer_2;
    QLabel *colorLabel;
    QComboBox *colorComboBox;
    QSpacerItem *imageOptionsSpacer;
    QWidget *imagePageButtons;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *imageProgressBar;
    QSpacerItem *imagePageSpacer;
    QPushButton *imageLoadButton;
    QPushButton *imageAnalyseButton;
    QWidget *helpPage;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *csvResultPage;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *csvResultTable;
    QWidget *csvResultPageButtons;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *csvResultSpacer;
    QPushButton *csvResultSaveButton;
    QWidget *imageResultPage;
    QVBoxLayout *verticalLayout_6;
    QLabel *imageResult;
    QWidget *imageResultPageButtons;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *imageResultSpacer;
    QPushButton *imageResultSaveButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(240, 111, 15);\n"
"}\n"
"\n"
"#header, #logo, #centralwidget{\n"
"	background-color:white;\n"
"}\n"
"\n"
"#body{\n"
"	border-radius:50px;\n"
"}\n"
"\n"
"#content{\n"
"	border-top:1px solid black;\n"
"	border-right:1px solid black;\n"
"	border-bottom:1px solid black;\n"
"\n"
"	border-top-right-radius:5px;\n"
"	border-bottom-right-radius:5px;\n"
"}\n"
"\n"
"#navbar{\n"
"	background-color:rgb(229, 94, 15);\n"
"	border-top:1px solid black;\n"
"	border-bottom:1px solid black;\n"
"	border-left:1px solid black;\n"
"	border-top-left-radius:5px;\n"
"	border-bottom-left-radius:5px;\n"
"}\n"
"/*\n"
"#image {\n"
"	border:1px dashed #EEEEEE;\n"
"}\n"
"*/\n"
"#csvResultTable{\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton{\n"
"	padding-left:1.6em;\n"
"	padding-right:1.6em;\n"
"	padding-top:0.5em;\n"
"	padding-bottom:0.5em;\n"
"	margin-left:0em;\n"
"	margin-right:0em;\n"
"\n"
"	border:none;\n"
"	background-color:rgb(232, 232, 232);\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	bac"
                        "kground-color:rgb(196, 232, 235);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border: 1px solid black;\n"
"	background-color:rgb(191, 219, 234);\n"
"}\n"
"\n"
"QComboBox{\n"
"	background-color:rgb(231, 231, 231);\n"
"	color:black;\n"
"	border:1px solid black;\n"
"	padding-top:0.3em;\n"
"	padding-bottom:0.3em;\n"
"	padding-left:0.3em;\n"
"}\n"
"\n"
"\n"
"QComboBox:hover{\n"
"	background-color:rgb(196, 232, 235);\n"
"}\n"
"\n"
"QComboBox:pressed{\n"
"	background-color:rgb(191, 219, 234);\n"
"}\n"
"\n"
"QComboBox::drop-down{\n"
"	background-color:rgb(231, 231, 231);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color:rgb(231, 231, 231);\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	image: url(\":/images/chevron-down.svg\");\n"
"	padding-right:0.6em;\n"
"	padding-left:0.6em;\n"
"	width:1em;\n"
"}\n"
"\n"
"#csvTable {\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        header = new QWidget(centralwidget);
        header->setObjectName("header");
        horizontalLayout = new QHBoxLayout(header);
        horizontalLayout->setObjectName("horizontalLayout");
        logo = new QLabel(header);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/etex_rgb_baseline_right.png")));

        horizontalLayout->addWidget(logo);

        headerSpacer = new QSpacerItem(303, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(headerSpacer);


        verticalLayout->addWidget(header);

        body = new QWidget(centralwidget);
        body->setObjectName("body");
        horizontalLayout_2 = new QHBoxLayout(body);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        navbar = new QWidget(body);
        navbar->setObjectName("navbar");
        navbar->setMinimumSize(QSize(120, 0));
        verticalLayout_2 = new QVBoxLayout(navbar);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(9, 9, -1, 9);
        csvButton = new QPushButton(navbar);
        csvButton->setObjectName("csvButton");

        verticalLayout_2->addWidget(csvButton);

        imageButton = new QPushButton(navbar);
        imageButton->setObjectName("imageButton");

        verticalLayout_2->addWidget(imageButton);

        helpButton = new QPushButton(navbar);
        helpButton->setObjectName("helpButton");

        verticalLayout_2->addWidget(helpButton);

        navbarSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(navbarSpacer);


        horizontalLayout_2->addWidget(navbar);

        content = new QStackedWidget(body);
        content->setObjectName("content");
        csvPage = new QWidget();
        csvPage->setObjectName("csvPage");
        verticalLayout_3 = new QVBoxLayout(csvPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        csvTable = new QTableWidget(csvPage);
        csvTable->setObjectName("csvTable");

        verticalLayout_3->addWidget(csvTable);

        csvPageButtons = new QWidget(csvPage);
        csvPageButtons->setObjectName("csvPageButtons");
        horizontalLayout_3 = new QHBoxLayout(csvPageButtons);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        csvProgressBar = new QProgressBar(csvPageButtons);
        csvProgressBar->setObjectName("csvProgressBar");
        csvProgressBar->setEnabled(false);
        csvProgressBar->setMinimumSize(QSize(300, 25));
        csvProgressBar->setValue(0);

        horizontalLayout_3->addWidget(csvProgressBar);

        csvPageSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(csvPageSpacer);

        csvLoadButton = new QPushButton(csvPageButtons);
        csvLoadButton->setObjectName("csvLoadButton");

        horizontalLayout_3->addWidget(csvLoadButton);

        csvAnalyzeButton = new QPushButton(csvPageButtons);
        csvAnalyzeButton->setObjectName("csvAnalyzeButton");
        csvAnalyzeButton->setIconSize(QSize(16, 16));
        csvAnalyzeButton->setAutoRepeatDelay(300);
        csvAnalyzeButton->setFlat(false);

        horizontalLayout_3->addWidget(csvAnalyzeButton);


        verticalLayout_3->addWidget(csvPageButtons);

        content->addWidget(csvPage);
        imagePage = new QWidget();
        imagePage->setObjectName("imagePage");
        verticalLayout_4 = new QVBoxLayout(imagePage);
        verticalLayout_4->setObjectName("verticalLayout_4");
        imageContainer = new QWidget(imagePage);
        imageContainer->setObjectName("imageContainer");
        horizontalLayout_8 = new QHBoxLayout(imageContainer);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        image = new QLabel(imageContainer);
        image->setObjectName("image");
        image->setPixmap(QPixmap(QString::fromUtf8(":/images/image.svg")));
        image->setScaledContents(false);
        image->setAlignment(Qt::AlignCenter);
        image->setWordWrap(false);
        image->setMargin(0);

        horizontalLayout_8->addWidget(image);

        imageOptions = new QWidget(imageContainer);
        imageOptions->setObjectName("imageOptions");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageOptions->sizePolicy().hasHeightForWidth());
        imageOptions->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(imageOptions);
        verticalLayout_7->setObjectName("verticalLayout_7");
        scaleLabel = new QLabel(imageOptions);
        scaleLabel->setObjectName("scaleLabel");

        verticalLayout_7->addWidget(scaleLabel);

        scaleComboBox = new QComboBox(imageOptions);
        scaleComboBox->addItem(QString());
        scaleComboBox->addItem(QString());
        scaleComboBox->addItem(QString());
        scaleComboBox->setObjectName("scaleComboBox");

        verticalLayout_7->addWidget(scaleComboBox);

        imageOptionsSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_7->addItem(imageOptionsSpacer_2);

        colorLabel = new QLabel(imageOptions);
        colorLabel->setObjectName("colorLabel");

        verticalLayout_7->addWidget(colorLabel);

        colorComboBox = new QComboBox(imageOptions);
        colorComboBox->addItem(QString());
        colorComboBox->addItem(QString());
        colorComboBox->addItem(QString());
        colorComboBox->setObjectName("colorComboBox");

        verticalLayout_7->addWidget(colorComboBox);

        imageOptionsSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(imageOptionsSpacer);


        horizontalLayout_8->addWidget(imageOptions);


        verticalLayout_4->addWidget(imageContainer);

        imagePageButtons = new QWidget(imagePage);
        imagePageButtons->setObjectName("imagePageButtons");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imagePageButtons->sizePolicy().hasHeightForWidth());
        imagePageButtons->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(imagePageButtons);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        imageProgressBar = new QProgressBar(imagePageButtons);
        imageProgressBar->setObjectName("imageProgressBar");
        imageProgressBar->setEnabled(false);
        imageProgressBar->setMinimumSize(QSize(300, 25));
        imageProgressBar->setMaximum(100);
        imageProgressBar->setValue(0);

        horizontalLayout_4->addWidget(imageProgressBar);

        imagePageSpacer = new QSpacerItem(5, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(imagePageSpacer);

        imageLoadButton = new QPushButton(imagePageButtons);
        imageLoadButton->setObjectName("imageLoadButton");

        horizontalLayout_4->addWidget(imageLoadButton);

        imageAnalyseButton = new QPushButton(imagePageButtons);
        imageAnalyseButton->setObjectName("imageAnalyseButton");

        horizontalLayout_4->addWidget(imageAnalyseButton);


        verticalLayout_4->addWidget(imagePageButtons);

        content->addWidget(imagePage);
        helpPage = new QWidget();
        helpPage->setObjectName("helpPage");
        horizontalLayout_5 = new QHBoxLayout(helpPage);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_2 = new QLabel(helpPage);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::MarkdownText);

        verticalLayout_8->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignTop);

        label_7 = new QLabel(helpPage);
        label_7->setObjectName("label_7");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Text")});
        font1.setWeight(QFont::Medium);
        font1.setStrikeOut(false);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_7->setWordWrap(true);
        label_7->setMargin(6);

        verticalLayout_8->addWidget(label_7);

        label = new QLabel(helpPage);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Text")});
        label->setFont(font2);
        label->setTextFormat(Qt::MarkdownText);
        label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label->setMargin(6);

        verticalLayout_8->addWidget(label);

        label_3 = new QLabel(helpPage);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(true);
        label_3->setFont(font3);
        label_3->setTextFormat(Qt::MarkdownText);

        verticalLayout_8->addWidget(label_3, 0, Qt::AlignHCenter);

        label_4 = new QLabel(helpPage);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_4->setWordWrap(true);
        label_4->setMargin(9);

        verticalLayout_8->addWidget(label_4);

        label_5 = new QLabel(helpPage);
        label_5->setObjectName("label_5");
        label_5->setFont(font3);
        label_5->setTextFormat(Qt::MarkdownText);

        verticalLayout_8->addWidget(label_5, 0, Qt::AlignHCenter);

        label_6 = new QLabel(helpPage);
        label_6->setObjectName("label_6");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sitka Text")});
        font4.setWeight(QFont::Medium);
        font4.setStrikeOut(false);
        font4.setKerning(false);
        font4.setStyleStrategy(QFont::PreferDefault);
        font4.setHintingPreference(QFont::PreferDefaultHinting);
        label_6->setFont(font4);
        label_6->setMouseTracking(true);
        label_6->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_6->setWordWrap(true);
        label_6->setMargin(6);

        verticalLayout_8->addWidget(label_6);


        horizontalLayout_5->addLayout(verticalLayout_8);

        content->addWidget(helpPage);
        csvResultPage = new QWidget();
        csvResultPage->setObjectName("csvResultPage");
        verticalLayout_5 = new QVBoxLayout(csvResultPage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        csvResultTable = new QTableWidget(csvResultPage);
        csvResultTable->setObjectName("csvResultTable");

        verticalLayout_5->addWidget(csvResultTable);

        csvResultPageButtons = new QWidget(csvResultPage);
        csvResultPageButtons->setObjectName("csvResultPageButtons");
        horizontalLayout_6 = new QHBoxLayout(csvResultPageButtons);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        csvResultSpacer = new QSpacerItem(483, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(csvResultSpacer);

        csvResultSaveButton = new QPushButton(csvResultPageButtons);
        csvResultSaveButton->setObjectName("csvResultSaveButton");

        horizontalLayout_6->addWidget(csvResultSaveButton);


        verticalLayout_5->addWidget(csvResultPageButtons);

        content->addWidget(csvResultPage);
        imageResultPage = new QWidget();
        imageResultPage->setObjectName("imageResultPage");
        verticalLayout_6 = new QVBoxLayout(imageResultPage);
        verticalLayout_6->setObjectName("verticalLayout_6");
        imageResult = new QLabel(imageResultPage);
        imageResult->setObjectName("imageResult");

        verticalLayout_6->addWidget(imageResult);

        imageResultPageButtons = new QWidget(imageResultPage);
        imageResultPageButtons->setObjectName("imageResultPageButtons");
        sizePolicy1.setHeightForWidth(imageResultPageButtons->sizePolicy().hasHeightForWidth());
        imageResultPageButtons->setSizePolicy(sizePolicy1);
        horizontalLayout_7 = new QHBoxLayout(imageResultPageButtons);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        imageResultSpacer = new QSpacerItem(526, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(imageResultSpacer);

        imageResultSaveButton = new QPushButton(imageResultPageButtons);
        imageResultSaveButton->setObjectName("imageResultSaveButton");

        horizontalLayout_7->addWidget(imageResultSaveButton);


        verticalLayout_6->addWidget(imageResultPageButtons);

        content->addWidget(imageResultPage);

        horizontalLayout_2->addWidget(content);


        verticalLayout->addWidget(body);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        content->setCurrentIndex(1);
        csvAnalyzeButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logo->setText(QString());
        csvButton->setText(QCoreApplication::translate("MainWindow", "CSV", nullptr));
        imageButton->setText(QCoreApplication::translate("MainWindow", "Image", nullptr));
        helpButton->setText(QCoreApplication::translate("MainWindow", "Aide", nullptr));
        csvLoadButton->setText(QCoreApplication::translate("MainWindow", "Charger le CSV", nullptr));
        csvAnalyzeButton->setText(QCoreApplication::translate("MainWindow", "Analyser", nullptr));
        image->setText(QString());
        scaleLabel->setText(QCoreApplication::translate("MainWindow", "Unit\303\251 de l'\303\251chelle : ", nullptr));
        scaleComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\302\265m", nullptr));
        scaleComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "nm", nullptr));
        scaleComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "pm", nullptr));

        colorLabel->setText(QCoreApplication::translate("MainWindow", "Couleur des bulles : ", nullptr));
        colorComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Rouge", nullptr));
        colorComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Vert", nullptr));
        colorComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Bleu", nullptr));

        imageLoadButton->setText(QCoreApplication::translate("MainWindow", "Charger l'image", nullptr));
        imageAnalyseButton->setText(QCoreApplication::translate("MainWindow", "Analyser", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "### Comment utiliser l\342\200\231application ?", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Cette application permet de d\303\251terminer pour chaque bulle d\342\200\231un \303\251chantillon de pl\303\242tre, la distance la s\303\251parant de la bulle la plus proche.", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Elle peut traiter 2 types de fichiers : \n"
"\n"
"- Un fichier CSV, contenant la position et la taille des bulles\n"
"- Une image\n"
"", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "#### Fichier CSV", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Les colonnes du fichier CSV doivent contenir les informations sur les bulles dans l\342\200\231ordre suivant :\n"
"No., Diam\303\250tre cercle \303\251quivalent, Unit\303\251, Zone, Unit\303\251, Centre de gravit\303\251, Unit\303\251, Diam\303\250tre maximal, Unit\303\251, Diam\303\250tre minimal, Unit\303\251, P\303\251rim\303\250tre, Unit\303\251, Ratio zone, Unit\303\251, Circularit\303\251.\n"
"Certaines informations peuvent \303\252tre absentes, car seuls le diam\303\250tre du cercle \303\251quivalent et le centre de gravit\303\251 (ainsi que leurs unit\303\251s) sont n\303\251cessaires pour nos calculs. Cependant, la position de ces colonnes doit correspondre avec l'ordre pr\303\251c\303\251dent, m\303\252me si les autres colonnes sont vides.\n"
"\n"
"Pour traiter ce fichier, allez dans l\342\200\231onglet \342\200\234CSV\342\200\235,  cliquez et glissez un fichier CSV dans le cadre, ou cliquez sur \342\200\234Importer un CSV\342\200\235 puis s\303\251lectionnez un fichier CSV \303\240 importer.\n"
"Ens"
                        "uite, cliquez sur \342\200\234Traiter\342\200\235, et l\342\200\231application effectuera les calculs, et affichera le r\303\251sultat quand il sera pr\303\252t.\n"
"", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "#### Image", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Pour traiter une image, allez dans l\342\200\231onglet \342\200\234Image\342\200\235, cliquez et glissez une image dans le cadre, ou cliquez sur \342\200\234Importer une image\342\200\235 puis s\303\251lectionnez une image \303\240 importer.\n"
"Puis, entrez l\342\200\231unit\303\251 de l\342\200\231\303\251chelle dans le menu d\303\251roulant.\n"
"Ensuite, cliquez sur \342\200\234Traiter\342\200\235, et l\342\200\231application effectuera les calculs. Les r\303\251sultats seront affich\303\251s \303\240 l\342\200\231\303\251cran quand ils seront pr\303\252ts. Cela peut prendre un certain temps.\n"
"", nullptr));
        csvResultSaveButton->setText(QCoreApplication::translate("MainWindow", "Enregistrer le CSV", nullptr));
        imageResult->setText(QString());
        imageResultSaveButton->setText(QCoreApplication::translate("MainWindow", "Enregistrer l'image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
