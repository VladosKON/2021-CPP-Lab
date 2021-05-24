#include <iostream>
#include <limits>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

//Задача 4
//Считайте текст из файла как последовательность слов.Соберите
//слова обратно в строку, удалив слова длины больше 10
//символов.Не забудьте, что слова должны разделяться
//пробелами.


// удаляем лишние пробелы
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

	// в вектор записываем слова
	if (file.is_open()) {
		cout << "Текст из файла:\n";
		while (getline(file, mystring, ' ')) {
			myVector.push_back(mystring);
		}
	}
	else
	{
		cout << "Файл не открылся.\n";
		system("pause");
		return -1;
	}

	// проходим по всем словам и если размер слова >= 10, то стираем его
	for (int i = 0; i < myVector.size(); i++) {
		if (myVector[i].size() >= 10) {
			myVector[i].erase();
		}
	}
	for (int i = 0; i < myVector.size(); i++) {
		stringOut += myVector[i] + " ";
	}

	// удаляем лишние пробелы функцией removeSpaces
	removeSpaces(stringOut);
	cout << stringOut << endl;
	file.close();
	system("pause");
	return 0;

}