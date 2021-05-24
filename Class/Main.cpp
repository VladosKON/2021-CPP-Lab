#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
#include "triangle.h"
using namespace std;
template <typename Stream>


//�������� ����� ��� �������� ���������� � �������������
//������������.������ ������ �������� ����� �������.��������
//������, ������� ��������� ����������, ��������� ����, �����,
//�������, �������, � ��������� ��� ������� ������� ����, �������
//��������� � ��������� ����������.�������� ����� ���
//��������� ������������� �� ���������.
//� ������� ������ �������� ��� ������������, ���������
//���������� �� �����.�������� �� ������� ���������� �
//������ ������������ � ���������� ������ �������.���������,
//�������� �� ������������ ��������.��������� �������� ��
//�������.

// �������� �� ���������� ���� ����� �� �����, ���� ������� �����, �� ��� ���������� 0
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
		cout << "���� ��������!" << endl;
	}
	else
	{
		cout << "���� �� ��������.\n";
		system("pause");
		return -1;
	}

	// ��������� ����� �� ����� � ���������� � ������
	while (!file.eof()) {
		if (read_num(file, num)) {
			myvector.push_back(num);
		}
		else {
			cout << "� ����� �� �����.\n";
			system("pause");
			return -1;
		}

	}

	if (myvector.size() != 4) {
		cout << "� ����� ������ ���� 4 �����." << endl;
		system("pause");
		return -1;
	}

	// ������� ��� ������������ � �������� = ���������� �� �������
    Triangle triangle1(myvector[0], myvector[1]);
	Triangle triangle2(myvector[2], myvector[3]);

	// ����� �������
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