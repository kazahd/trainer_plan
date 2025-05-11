#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QVector>
#include <QStringList>
#include "nutritiondialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// Структура для хранения информации об упражнении
struct Exercise {
    QString name;
    QString intensity;
    QString setsReps;
};

// Структура для хранения тренировочного дня
struct WorkoutDay {
    QString dayName;
    QVector<Exercise> exercises;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Слоты для обработки нажатий кнопок
    void on_createPlanButton_clicked();
    void on_selectPlanButton_clicked();
    void on_mainMenuButton_clicked();
    void on_mainMenuButton_2_clicked();
    void on_mainMenuButton_3_clicked();
    void on_generatePlanButton_clicked();
    void on_addExerciseButton_clicked();
    void on_saveCustomPlanButton_clicked();
    void on_themeComboBox_currentIndexChanged(int index);
    void onCalculateNutritionClicked();
    void on_calculateNutritionButton_clicked();

private:
    // Вспомогательные методы
    void setupTrainingPlans();  // Инициализация тренировочных планов
    void showMainMenu();        // Показать главное меню
    void showPlanSelection();   // Показать выбор плана
    void showPlanCreation();    // Показать создание плана
    void showGeneratedPlan(const QVector<WorkoutDay>& plan); // Показать сгенерированный план
    void applyTheme(const QString& themeStyle = ""); // Применить тему
    void setupFonts();          // Настроить шрифты
    void setupStyles();         // Настроить стили
    void setupUI();             // Настроить UI компоненты

    Ui::MainWindow *ui;
    QMap<QString, QMap<QString, QVector<WorkoutDay>>> trainingPlans; // Хранилище планов
    QVector<WorkoutDay> currentPlan; // Текущий план
    QString buttonStyle;        // Стиль кнопок
};
#endif // MAINWINDOW_H
