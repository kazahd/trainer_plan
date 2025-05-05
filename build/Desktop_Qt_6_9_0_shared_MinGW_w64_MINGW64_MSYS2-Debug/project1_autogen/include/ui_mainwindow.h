/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QStackedWidget *stackedWidget;
    QWidget *mainMenuPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *createPlanButton;
    QPushButton *selectPlanButton;
    QComboBox *themeComboBox;
    QWidget *planSelectionPage;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *goalComboBox;
    QLabel *label_4;
    QComboBox *levelComboBox;
    QPushButton *generatePlanButton;
    QPushButton *mainMenuButton;
    QWidget *planCreationPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QComboBox *dayComboBox;
    QLineEdit *exerciseNameEdit;
    QComboBox *intensityComboBox;
    QLineEdit *setsRepsEdit;
    QPushButton *addExerciseButton;
    QTableWidget *customPlanTable;
    QPushButton *saveCustomPlanButton;
    QPushButton *mainMenuButton_2;
    QWidget *planViewPage;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QTableWidget *planTable;
    QPushButton *mainMenuButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        mainMenuPage = new QWidget();
        mainMenuPage->setObjectName("mainMenuPage");
        verticalLayout_2 = new QVBoxLayout(mainMenuPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(mainMenuPage);
        label->setObjectName("label");
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label);

        createPlanButton = new QPushButton(mainMenuPage);
        createPlanButton->setObjectName("createPlanButton");

        verticalLayout_2->addWidget(createPlanButton);

        selectPlanButton = new QPushButton(mainMenuPage);
        selectPlanButton->setObjectName("selectPlanButton");

        verticalLayout_2->addWidget(selectPlanButton);

        themeComboBox = new QComboBox(mainMenuPage);
        themeComboBox->setObjectName("themeComboBox");

        verticalLayout_2->addWidget(themeComboBox);

        stackedWidget->addWidget(mainMenuPage);
        planSelectionPage = new QWidget();
        planSelectionPage->setObjectName("planSelectionPage");
        verticalLayout_3 = new QVBoxLayout(planSelectionPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(planSelectionPage);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_3 = new QLabel(planSelectionPage);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_3);

        goalComboBox = new QComboBox(planSelectionPage);
        goalComboBox->addItem(QString());
        goalComboBox->addItem(QString());
        goalComboBox->setObjectName("goalComboBox");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, goalComboBox);

        label_4 = new QLabel(planSelectionPage);
        label_4->setObjectName("label_4");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_4);

        levelComboBox = new QComboBox(planSelectionPage);
        levelComboBox->addItem(QString());
        levelComboBox->addItem(QString());
        levelComboBox->addItem(QString());
        levelComboBox->setObjectName("levelComboBox");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, levelComboBox);


        verticalLayout_3->addLayout(formLayout);

        generatePlanButton = new QPushButton(planSelectionPage);
        generatePlanButton->setObjectName("generatePlanButton");

        verticalLayout_3->addWidget(generatePlanButton);

        mainMenuButton = new QPushButton(planSelectionPage);
        mainMenuButton->setObjectName("mainMenuButton");

        verticalLayout_3->addWidget(mainMenuButton);

        stackedWidget->addWidget(planSelectionPage);
        planCreationPage = new QWidget();
        planCreationPage->setObjectName("planCreationPage");
        verticalLayout_4 = new QVBoxLayout(planCreationPage);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(planCreationPage);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        dayComboBox = new QComboBox(planCreationPage);
        dayComboBox->setObjectName("dayComboBox");

        horizontalLayout->addWidget(dayComboBox);

        exerciseNameEdit = new QLineEdit(planCreationPage);
        exerciseNameEdit->setObjectName("exerciseNameEdit");

        horizontalLayout->addWidget(exerciseNameEdit);

        intensityComboBox = new QComboBox(planCreationPage);
        intensityComboBox->addItem(QString());
        intensityComboBox->addItem(QString());
        intensityComboBox->addItem(QString());
        intensityComboBox->setObjectName("intensityComboBox");

        horizontalLayout->addWidget(intensityComboBox);

        setsRepsEdit = new QLineEdit(planCreationPage);
        setsRepsEdit->setObjectName("setsRepsEdit");

        horizontalLayout->addWidget(setsRepsEdit);

        addExerciseButton = new QPushButton(planCreationPage);
        addExerciseButton->setObjectName("addExerciseButton");

        horizontalLayout->addWidget(addExerciseButton);


        verticalLayout_4->addLayout(horizontalLayout);

        customPlanTable = new QTableWidget(planCreationPage);
        if (customPlanTable->columnCount() < 4)
            customPlanTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        customPlanTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        customPlanTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        customPlanTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        customPlanTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        customPlanTable->setObjectName("customPlanTable");
        customPlanTable->setRowCount(0);
        customPlanTable->setColumnCount(4);
        customPlanTable->horizontalHeader()->setVisible(true);
        customPlanTable->verticalHeader()->setVisible(true);

        verticalLayout_4->addWidget(customPlanTable);

        saveCustomPlanButton = new QPushButton(planCreationPage);
        saveCustomPlanButton->setObjectName("saveCustomPlanButton");

        verticalLayout_4->addWidget(saveCustomPlanButton);

        mainMenuButton_2 = new QPushButton(planCreationPage);
        mainMenuButton_2->setObjectName("mainMenuButton_2");

        verticalLayout_4->addWidget(mainMenuButton_2);

        stackedWidget->addWidget(planCreationPage);
        planViewPage = new QWidget();
        planViewPage->setObjectName("planViewPage");
        verticalLayout_5 = new QVBoxLayout(planViewPage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_6 = new QLabel(planViewPage);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        planTable = new QTableWidget(planViewPage);
        if (planTable->columnCount() < 3)
            planTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        planTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        planTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        planTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        planTable->setObjectName("planTable");
        planTable->setRowCount(0);
        planTable->setColumnCount(3);
        planTable->horizontalHeader()->setVisible(true);
        planTable->verticalHeader()->setVisible(true);

        verticalLayout_5->addWidget(planTable);

        mainMenuButton_3 = new QPushButton(planViewPage);
        mainMenuButton_3->setObjectName("mainMenuButton_3");

        verticalLayout_5->addWidget(mainMenuButton_3);

        stackedWidget->addWidget(planViewPage);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\320\275", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\320\275", nullptr));
        createPlanButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\273\320\260\320\275 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272", nullptr));
        selectPlanButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\276\320\261\321\200\320\260\321\202\321\214 \320\277\320\273\320\260\320\275 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272", nullptr));
#if QT_CONFIG(tooltip)
        themeComboBox->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\202\320\265\320\274\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\261\320\276\321\200 \320\277\320\273\320\260\320\275\320\260 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\273\321\214 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270:", nullptr));
        goalComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\261\320\276\320\264\320\270\320\261\320\270\320\273\320\264\320\270\320\275\320\263", nullptr));
        goalComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\277\320\260\321\203\321\215\321\200\320\273\320\270\321\204\321\202\320\270\320\275\320\263", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \320\277\320\276\320\264\320\263\320\276\321\202\320\276\320\262\320\272\320\270:", nullptr));
        levelComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\274\320\265\320\275\320\265\320\265 \320\263\320\276\320\264\320\260", nullptr));
        levelComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "1-3 \320\263\320\276\320\264\320\260", nullptr));
        levelComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\261\320\276\320\273\320\265\320\265 3 \320\273\320\265\321\202", nullptr));

        generatePlanButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\273\320\260\320\275", nullptr));
        mainMenuButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\277\320\273\320\260\320\275\320\260 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272", nullptr));
        exerciseNameEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\321\217", nullptr));
        intensityComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\273\320\265\320\263\320\272\320\260\321\217", nullptr));
        intensityComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\321\201\321\200\320\265\320\264\320\275\321\217\321\217", nullptr));
        intensityComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\321\202\321\217\320\266\320\265\320\273\320\260\321\217", nullptr));

        setsRepsEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\205\320\276\320\264\321\213 \321\205 \320\277\320\276\320\262\321\202\320\276\321\200\320\265\320\275\320\270\321\217", nullptr));
        addExerciseButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = customPlanTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = customPlanTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = customPlanTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = customPlanTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\205\320\276\320\264\321\213 \321\205 \320\277\320\276\320\262\321\202\320\276\321\200\320\265\320\275\320\270\321\217", nullptr));
        saveCustomPlanButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\273\320\260\320\275", nullptr));
        mainMenuButton_2->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210 \320\277\320\273\320\260\320\275 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = planTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = planTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = planTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\205\320\276\320\264\321\213 \321\205 \320\277\320\276\320\262\321\202\320\276\321\200\320\265\320\275\320\270\321\217", nullptr));
        mainMenuButton_3->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
