#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
#include "triangle.h"
using namespace std;
template <typename Stream>


//Создайте класс для хранения информации о прямоугольном
//треугольнике.Полями класса являются длины катетов.Создайте
//методы, которые вычисляют гипотенузу, градусную меру, синус,
//косинус, тангенс, и котангенс для каждого острого угла, радиусы
//вписанной и описанной окружности.Создайте метод для
//сравнения треугольников на равенство.
//В главном классе создайте два треугольника, параметры
//прочитайте из файла.Выведите на консоль информацию о
//каждом треугольнике и результаты работы методов.Проверьте,
//являются ли треугольники равныими.Результат выведите на
//консоль.

// проверка на правильный ввод числа из файла, если введена буква, то она становится 0
bool read_num(Stream& stream, double& number)
{
	char c = 0;
	std::string buf;
	while (true)
	{
		stream.read(&c, 1);
		if (c == ' ' || stream.eof())
		{
			if (!buf.empty())
			{
				number = atoi(buf.c_str());
				return true;
			}
		}
		else
		{
			buf += c;
		}
	}

	return false;
}

int main()
{
    setlocale(0, "");
    vector<double> myvector;
	double num;
    ifstream file("./input.txt", ios_base::in);
	if (file.is_open()) {
		cout << "Файл открылся!" << endl;
	}
	else
	{
		cout << "Файл не открылся.\n";
		system("pause");
		return -1;
	}

	// считываем числа из файла и записываем в вектор
	while (!file.eof()) {
		if (read_num(file, num)) {
			myvector.push_back(num);
		}
		else {
			cout << "В файле не число.\n";
			system("pause");
			return -1;
		}

	}

	if (myvector.size() != 4) {
		cout << "В файле должно быть 4 числа." << endl;
		system("pause");
		return -1;
	}

	// создаем два треугольника с катетами = значениями из вектора
    Triangle triangle1(myvector[0], myvector[1]);
	Triangle triangle2(myvector[2], myvector[3]);

	// вывод функций
    triangle1.printInfo(1);
	triangle1.printHypotenuse(1);
	triangle1.printDegree(1);
	triangle1.printSin(1);
	triangle1.printCos(1);
	triangle1.printTg(1);
	triangle1.printRadIn(1);
	triangle1.printRadOut(1);
	cout << "---------------------------------------" << endl;
	triangle2.printInfo(2);
	triangle2.printHypotenuse(2);
	triangle2.printDegree(2);
	triangle2.printSin(2);
	triangle2.printCos(2);
	triangle2.printTg(2);
	triangle2.printRadIn(2);
	triangle2.printRadOut(2);
	
	cout << endl;
	triangle1.compare(triangle2);
    return 0;
}