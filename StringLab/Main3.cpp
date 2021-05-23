//#include <iostream>
//#include <limits>
//#include <string>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////Задача 3
////Считайте текст из файла как последовательность слов.
////Подсчитайте, сколько слов начинаются с заглавной буквы
////(isupper(char)), и сколько слов заканчиваются знаком препинания
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
//		cout << "Текст из файла:\n";
//		while (getline(file, mystring, ' ')) {
//			mystring1 += mystring + ' ';
//		}
//	}
//	else
//	{
//		cout << "Файл не открылся.\n";
//		system("pause");
//		return -1;
//	}
//	cout << mystring1 << endl << endl;
//
//	cout << "Слова, начинающиеся с большой буквы:" << endl;
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
//	cout << "Количество слов, начинающихся с заглавной буквы:  " << countUpper << endl << endl;
//
//
//	cout << "Слова, заканчивающиеся знаком препинания:" << endl;
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
//	cout << "Количество слов, заканчивающихся знаком препинания:  " << countEnd << endl;
//	file.close();
//	system("pause");
//	return 0;
//
//}