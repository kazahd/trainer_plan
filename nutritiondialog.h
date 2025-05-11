#ifndef NUTRITIONDIALOG_H
#define NUTRITIONDIALOG_H

#include <QDialog>
#include "nutritioncalculator.h"

namespace Ui {
class NutritionDialog;
}

class NutritionDialog : public QDialog {
    Q_OBJECT
public:
    explicit NutritionDialog(QWidget *parent = nullptr);
    ~NutritionDialog();

    NutritionCalculator::Nutrition getResults() const;

private slots:
    void calculate();

private:
    Ui::NutritionDialog *ui;
    NutritionCalculator::Nutrition currentResult;
};


#endif // NUTRITIONDIALOG_H
