// Equilateral.h
#pragma once
#include "Triangle.h"

class Equilateral {
private:
    Triangle triangle;
    double area;

public:
    Equilateral(double side = 1)
        : triangle(side, side, side), area(0) {
        calculateArea();
    }

    void setSide(double side) {
        triangle.setSides(side, side, side);
        calculateArea();
    }

    double getArea() const { return area; }

    void calculateArea() {
        double side = triangle.getSideA();
        area = (pow(side, 2) * sqrt(3)) / 4;
    }

    void display() const {
        std::cout << "Сторона рiвностороннього трикутника: " << triangle.getSideA() << "\n";
        std::cout << "Площа: " << area << "\n";
        triangle.calculateAngles();
        std::cout << "Периметр: " << triangle.calculatePerimeter() << "\n";
    }
};
