// main.cpp
#include <iostream>
#include "Triangle.h"
#include "Equilateral.h"

int main() {
    setlocale(LC_ALL, "UKR");

    // ��������� ��'��� Triangle
    Triangle triangle(3, 4, 5);
    std::cout << "��������� ���������:\n";
    triangle.calculateAngles();
    std::cout << "��������: " << triangle.calculatePerimeter() << "\n\n";

    // ��������� ��'��� Equilateral
    Equilateral equilateral(5);
    std::cout << "�i����������i� ���������:\n";
    equilateral.display();

    return 0;
}
