#include <iostream>
#include <limits>
#include <string>
#include <fstream>

using namespace std;

//������ 1
//����������� ���������� ���� � �����, ��� ������� �����
//�������� �����(mystring.length()).

int main() {
	setlocale(0, "");
	string mystring;
	ifstream file;
	int count = 0;
	file.open("./input1.txt");

	if (file.is_open()) {
		cout << "����� �� �����:\n";
		while (getline(file, mystring, ' ')) {
			cout << mystring << " �����: " << mystring.length() << endl;
			count++;
		}
	}
	else
	{
		cout << "���� �� ��������.\n";
		system("pause");
		return -1;
	}

	cout << "���-�� ����: " << count << endl; 
	file.close();
	system("pause");
	return 0;

}