#include <iostream>
#include <map>
#include <limits>
#include <string>
#include <fstream>
using namespace std;

//������ 1
//��� ���� � ���������� �������.����������, ������� ��� �
//������ ���������� ������ �������� �����
int main()
{
    setlocale(0, "");
    map <char, int> mapLetter;
	int count = 0;
	char c;
    ifstream file("./input1.txt");

	if (file.is_open()) {
		cout << "���� ��������!\n";
	}
	else
	{
		cout << "���� �� ��������.\n";
		system("pause");
		return -1;
	}

	while (file >> c) {
		if (c >= 'a' && c <= 'z') {
			mapLetter[(c)]++; count++;
		}
	}

	for (auto k : mapLetter)
		cout << k.first << " - " << k.second << "\n";


	system("pause");
	return 0;
}