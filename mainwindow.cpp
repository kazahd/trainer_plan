#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Инициализация компонентов приложения
    setupFonts();
    setupStyles();
    setupUI();

    setupTrainingPlans();

    showMainMenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupFonts()
{
    //Шрифт для заголовка
    QFont titleFont("Century Gothic", 18, QFont::Bold);

    // Применяем к основным заголовкам
    ui->label->setFont(titleFont);
    ui->label_2->setFont(titleFont);
    ui->label_5->setFont(titleFont);
    ui->label_6->setFont(titleFont);

    // Основной шрифт для приложения
    QFont appFont("Century Gothic", 10);
    qApp->setFont(appFont);

    // Шрифт для таблиц
    ui->planTable->setFont(appFont);
    ui->customPlanTable->setFont(appFont);
}

void MainWindow::setupStyles()
{
    // Стиль кнопок
    buttonStyle = R"(
        QPushButton {
            background-color: #2E2E2E;
            color: white;
            border-radius: 15px;
            padding: 8px 16px;
            border: 2px solid #1E1E1E;
            min-width: 80px;
            min-height: 25px;
            font-family: "Century Gothic";
        }
        QPushButton:hover {
            background-color: #3E3E3E;
        }
        QPushButton:pressed {
            background-color: #1E1E1E;
        }
    )";

    // Начальная светлая тема
    applyTheme(R"(
        QMainWindow, QDialog {
            background-color: #F5F5F5;
        }
        QTableWidget {
            background-color: white;
            gridline-color: #E0E0E0;
            border: 1px solid #CCCCCC;
        }
        QHeaderView::section {
            background-color: #2E2E2E;
            color: white;
            padding: 5px;
            border: none;
        }
        QLineEdit, QComboBox {
            padding: 5px;
            border: 1px solid #CCCCCC;
            border-radius: 3px;
        }
    )");
}

void MainWindow::setupUI()
{
    // Настройка списка тем
    ui->themeComboBox->addItem("Светлая", "light");
    ui->themeComboBox->addItem("Темная", "dark");

    // Настройка таблицы плана
    ui->planTable->setColumnCount(3);
    ui->planTable->setHorizontalHeaderLabels({"Упражнение", "Интенсивность", "Подходы/Повторения"});
    ui->planTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->planTable->verticalHeader()->setDefaultSectionSize(32);
    ui->planTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->planTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // Настройка таблицы создания плана
    ui->customPlanTable->setColumnCount(4);
    ui->customPlanTable->setHorizontalHeaderLabels({"День", "Упражнение", "Интенсивность", "Подходы/Повторения"});
    ui->customPlanTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->customPlanTable->verticalHeader()->setDefaultSectionSize(32);

    /*
    // Настройка выпадающих списков
    ui->goalComboBox->addItems({"бодибилдинг", "пауэрлифтинг"});
    ui->levelComboBox->addItems({"менее года", "1-3 года", "более 3 лет"});
    ui->intensityComboBox->addItems({"легкая", "средняя", "тяжелая"});
    */

    // Порядок дней недели
    QStringList daysOrder = {"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};
    ui->dayComboBox->addItems(daysOrder);
}

void MainWindow::setupTrainingPlans()
{
    trainingPlans.clear();

    // Бодибилдинг - менее года
    QVector<WorkoutDay> bbLessThanYear;
    {
        WorkoutDay day1;
        day1.dayName = "Понедельник";
        day1.exercises = {
            {"жим лежа", "средняя", "3х8-12"},
            {"тяга вертикального блока", "средняя", "3х8-12"},
            {"разгибания ног в тренажере", "легкая", "3х12-15"},
            {"сгибания ног в тренажере", "легкая", "3х12-15"}
        };

        WorkoutDay day2;
        day2.dayName = "Среда";
        day2.exercises = {
            {"присед со штангой", "средняя", "3х6-8"},
            {"румынская тяга", "средняя", "3х8-12"},
            {"жим штанги сидя", "легкая", "3х8-12"},
            {"разгибания рук в блоке", "средняя", "3х12-15"}
        };

        WorkoutDay day3;
        day3.dayName = "Пятница";
        day3.exercises = {
            {"жим лёжа 30°", "средняя", "3х8-12"},
            {"тяга горизонтального блока", "тяжелая", "3х6-8"},
            {"разгибания ног в тренажере", "средняя", "3х8-12"},
            {"сгибания ног в тренажере", "средняя", "3х8-12"}
        };

        bbLessThanYear = {day1, day2, day3};
    }

    // Бодибилдинг - 1-3 года
    QVector<WorkoutDay> bbOneToThreeYears;
    {
        WorkoutDay day1;
        day1.dayName = "Понедельник";
        day1.exercises = {
            {"жим лежа 0°", "средняя", "4х8-12"},
            {"тяга вертикального блока", "средняя", "4х8-12"},
            {"отведения гантелей", "средняя", "3х12-15"},
            {"французский жим лежа", "средняя", "3х8-12"},
            {"присед со штангой", "легкая", "3х6-8"}
        };

        WorkoutDay day2;
        day2.dayName = "Среда";
        day2.exercises = {
            {"румынская тяга", "средняя", "4х8-12"},
            {"разгибания ног в тренажере", "тяжелая", "4х8-12"},
            {"тяга горизонтального блока", "легкая", "3х12-15"},
            {"разгибания рук в блоке", "тяжелая", "4х10-12"},
            {"отведения гантелей", "легкая", "2х12-15"}
        };

        WorkoutDay day3;
        day3.dayName = "Пятница";
        day3.exercises = {
            {"жим лёжа 0°", "тяжелая", "4х8-12"},
            {"тяга вертикального блока", "тяжелая", "4х8-12"},
            {"отведения гантелей", "средняя", "4х8-12"},
            {"французский жим лежа", "средняя", "3х8-12"},
            {"присед со штангой", "средняя", "4х8-12"}
        };

        bbOneToThreeYears = {day1, day2, day3};
    }

    // Бодибилдинг - более 3 лет
    QVector<WorkoutDay> bbMoreThanThreeYears;
    {
        WorkoutDay day1;
        day1.dayName = "Понедельник";
        day1.exercises = {
            {"жим лёжа", "средняя", "5х8-12"},
            {"тяга вертикального блока", "средняя", "5х8-12"},
            {"шраги с гантелями", "легкая", "3х8-12"},
            {"французский жим лёжа", "средняя", "5х8-12"},
            {"сгибания на бицепс ez грифа", "средняя", "5х8-12"},
            {"молотки", "легкая", "3х8-12"},
            {"подъем на носки в смите", "легкая", "3х12-15"},
            {"сгибания кистей со штангой", "средняя", "4х8-12"}
        };

        WorkoutDay day2;
        day2.dayName = "Среда";
        day2.exercises = {
            {"присед со штангой", "средняя", "5х6-8"},
            {"румынская тяга", "средняя", "5х6-8"},
            {"разгибания ног в тренажере", "легкая", "3х8-12"},
            {"сгибания ног в тренажере", "легкая", "3х8-12"},
            {"жим гантелей сидя", "средняя", "5х8-12"},
            {"отведения на дельты", "легкая", "3х8-12"},
            {"разгибания кистей со штангой", "средняя", "4х8-12"}
        };

        WorkoutDay day3;
        day3.dayName = "Пятница";
        day3.exercises = {
            {"присед со штангой", "легкая", "3х6-8"},
            {"жим гантелей лёжа 30°", "легкая", "3х8-12"},
            {"тяга горизонтального блока", "средняя", "5х8-12"},
            {"отведения на заднюю дельту", "легкая", "3х12-15"},
            {"подъем на носки в смите", "легкая", "3х12-15"},
            {"сгибания кистей со штангой", "средняя", "4х8-12"},
            {"разгибания кистей со штангой", "средняя", "4х8-12"}
        };

        bbMoreThanThreeYears = {day1, day2, day3};
    }

    // Пауэрлифтинг - менее года
    QVector<WorkoutDay> plLessThanYear;
    {
        WorkoutDay day1;
        day1.dayName = "День 1";
        day1.exercises = {
            {"Становая тяга", "тяжелая", "5х5"},
            {"Жим лежа", "средняя", "4х6"},
            {"Рычажная вертикальная тяга", "легкая", "3х6-10"},
            {"Упражнение на пресс", "легкая", "3х6-10"}
        };

        WorkoutDay day2;
        day2.dayName = "День 2";
        day2.exercises = {
            {"Жим лежа", "тяжелая", "5х5"},
            {"Приседания", "средняя", "4х6"},
            {"Армейский жим гантелей", "легкая", "3х6-10"},
            {"Бицепс + Трицепс", "легкая", "3х6-10"}
        };

        WorkoutDay day3;
        day3.dayName = "День 3";
        day3.exercises = {
            {"Приседания", "тяжелая", "5х5"},
            {"Становая тяга", "средняя", "4х6"},
            {"Тяга штанги в наклоне", "легкая", "3х6-10"},
            {"Упражнение на пресс", "легкая", "3х6-10"}
        };

        plLessThanYear = {day1, day2, day3};
    }

    // Пауэрлифтинг - 1-3 года
    QVector<WorkoutDay> plOneToThreeYears;
    {
        WorkoutDay day1;
        day1.dayName = "День 1";
        day1.exercises = {
            {"Жим лежа", "тяжелая", "4х5"},
            {"Горизонтальная тяга", "средняя", "3х8-12"},
            {"Жим стоя", "средняя", "3х8"},
            {"Вертикальная тяга", "легкая", "2х8-12"},
            {"Трицепс", "легкая", "2х8-12"}
        };

        WorkoutDay day2;
        day2.dayName = "День 2";
        day2.exercises = {
            {"Приседания", "тяжелая", "4х5"},
            {"Лицевая тяга", "средняя", "3х8-12"},
            {"Становая тяга", "тяжелая", "4х5"},
            {"Пресс", "легкая", "3х8-12"}
        };

        WorkoutDay day3;
        day3.dayName = "День 3";
        day3.exercises = {
            {"Жим стоя", "тяжелая", "4х5"},
            {"Вертикальная тяга", "средняя", "3х8-12"},
            {"Жим лежа", "средняя", "3х8"},
            {"Горизонтальная тяга", "легкая", "2х8-12"},
            {"Трицепс", "легкая", "2х8-12"}
        };

        WorkoutDay day4;
        day4.dayName = "День 4";
        day4.exercises = {
            {"Становая тяга", "тяжелая", "4х5"},
            {"Лицевая тяга", "легкая", "2х8-12"},
            {"Приседания", "средняя", "3х8"},
            {"Пресс", "легкая", "3х8-12"},
            {"Бицепс", "легкая", "3х8-12"}
        };

        plOneToThreeYears = {day1, day2, day3, day4};
    }

    // Пауэрлифтинг - более 3 лет
    QVector<WorkoutDay> plMoreThanThreeYears;
    {
        WorkoutDay day1;
        day1.dayName = "День 1";
        day1.exercises = {
            {"Становая тяга", "тяжелая", "5х5"},
            {"Жим лежа", "средняя", "4х8"},
            {"Тяга гантели в наклоне", "средняя", "3х6-10"},
            {"Бицепс", "легкая", "2х6-12"}
        };

        WorkoutDay day2;
        day2.dayName = "День 2";
        day2.exercises = {
            {"Жим лежа", "тяжелая", "5х5"},
            {"Приседания", "тяжелая", "5х5"},
            {"Упражнение на пресс", "легкая", "3х6-10"},
            {"Трицепс", "легкая", "2х6-12"}
        };

        WorkoutDay day3;
        day3.dayName = "День 3";
        day3.exercises = {
            {"Приседания", "тяжелая", "5х5"},
            {"Становая тяга", "тяжелая", "5х5"},
            {"Вертикальный блок", "средняя", "3х6-10"},
            {"Армейский жим гантелей", "средняя", "3х6-10"}
        };

        plMoreThanThreeYears = {day1, day2, day3};
    }

    // Добавляем все планы в общую структуру
    trainingPlans["бодибилдинг"]["менее года"] = bbLessThanYear;
    trainingPlans["бодибилдинг"]["1-3 года"] = bbOneToThreeYears;
    trainingPlans["бодибилдинг"]["более 3 лет"] = bbMoreThanThreeYears;

    trainingPlans["пауэрлифтинг"]["менее года"] = plLessThanYear;
    trainingPlans["пауэрлифтинг"]["1-3 года"] = plOneToThreeYears;
    trainingPlans["пауэрлифтинг"]["более 3 лет"] = plMoreThanThreeYears;
}

void MainWindow::showMainMenu()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::showPlanSelection()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::showPlanCreation()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->customPlanTable->setRowCount(0);
    ui->exerciseNameEdit->clear();
    ui->setsRepsEdit->clear();
}

void MainWindow::showGeneratedPlan(const QVector<WorkoutDay>& plan)
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->planTable->setRowCount(0);

    int row = 0;
    for (const auto& day : plan) {
        // Добавляем заголовок дня
        ui->planTable->insertRow(row);
        QTableWidgetItem* dayItem = new QTableWidgetItem(day.dayName);
        dayItem->setBackground(QColor(200, 200, 200));
        dayItem->setTextAlignment(Qt::AlignCenter);
        ui->planTable->setItem(row, 0, dayItem);
        ui->planTable->setSpan(row, 0, 1, 3);
        row++;

        // Добавляем упражнения
        for (const auto& exercise : day.exercises) {
            ui->planTable->insertRow(row);
            ui->planTable->setItem(row, 0, new QTableWidgetItem(exercise.name));
            ui->planTable->setItem(row, 1, new QTableWidgetItem(exercise.intensity));
            ui->planTable->setItem(row, 2, new QTableWidgetItem(exercise.setsReps));
            row++;
        }
    }
}

void MainWindow::applyTheme(const QString& themeStyle)
{
    QString fullStyle = themeStyle + buttonStyle;
    qApp->setStyleSheet(fullStyle);

}

// Обработчики событий
void MainWindow::on_createPlanButton_clicked()
{
    showPlanCreation();
}

void MainWindow::on_selectPlanButton_clicked()
{
    showPlanSelection();
}

void MainWindow::on_mainMenuButton_clicked() { showMainMenu(); }
void MainWindow::on_mainMenuButton_2_clicked() { showMainMenu(); }
void MainWindow::on_mainMenuButton_3_clicked() { showMainMenu(); }

void MainWindow::on_generatePlanButton_clicked()
{
    QString goal = ui->goalComboBox->currentText();
    QString level = ui->levelComboBox->currentText();

    if (trainingPlans.contains(goal)) {
        if (trainingPlans[goal].contains(level)) {
            showGeneratedPlan(trainingPlans[goal][level]);
            return;
        }
    }
    QMessageBox::warning(this, "Ошибка", "Не удалось найти подходящий план тренировок.");
}

void MainWindow::on_addExerciseButton_clicked()
{
    QString exerciseName = ui->exerciseNameEdit->text().trimmed();
    QString setsReps = ui->setsRepsEdit->text().trimmed();

    if (exerciseName.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите название упражнения");
        return;
    }

    if (setsReps.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите подходы и повторения");
        return;
    }

    int row = ui->customPlanTable->rowCount();
    ui->customPlanTable->insertRow(row);
    ui->customPlanTable->setItem(row, 0, new QTableWidgetItem(ui->dayComboBox->currentText()));
    ui->customPlanTable->setItem(row, 1, new QTableWidgetItem(exerciseName));
    ui->customPlanTable->setItem(row, 2, new QTableWidgetItem(ui->intensityComboBox->currentText()));
    ui->customPlanTable->setItem(row, 3, new QTableWidgetItem(setsReps));

    ui->exerciseNameEdit->clear();
    ui->setsRepsEdit->clear();
}

void MainWindow::on_saveCustomPlanButton_clicked()
{
    if (ui->customPlanTable->rowCount() == 0) {
        QMessageBox::warning(this, "Ошибка", "Добавьте хотя бы одно упражнение");
        return;
    }

    QVector<WorkoutDay> customPlan;
    QMap<QString, WorkoutDay> daysMap;

    // Собираем упражнения по дням
    for (int i = 0; i < ui->customPlanTable->rowCount(); ++i) {
        QString dayName = ui->customPlanTable->item(i, 0)->text();
        Exercise exercise = {
            ui->customPlanTable->item(i, 1)->text(),
            ui->customPlanTable->item(i, 2)->text(),
            ui->customPlanTable->item(i, 3)->text()
        };

        if (!daysMap.contains(dayName)) {
            WorkoutDay day;
            day.dayName = dayName;
            daysMap[dayName] = day;
        }
        daysMap[dayName].exercises.append(exercise);
    }

    // Сохраняем дни в правильном порядке
    QStringList dayOrder = {"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};
    for (const QString &dayName : dayOrder) {
        if (daysMap.contains(dayName)) {
            customPlan.append(daysMap[dayName]);
        }
    }

    showGeneratedPlan(customPlan);
}

void MainWindow::on_themeComboBox_currentIndexChanged(int index)
{
    QString theme = ui->themeComboBox->itemData(index).toString();
    QString themeStyle;

    if (theme == "dark") {
        themeStyle = R"(
        /* Основные элементы */
        QWidget {
            color: white;
            background-color: #333;
        }
        /* Текстовые элементы */
        QLabel, QComboBox, QLineEdit, QTextEdit, QSpinBox {
            color: white;
        }
        /* Таблицы */
        QTableWidget {
            background-color: #444;
            color: white;
            gridline-color: #555;
        }
        /* Заголовки таблиц */
        QHeaderView::section {
            background-color: #222;
            color: white;
            border: none;
        }
        /* Элементы ввода */
        QLineEdit, QComboBox, QTextEdit {
            background-color: #555;
            border: 1px solid #666;
        }
        )";
    } else { // Светлая тема
        themeStyle = R"(
            QMainWindow, QDialog {
                background-color: #D3D3D3;
            }
            QTableWidget {
                background-color: #FFFFFF;
                gridline-color: #E0E0E0;
            }
            QHeaderView::section {
                background-color: #2E2E2E;
                color: #FFFFFF;
            }
            QLineEdit, QComboBox {
                border: 1px solid #CCCCCC;
            }
        )";
    }

    applyTheme(themeStyle);
}
