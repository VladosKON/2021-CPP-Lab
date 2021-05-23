#include "triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(double cathet_01, double cathet_02)
{
    this->cathet_01 = cathet_01;
    this->cathet_02 = cathet_02;
}

void Triangle::printInfo(int i)
{
    cout << "Треугольник " << i << endl;
    cout << "Катет 1: " << cathet_01 << endl;
    cout << "Катет 2: " << cathet_02 << endl;

}

void Triangle::printHypotenuse(int i)
{
    double hypo = 0.0;
    hypo = sqrt(pow(cathet_01, 2) + pow(cathet_02, 2));
    hypo = round(hypo * 1000) / 1000;
    cout << "Гипотенуза треугольника " << i << ": " << hypo << endl;
}

void Triangle::printDegree(int i)
{
    const double pi = 3.1415;
    double a, b;
    a = atan(cathet_01 / cathet_02) * (180/pi);
    b = 90 - a;
    a = round(a * 1000) / 1000;
    b = round(b * 1000) / 1000;
    cout << "У треугольника " << i << " Угол " << "a: " << a << " Угол b: " << b << endl;
}

void Triangle::printSin(int i)
{
    double a, b, hypo = 0.0;
    hypo = sqrt(pow(cathet_01, 2) + pow(cathet_02, 2));
    a = cathet_01 / hypo; 
    b = cathet_02 / hypo;
    a = round(a * 1000) / 1000;
    b = round(b * 1000) / 1000;
    cout << "У треугольника " << i << " Синус угла " << "a: " << a << " Синус угла b: " << b << endl;
}

void Triangle::printCos(int i)
{
    double a, b, hypo = 0.0;
    hypo = sqrt(pow(cathet_01, 2) + pow(cathet_02, 2));
    a = cathet_02 / hypo;
    b = cathet_01 / hypo;
    a = round(a * 1000) / 1000;
    b = round(b * 1000) / 1000;
    cout << "У треугольника " << i << " Косинус угла " << "a: " << a << " Косинус угла b: " << b << endl;
}

void Triangle::printTg(int i)
{
    double a, b;
    a = cathet_01 / cathet_02;
    b = cathet_02 / cathet_01;
    a = round(a * 1000) / 1000;
    b = round(b * 1000) / 1000;
    cout << "У треугольника " << i << " Тангенс угла " << "a: " << a << " Тангенс угла b: " << b << endl;
}

void Triangle::printRadIn(int i)
{   
    double r, hypo = 0.0;
    hypo = sqrt(pow(cathet_01, 2) + pow(cathet_02, 2));
    r = (cathet_01 + cathet_02 - hypo) / 2;
    r = round(r * 1000) / 1000;
    cout << "Радиус вписанной окружностиЫ треугольника " << i << ": " << r << endl;
}

void Triangle::printRadOut(int i)
{
    double r, hypo = 0.0;
    hypo = sqrt(pow(cathet_01, 2) + pow(cathet_02, 2));
    r = hypo / 2;
    r = round(r * 1000) / 1000;
    cout << "Радиус описанной окружности треугольника " << i << ": " << r << endl;
}

void Triangle::compare(Triangle o2)
{
    if (cathet_01 = o2.getCathet_01() && cathet_02 == o2.getCathet_02()) {
        cout << "Треугольники равны" << endl;
    }
    else if (cathet_01 = o2.getCathet_02() && cathet_02 == o2.getCathet_01()) {
        cout << "Треугольники равны" << endl;
    }
    else {
        cout << "Треугольники не равны" << endl;
    }
}
