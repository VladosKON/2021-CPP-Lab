#include <iostream>
#include <limits>
#include <string>
#include <fstream>

using namespace std;

//Задача 1
//Подсчитайте количество слов в файле, для каждого слова
//выведите длину(mystring.length()).

int main() {
	setlocale(0, "");
	int count = 0;
	string mystring;
	ifstream file;
	file.open("./input1.txt");

	// считываем слова из файла и выводим их длину (mystring.lenght())
	// увеличиваем счетчик слов
	if (file.is_open()) {
		cout << "Текст из файла:\n";
		while (getline(file, mystring, ' ')) {
			cout << mystring << " длина: " << mystring.length() << endl;
			count++;
		}
	}
	else
	{
		cout << "Файл не открылся.\n";
		system("pause");
		return -1;
	}

	cout << "Кол-во слов: " << count << endl; 
	file.close();
	system("pause");
	return 0;

}