//#include <iostream>
//#include <limits>
//#include <string>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////������ 3
////�������� ����� �� ����� ��� ������������������ ����.
////�����������, ������� ���� ���������� � ��������� �����
////(isupper(char)), � ������� ���� ������������� ������ ����������
////(.!? ).
//
//int main() {
//	setlocale(0, "");
//	string mystring, mystring1, stringOut;
//	vector<string> myVector;
//	ifstream file("./input1.txt");
//	int countUpper = 0, countEnd = 0;
//
//	if (file.is_open()) {
//		cout << "����� �� �����:\n";
//		while (getline(file, mystring, ' ')) {
//			mystring1 += mystring + ' ';
//		}
//	}
//	else
//	{
//		cout << "���� �� ��������.\n";
//		system("pause");
//		return -1;
//	}
//	cout << mystring1 << endl << endl;
//
//	cout << "�����, ������������ � ������� �����:" << endl;
//	for (int i = 0; i < mystring1.length(); i++) {
//		if (isalpha(mystring1[i])) {
//			stringOut += mystring1[i];
//			
//		}
//		if (mystring1[i] == ' ')
//		{
//			if (isupper(stringOut[0])) {
//				cout << stringOut + " ";
//				countUpper++;
//			}
//
//			stringOut = "";
//		}
//	}
//	cout << endl << endl;
//	cout << "���������� ����, ������������ � ��������� �����:  " << countUpper << endl << endl;
//
//
//	cout << "�����, ��������������� ������ ����������:" << endl;
//	for (int i = 0; i < mystring1.length(); i++) {
//		if (isalpha(mystring1[i]) || mystring1[i] == '.' || mystring1[i] == '!' || mystring1[i] == '?') {
//			stringOut += mystring1[i];
//		}
//		if (mystring1[i] == ' ')
//		{
//			if (stringOut[stringOut.size() - 1] == '.' || stringOut[stringOut.size()-1] == '!' || stringOut[stringOut.size() - 1] == '?') {
//				cout << stringOut + " ";
//				countEnd++;
//			}
//
//			stringOut = "";
//		}
//	}
//	cout << endl << endl;
//	cout << "���������� ����, ��������������� ������ ����������:  " << countEnd << endl;
//	file.close();
//	system("pause");
//	return 0;
//
//}