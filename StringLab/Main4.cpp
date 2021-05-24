#include <iostream>
#include <limits>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

//������ 4
//�������� ����� �� ����� ��� ������������������ ����.��������
//����� ������� � ������, ������ ����� ����� ������ 10
//��������.�� ��������, ��� ����� ������ �����������
//���������.


// ������� ������ �������
void removeSpaces(std::string& str)
{
	str.erase(
		unique_copy(str.begin(), str.end(), str.begin(),
			[](char c1, char c2) { return c1 == ' ' && c2 == ' '; }),
		str.end());
}

int main() {
	setlocale(0, "");
	string mystring, stringOut;
	vector<string> myVector;
	ifstream file("./input1.txt");

	// � ������ ���������� �����
	if (file.is_open()) {
		cout << "����� �� �����:\n";
		while (getline(file, mystring, ' ')) {
			myVector.push_back(mystring);
		}
	}
	else
	{
		cout << "���� �� ��������.\n";
		system("pause");
		return -1;
	}

	// �������� �� ���� ������ � ���� ������ ����� >= 10, �� ������� ���
	for (int i = 0; i < myVector.size(); i++) {
		if (myVector[i].size() >= 10) {
			myVector[i].erase();
		}
	}
	for (int i = 0; i < myVector.size(); i++) {
		stringOut += myVector[i] + " ";
	}

	// ������� ������ ������� �������� removeSpaces
	removeSpaces(stringOut);
	cout << stringOut << endl;
	file.close();
	system("pause");
	return 0;

}