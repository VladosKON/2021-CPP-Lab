//#include <limits>
//#include <iostream>
//
//using namespace std;
//
//int getValue()
//{
//    while (true)
//    {
//        cout << "Введите количество камней: ";
//        int N;
//        cin >> N;
//        if (cin.fail()) // Извлечение оказалось неудачным
//        {
//            cout << "Число введено неверно" << endl;
//            cin.clear(); // Возвращаем cin в 'обычный' режим работы
//            cin.ignore(numeric_limits<int>::max(), '\n'); // Очистить буфер ввода до перехода на новую строку
//        }
//        else if (N <= 1)
//        {
//            cout << "Введите число, больше 1" << endl;
//            cin.clear();
//            cin.ignore(numeric_limits<int>::max(), '\n');
//        }
//        else
//        {
//            cin.ignore(numeric_limits<int>::max(), '\n'); // Очистить буфер ввода до перехода на новую строку
//            return N;
//        }
//    }
//}
//
//char chooseMode()
//{
//    while (true)
//    {
//        cout << "Выберите режим игры (введите 1 или 2): \n1)PvP \n2)PvE\n";
//        char operation;
//        cin >> operation;
//        if (operation == '1' || operation == '2')
//            return operation;
//        else
//            cout << "Такой режима нет, введите 1 или 2.\n";
//    }
//}
//
//int pvp(int N)
//{
//    int player = 1;
//    while (N > 1)
//    {        
//        int rock;
//
//        if (player == 1) {
//            cout << "Ход игрока " << player << endl;
//        }
//        else if (player == 2) {
//            cout << "Ход игрока " << player << endl;
//        }
//
//        cout << N << " камней осталось." << " Возьмите 1, 2 или 3 камня.\n";        
//        cin >> rock;
//
//        if (rock == 1 || rock == 2 || rock == 3) {
//            if (N - rock >= 1) {
//                if (player == 1) player += 1;
//                else if (player == 2) player -= 1;
//                N = N - rock;
//            }
//            else 
//                cout << "Вы не можете взять столько камней\n";
//        }
//        else
//            cout << "Вы не можете взять столько камней\n";
//    }
//    if (player == 1) {
//        cout << "Игра окончена, победил игрок 2";
//    }
//    if (player == 2) {
//        cout << "Игра окончена, победил игрок 1";
//    }
//    return N;
//}
//
//int main()
//{
//    setlocale(0, "");
//    int N = getValue();
//    char mode = chooseMode();
//
//    switch (mode) {
//    case '1':
//        pvp(N);
//        break;
//    case '2':
//        cout << "PvE Не сделано, перехожу на PvP\n";
//        pvp(N);
//        break;
//    default:
//        break;
//    }
//
//    return 0;
//}