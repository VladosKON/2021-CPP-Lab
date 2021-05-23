//#include <iostream>
//#include <map>
//#include <limits>
//#include <string>
//#include <fstream>
//using namespace std;
//
////«адача 2
////—оздайте контейнер map с ключами Ч английскими словами и
////значени€ми Ч их переводами на английский €зык.≈го можно
////задать в программе напр€мую или считать из файла.
////—читайте из файла список английских слов и выведите на
////консоль их переводы.
//int main()
//{
//	setlocale(0, "");
//	ifstream file("./input1.txt");
//	string mystring;
//	map <string, string> mapTranslate = { { "hello", "привет" },
//		{ "darkness", "тьма" },
//		{ "my", "мой" },
//		{ "I", "я"},
//		{ "talk", "разговаривать"},
//		{ "you", "ты/тобой"} };
//
//	if (file.is_open()) {
//		cout << "‘айл открылс€!\n";
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
//		cout << "‘айл не открылс€.\n";
//		system("pause");
//		return -1;
//	}
//
//	system("pause");
//	return 0;
//}