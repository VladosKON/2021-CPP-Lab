#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
template <typename Stream>
//������ 2
//���������� �� ����� ������ �������������� �����. ��������
//�������, ������� ������� �� ����� ������� �������� ����������
//�����.���������, ��� ������� �������� ���������� ������.
//����� ������ �������� � ��������� ����

int main() {
	setlocale(0, "");
	string mystring;	
	int sum, num;
	int n;
	vector<int> myvector;
	ifstream file("./input2.txt");
	ofstream output("output.txt", ios::trunc);

	if (file.is_open()) {
		cout << "����� �� �����:" << endl;
	}
	else
	{
		cout << "���� �� ��������.\n";
		system("pause");
		return -1;
	}

	// ���������� int �������� � ������
	while (!file.eof()) {
		if (file >> num) {
			myvector.push_back(num);
		}
		else {
			cout << "� ����� �� �����.\n";
			system("pause");
			return -1;
		}
			
	}

	// ������� ������
	for (auto x : myvector) {
		cout << x << " ";
	}

	cout << "\n������� ����� ������ �� �������? (�� 0 �� " << myvector.size() << ")"<< endl;
	cin >> n;
	if (n < 0) {
		cout << "�������� ������ ���� > 0" << endl;
		system("pause");
		return -1;
	}
	if (n > myvector.size()) {
		cout << "������� ������� ��������" << endl;
		system("pause");
		return -1;
	} 

	// ������� ������ � ����������� ��������
	if (output.is_open()) {
		int sz = myvector.size()-n;
		cout << "������:";
		for (unsigned i = 0; i < sz; i++) {
			cout << myvector[i] << ' ';
			output << myvector[i] << ' ';
		}
		cout << '\n';
	}
	cout << endl;
	file.close();
	output.close();
	system("pause");
	return 0;

}