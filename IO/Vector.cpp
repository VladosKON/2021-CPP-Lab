//#include <iostream>
//#include <limits>
//#include <vector>
//
//using namespace std;
//
////������ 1
////��������� ������ �������, ������� ������ ������������.
////���������� ����� ������� ����������.���� ����� �������������
////�������� q(��� ��� - �� �����������).������� � �������
////������������ � ����������� ��������.
//
//int main() {
//	setlocale(0, "");
//	vector<int> myvector;
//	int buffer;
//	int i = 0;
//	int max=0, min=0;
//	cout << "������� �������� �������:\n";
//
//	//������ � ������ �� �������
//	while (cin >> buffer) {
//		myvector.push_back(buffer);
//	}
//
//	if (myvector.size() == 0) {
//		cout << "������";
//		return 0;
//	}
//
//	//����� ��������� �������
//	cout << "������:\n";
//	for (auto x : myvector)     
//		cout << x << " ";
//
//	//max � min - ������ �������� �������
//	max = myvector[0];
//	min = myvector[0];
//
//	//������ �� ���� ��������� ������� � ����� max � min
//	for (auto x : myvector) {
//		if (x > max) {
//			max = x;
//		}
//
//		if (x < min) {
//			min = x;
//		}
//	}
//
//	cout << "\nMin: " << min << "\n";
//	cout << "Max: " << max << "\n";
//	system("pause");
//	return 0;
//}