//#include <iostream>
//#include <map>
//#include <limits>
//#include <string>
//#include <fstream>
//using namespace std;
//
////������ 2
////�������� ��������� map � ������� � ����������� ������� �
////���������� � �� ���������� �� ���������� ����.��� �����
////������ � ��������� �������� ��� ������� �� �����.
////�������� �� ����� ������ ���������� ���� � �������� ��
////������� �� ��������.
//int main()
//{
//	setlocale(0, "");
//	ifstream file("./input1.txt");
//	string mystring;
//	map <string, string> mapTranslate = { { "hello", "������" },
//		{ "darkness", "����" },
//		{ "my", "���" },
//		{ "I", "�"},
//		{ "talk", "�������������"},
//		{ "you", "��/�����"} };
//
//	if (file.is_open()) {
//		cout << "���� ��������!\n";
//		while (getline(file, mystring, ' ')) {
//			for (auto k : mapTranslate) {
//				if (mystring == k.first) {
//					cout << k.first << " - " << k.second << endl;
//				}
//			}
//		}
//	}
//	else
//	{
//		cout << "���� �� ��������.\n";
//		system("pause");
//		return -1;
//	}
//
//	system("pause");
//	return 0;
//}