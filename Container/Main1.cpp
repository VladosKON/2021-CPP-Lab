#include <iostream>
#include <map>
#include <limits>
#include <string>
#include <fstream>
using namespace std;

//Задача 1
//Дан файл с английским текстом.Посчитайте, сколько раз в
//тексте появляется каждая строчная буква
int main()
{
    setlocale(0, "");
    map <char, int> mapLetter;
	int count = 0;
	char c;
    ifstream file("./input1.txt");

	if (file.is_open()) {
		cout << "Файл открылся!\n";
	}
	else
	{
		cout << "Файл не открылся.\n";
		system("pause");
		return -1;
	}

	// проходим по всем буквам и увеличиваем счетчик повторений в контейнере map (буква - количество)
	while (file >> c) {
		if (c >= 'a' && c <= 'z') {
			mapLetter[c]++; count++;
		}
	}

	// выводим весь контейнер map 
	for (auto k : mapLetter)
		cout << k.first << " - " << k.second << "\n";


	system("pause");
	return 0;
}