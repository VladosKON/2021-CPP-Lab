//#include <iostream>
//#include <limits>
//
//using namespace std;
//
////Задача 2.
////Заданы две матрицы порядков m × k и k × n.Найдите
////произведение этих матриц.
//
//int getValue() {
//	int n;
//	while (true) {
//		cin >> n;
//
//		if (cin.fail()) // Извлечение оказалось неудачным
//		{
//			cout << "Число введено неверно. Введите еще раз." << endl;
//			cin.clear(); // Возвращаем cin в 'обычный' режим работы
//			cin.ignore(numeric_limits<int>::max(), '\n'); // Очистить буфер ввода до перехода на новую строку
//		}
//		else {
//			if (n < 1)
//			{
//				cout << "Введите число, больше 0" << endl;
//				cin.clear();
//				cin.ignore(numeric_limits<int>::max(), '\n');
//			}
//			else
//			{
//				cin.ignore(numeric_limits<int>::max(), '\n'); // Очистить буфер ввода до перехода на новую строку
//				return n;
//			}
//		}
//	}
//}
//
//int main() {
//	setlocale(0, "");
//
//	int proizv;
//
//	cout << "Введите количество строк первого массива:\n";
//	int m = getValue();
//	cout << "Введите число, которое будет обозначать количество столбцов первого массива и количество строк второго массива:\n";
//	int k = getValue();
//	cout << "Введите количество столбцов второго массива\n";
//	int n = getValue();
//
//	int** array1 = new int* [m];
//	for (int i = 0; i < m; i++)
//		array1[i] = new int[k];
//
//	int** array2 = new int* [k];
//	for (int i = 0; i < k; i++)
//		array2[i] = new int[n];
//
//	int** array3 = new int* [m];
//	for (int i = 0; i < m; i++)
//		array3[i] = new int[n];
//
//	cout << "Введите " << m * k << " элементов первого массива:\n";
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < k; j++) {
//			cin >> array1[i][j];
//			if (cin.fail()) {
//				cout << "Введено неправильное число.\n";
//				system("pause");
//				return 0;
//			}
//		}
//	}
//
//	cout << "Введите " << k * n << " элементов второго массива:\n";
//	for (int i = 0; i < k; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> array2[i][j];
//			if (cin.fail()) {
//				cout << "Введено неправильное число.\n";
//				system("pause");
//				return 0;
//			}
//		}
//	}
//
//	cout << "Первый массив:\n";
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < k; j++) {
//			cout << array1[i][j] << " ";
//		}
//		cout << "\n";
//	}
//
//	cout << "Второй массив:\n";
//	for (int i = 0; i < k; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << array2[i][j] << " ";
//		}
//		cout << "\n";
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			array3[i][j] = 0;
//			for (int l = 0; l < k; l++) {
//				proizv = array1[i][l] * array2[l][j];
//				array3[i][j] += proizv;
//			}
//		}
//	}
//
//	cout << "Результат умножения матриц:\n";
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << array3[i][j] << " ";
//		}
//		cout << "\n";
//	}
//
//	system("pause");
//	return 0;
//}