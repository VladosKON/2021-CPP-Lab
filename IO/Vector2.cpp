//#include <iostream>
//#include <limits>
//#include <vector>
//
//using namespace std;
//
////������ 2
////��������� ��� ������� �������, ������� ������ ������������.
////���������� ����� ������� ����������.���� �������
////������������� �������� q(��� ��� - �� �����������).
////���������� ������� � ���� ���, ����� �������� �������
////������������ � ���������� �������
//
//int main() {
//	setlocale(0, "");
//	vector<int> myvector1;
//	vector<int> myvector2;
//	int buffer;
//
//	cout << "������� �������� ������� �������:\n";
//
//	//������ � ������ 1 �� �������
//	while (cin >> buffer) {
//		myvector1.push_back(buffer);
//	}
//
//	if (myvector1.size() == 0) {
//		cout << "������";
//		return 0;
//	}
//	cin.clear();
//	cin.ignore(numeric_limits<int>::max(), '\n');
//
//	cout << "\n������� �������� ������� �������:\n";
//	//������ � ������ 2 �� �������
//	while (cin >> buffer) {
//		myvector2.push_back(buffer);
//	}
//
//	if (myvector2.size() == 0) {
//		cout << "������";
//		return 0;
//	}
//
//	//����� ��������� �������
//	cout << "������ 1:\n";
//	for (auto x : myvector1)
//		cout << x << " ";
//
//	cout << "\n������ 2:\n";
//	for (auto x : myvector2)
//		cout << x << " ";
//
//	// ������� ������ 3 � ��������, ������ ����� �������� ���� ������
//	vector<int> myvector3 (myvector1.size() + myvector2.size());
//	int sz, vector_size1, vector_size2, vector_size3;
//	vector_size1 = myvector1.size();
//	vector_size2 = myvector2.size();
//	vector_size3 = myvector3.size();
//
//	// ���������� �������� ������� �� ���� ������ ��������
//	if (vector_size1 == vector_size2) {
//		for (int i = 0; i < vector_size1; i++) {
//			myvector3[2 * i] = myvector1[i];
//			myvector3[2 * i + 1] = myvector2[i];
//		}
//	}
//
//	if (vector_size1 < vector_size2) {
//		for (int i = 0; i < vector_size1; i++) {
//			myvector3[2 * i] = myvector1[i];
//			myvector3[2 * i + 1] = myvector2[i];
//		}
//		for (int i = vector_size1; i < vector_size2; i++) {
//			myvector3[i + vector_size1] = myvector2[i];
//		}
//	}
//
//	if (vector_size2 < vector_size1) {
//		for (int i = 0; i < vector_size2; i++) {
//			myvector3[2 * i] = myvector1[i];
//			myvector3[2 * i + 1] = myvector2[i];
//		}
//		for (int i = vector_size2; i < vector_size1; i++) {
//			myvector3[i + vector_size2] = myvector1[i];
//		}
//	}
//
//	cout << "\n������ 3:\n";
//	for (auto x : myvector3)
//		cout << x << " ";
//
//	cout << "\n";
//	system("pause");
//	return 0;
//}