#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>

using namespace std;

class Triangle
{
private:
    double cathet_01;
    double cathet_02;
public:
    Triangle(double cathet_01, double cathet_02);
    double getCathet_01() { return cathet_01; };
    double getCathet_02() { return cathet_02; };
    void printInfo(int i);
    void printHypotenuse(int i);
    void printDegree(int i);
    void printSin(int i);
    void printCos(int i);
    void printTg(int i);
    void printRadIn(int i);
    void printRadOut(int i);
    void compare(Triangle o2);
};

#endif // TRIANGLE_H