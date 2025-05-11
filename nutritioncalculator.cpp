#include "nutritioncalculator.h"

NutritionCalculator::NutritionCalculator(QObject *parent) : QObject(parent) {}

NutritionCalculator::Nutrition NutritionCalculator::calculate(double weight, Goal goal, Activity activity) {
    Nutrition result;

    // Расчет белка
    result.protein = (goal == WEIGHT_LOSS) ? 2.0 * weight : 1.6 * weight;

    // Расчет жиров
    result.fats = (goal == WEIGHT_LOSS) ? 0.8 * weight : 1.0 * weight;

    // Расчет углеводов (база)
    result.carbs = (goal == WEIGHT_LOSS) ? 3.0 * weight : 6.0 * weight;

    // Корректировка углеводов по активности
    switch(activity) {
    case LOW: result.carbs -= 1.0 * weight; break;
    case HIGH: result.carbs += 1.0 * weight; break;
    case MEDIUM: break;
    }

    // Расчет калорий (1г белка/углеводов = 4 ккал, 1г жиров = 9 ккал)
    result.calories = static_cast<int>(result.protein * 4 + result.fats * 9 + result.carbs * 4);

    return result;
}
