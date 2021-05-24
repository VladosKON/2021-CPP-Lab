//#include <iostream>
//#include <limits>
//#include <vector>
//
//using namespace std;
//
////задача 2
////Заполните два вектора числами, которые вводит пользователь.
////Количество чисел заранее неизвестно.Ввод вектора
////заканчивается символом q(или чем - то аналогичным).
////Объедините векторы в один так, чтобы элементы первого
////чередовались с элементами второго
//
//int main() {
//	setlocale(0, "");
//	vector<int> myvector1;
//	vector<int> myvector2;
//	int buffer;
//
//	cout << "Введите элементы первого вектора:\n";
//
//	//запись в вектор 1 из консоли
//	while (cin >> buffer) {
//		myvector1.push_back(buffer);
//	}
//
//	if (myvector1.size() == 0) {
//		cout << "Ошибка";
//		return 0;
//	}
//	cin.clear();
//	cin.ignore(numeric_limits<int>::max(), '\n');
//
//	cout << "\nВведите элементы второго вектора:\n";
//	//запись в вектор 2 из консоли
//	while (cin >> buffer) {
//		myvector2.push_back(buffer);
//	}
//
//	if (myvector2.size() == 0) {
//		cout << "Ошибка";
//		return 0;
//	}
//
//	//вывод элементов вектора
//	cout << "Вектор 1:\n";
//	for (auto x : myvector1)
//		cout << x << " ";
//
//	cout << "\nВектор 2:\n";
//	for (auto x : myvector2)
//		cout << x << " ";
//
//	// создаем вектор 3 с размером, равным сумме размеров двух других
//	vector<int> myvector3 (myvector1.size() + myvector2.size());
//	int sz, vector_size1, vector_size2, vector_size3;
//	vector_size1 = myvector1.size();
//	vector_size2 = myvector2.size();
//	vector_size3 = myvector3.size();
//
//	// записываем значения чередуя из двух других векторов
//	if (vector_size1 == vector_size2) {
//		for (int i = 0; i < vector_size1; i++) {
//			myvector3[2 * i] = myvector1[i];
//			myvector3[2 * i + 1] = myvector2[i];
//		}
//	}
//
//	if (vector_size1 < vector_size2) {
//		for (int i = 0; i < vector_size1; i++) {
//			myvector3[2 * i] = myvector1[i];
//			myvector3[2 * i + 1] = myvector2[i];
//		}
//		for (int i = vector_size1; i < vector_size2; i++) {
//			myvector3[i + vector_size1] = myvector2[i];
//		}
//	}
//
//	if (vector_size2 < vector_size1) {
//		for (int i = 0; i < vector_size2; i++) {
//			myvector3[2 * i] = myvector1[i];
//			myvector3[2 * i + 1] = myvector2[i];
//		}
//		for (int i = vector_size2; i < vector_size1; i++) {
//			myvector3[i + vector_size2] = myvector1[i];
//		}
//	}
//
//	cout << "\nВектор 3:\n";
//	for (auto x : myvector3)
//		cout << x << " ";
//
//	cout << "\n";
//	system("pause");
//	return 0;
//}