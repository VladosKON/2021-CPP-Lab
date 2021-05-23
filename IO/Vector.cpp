//#include <iostream>
//#include <limits>
//#include <vector>
//
//using namespace std;
//
////задача 1
////Заполните вектор числами, которые вводит пользователь.
////Количество чисел заранее неизвестно.Ввод чисел заканчивается
////символом q(или чем - то аналогичным).Найдите в векторе
////максимальное и минимальное значение.
//
//int main() {
//	setlocale(0, "");
//	vector<int> myvector;
//	int buffer;
//	int i = 0;
//	int max=0, min=0;
//	cout << "Введите элементы вектора:\n";
//
//	while (cin >> buffer) {
//		myvector.push_back(buffer);
//	}
//
//	if (myvector.size() == 0) {
//		cout << "Ошибка";
//		return 0;
//	}
//
//	cout << "Вектор:\n";
//	for (auto x : myvector)     
//		cout << x << " ";
//
//	max = myvector[0];
//	min = myvector[0];
//
//	for (auto x : myvector) {
//		if (x > max) {
//			max = x;
//		}
//
//		if (x < min) {
//			min = x;
//		}
//	}
//
//	cout << "\nMin: " << min << "\n";
//	cout << "Max: " << max << "\n";
//	system("pause");
//	return 0;
//}