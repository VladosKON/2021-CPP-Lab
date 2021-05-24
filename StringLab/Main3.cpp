//#include <iostream>
//#include <limits>
//#include <string>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////«адача 3
////—читайте текст из файла как последовательность слов.
////ѕодсчитайте, сколько слов начинаютс€ с заглавной буквы
////(isupper(char)), и сколько слов заканчиваютс€ знаком препинани€
////(.!? ).
//
//int main() {
//	setlocale(0, "");
//	string mystring, mystring1, stringOut;
//	vector<string> myVector;
//	ifstream file("./input1.txt");
//	int countUpper = 0, countEnd = 0;
//
//	// если файл открылс€, то записываем в предложение считанные слова.
//	if (file.is_open()) {
//		cout << "“екст из файла:\n";
//		while (getline(file, mystring, ' ')) {
//			mystring1 += mystring + ' ';
//		}
//	}
//	else
//	{
//		cout << "‘айл не открылс€.\n";
//		system("pause");
//		return -1;
//	}
//	cout << mystring1 << endl << endl;
//
//	// проходим по всем буквам предложени€ и создаем слова, которые раздел€ютс€ пробелами.
//	// смотрим €вл€етс€ ли перва€ буква слова заглавной (isupper(stingOut[0])
//	cout << "—лова, начинающиес€ с заглавной буквы:" << endl;
//	for (int i = 0; i < mystring1.length(); i++) {
//		if (isalpha(mystring1[i])) {
//			stringOut += mystring1[i];
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
//	cout << " оличество слов, начинающихс€ с заглавной буквы:  " << countUpper << endl << endl;
//
//	// проходим по всем буквам предложени€ и создаем слова, которые раздел€ютс€ пробелами.
//	// смотрим €вл€етс€ ли последний символ слова знаком препинани€ (.!?)
//	cout << "—лова, заканчивающиес€ знаком препинани€:" << endl;
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
//	cout << " оличество слов, заканчивающихс€ знаком препинани€:  " << countEnd << endl;
//	file.close();
//	system("pause");
//	return 0;
//
//}