//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//
//using namespace std;
//template <typename Stream>
////Задача 2
////Прочитайте из файла вектор действительных чисел. Напишите
////функцию, которая удаляет из конца вектора заданное количество
////чисел.Проверьте, что функции переданы корректные данные.
////Новый вектор выведите в отдельный файл
//
//bool read_num(Stream& stream, int& number)
//{
//	char c = 0;
//	std::string buf;
//	while (true)
//	{
//		stream.read(&c, 1);
//		if (c == ' ' || stream.eof())
//		{
//			if (!buf.empty())
//			{
//				number = atoi(buf.c_str());
//				return true;
//			}
//		}
//		else
//		{
//			buf += c;
//		}
//	}
//
//	return false;
//}
//
//
//int main() {
//	setlocale(0, "");
//	string mystring;	
//	int sum, num;
//	int n;
//	vector<int> myvector;
//	ifstream file("./input2.txt", ios_base::in);
//	ofstream output("output.txt", ios::trunc);
//
//	if (file.is_open()) {
//		cout << "Текст из файла:" << endl;
//	}
//	else
//	{
//		cout << "Файл не открылся.\n";
//		system("pause");
//		return -1;
//	}
//
//
//	while (!file.eof()) {
//		if (read_num(file, num)) {
//			myvector.push_back(num);
//			cout << num << " ";
//		}
//		else {
//			cout << "В файле не число.\n";
//			system("pause");
//			return -1;
//		}
//			
//	}
//
//	cout << "\nСколько чисел убрать из вектора? (От 0 до " << myvector.size() << ")"<< endl;
//	cin >> n;
//	if (n < 0) {
//		cout << "Значение должно быть > 0" << endl;
//		system("pause");
//		return -1;
//	}
//	if (n > myvector.size()) {
//		cout << "Слишком большое значение" << endl;
//		system("pause");
//		return -1;
//	} 
//
//	if (output.is_open()) {
//		int sz = myvector.size()-n;
//		cout << "Вектор:";
//		for (unsigned i = 0; i < sz; i++) {
//			cout << myvector[i] << ' ';
//			output << myvector[i] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << endl;
//	file.close();
//	output.close();
//	system("pause");
//	return 0;
//
//}