// Triangle.h
#pragma once
#include <cmath>
#include <iostream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


class Triangle {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(double a = 1, double b = 1, double c = 1)
        : sideA(a), sideB(b), sideC(c) {}

    void setSides(double a, double b, double c) {
        sideA = a;
        sideB = b;
        sideC = c;
    }

    double getSideA() const { return sideA; }
    double getSideB() const { return sideB; }
    double getSideC() const { return sideC; }

    double calculatePerimeter() const {
        return sideA + sideB + sideC;
    }

    void calculateAngles() const {
        // Кут A
        double angleA = acos((pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2)) / (2 * sideB * sideC)) * 180 / M_PI;
        // Кут B
        double angleB = acos((pow(sideA, 2) + pow(sideC, 2) - pow(sideB, 2)) / (2 * sideA * sideC)) * 180 / M_PI;
        // Кут C
        double angleC = 180.0 - angleA - angleB;

        std::cout << "Кути трикутника: A = " << angleA << "°, B = " << angleB << "°, C = " << angleC << "°\n";
    }
};
