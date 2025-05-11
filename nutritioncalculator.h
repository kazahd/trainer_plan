#ifndef NUTRITIONCALCULATOR_H
#define NUTRITIONCALCULATOR_H

#include <QObject>

class NutritionCalculator : public QObject {
    Q_OBJECT
public:
    enum Goal { WEIGHT_LOSS, MUSCLE_GAIN };
    enum Activity { LOW, MEDIUM, HIGH };

    struct Nutrition {
        int calories;
        double protein;
        double fats;
        double carbs;
    };

    explicit NutritionCalculator(QObject *parent = nullptr);
    Nutrition calculate(double weight, Goal goal, Activity activity);
};

#endif // NUTRITIONCALCULATOR_H
