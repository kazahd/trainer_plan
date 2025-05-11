#include "nutritiondialog.h"
#include "ui_nutritiondialog.h"

NutritionDialog::NutritionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NutritionDialog)
{
    ui->setupUi(this);

    // Заполняем комбобоксы
    ui->goalComboBox->addItems({"Похудение", "Набор массы"});
    ui->activityComboBox->addItems({"Низкая", "Средняя", "Высокая"});

    connect(ui->calculateButton, &QPushButton::clicked, this, &NutritionDialog::calculate);
}

NutritionDialog::~NutritionDialog()
{
    delete ui;
}

void NutritionDialog::calculate() {
    double weight = ui->weightSpinBox->value();
    auto goal = static_cast<NutritionCalculator::Goal>(ui->goalComboBox->currentIndex());
    auto activity = static_cast<NutritionCalculator::Activity>(ui->activityComboBox->currentIndex());

    NutritionCalculator calculator;
    currentResult = calculator.calculate(weight, goal, activity);

    // Вывод результатов
    ui->proteinLabel->setText(QString::number(currentResult.protein, 'f', 1) + " г");
    ui->fatsLabel->setText(QString::number(currentResult.fats, 'f', 1) + " г");
    ui->carbsLabel->setText(QString::number(currentResult.carbs, 'f', 1) + " г");
    ui->caloriesLabel->setText(QString::number(currentResult.calories) + " ккал");
}

NutritionCalculator::Nutrition NutritionDialog::getResults() const {
    return currentResult;
}
