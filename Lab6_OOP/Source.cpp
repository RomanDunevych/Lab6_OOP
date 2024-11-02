// main.cpp
#include <iostream>
#include "Triangle.h"
#include "Equilateral.h"

int main() {
    setlocale(LC_ALL, "UKR");

    // Створюємо об'єкт Triangle
    Triangle triangle(3, 4, 5);
    std::cout << "Звичайний трикутник:\n";
    triangle.calculateAngles();
    std::cout << "Периметр: " << triangle.calculatePerimeter() << "\n\n";

    // Створюємо об'єкт Equilateral
    Equilateral equilateral(5);
    std::cout << "Рiвностороннiй трикутник:\n";
    equilateral.display();

    return 0;
}
