//#include <limits>
//#include <iostream>
//
//using namespace std;
//
//int getValue()
//{
//    while (true)
//    {
//        cout << "������� ���������� ������: ";
//        int N;
//        cin >> N;
//        if (cin.fail()) // ���������� ��������� ���������
//        {
//            cout << "����� ������� �������" << endl;
//            cin.clear(); // ���������� cin � '�������' ����� ������
//            cin.ignore(numeric_limits<int>::max(), '\n'); // �������� ����� ����� �� �������� �� ����� ������
//        }
//        else if (N <= 1)
//        {
//            cout << "������� �����, ������ 1" << endl;
//            cin.clear();
//            cin.ignore(numeric_limits<int>::max(), '\n');
//        }
//        else
//        {
//            cin.ignore(numeric_limits<int>::max(), '\n'); // �������� ����� ����� �� �������� �� ����� ������
//            return N;
//        }
//    }
//}
//
//char chooseMode()
//{
//    while (true)
//    {
//        cout << "�������� ����� ���� (������� 1 ��� 2): \n1)PvP \n2)PvE\n";
//        char operation;
//        cin >> operation;
//        if (operation == '1' || operation == '2')
//            return operation;
//        else
//            cout << "����� ������ ���, ������� 1 ��� 2.\n";
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
//            cout << "��� ������ " << player << endl;
//        }
//        else if (player == 2) {
//            cout << "��� ������ " << player << endl;
//        }
//
//        cout << N << " ������ ��������." << " �������� 1, 2 ��� 3 �����.\n";        
//        cin >> rock;
//
//        if (rock == 1 || rock == 2 || rock == 3) {
//            if (N - rock >= 1) {
//                if (player == 1) player += 1;
//                else if (player == 2) player -= 1;
//                N = N - rock;
//            }
//            else 
//                cout << "�� �� ������ ����� ������� ������\n";
//        }
//        else
//            cout << "�� �� ������ ����� ������� ������\n";
//    }
//    if (player == 1) {
//        cout << "���� ��������, ������� ����� 2";
//    }
//    if (player == 2) {
//        cout << "���� ��������, ������� ����� 1";
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
//        cout << "PvE �� �������, �������� �� PvP\n";
//        pvp(N);
//        break;
//    default:
//        break;
//    }
//
//    return 0;
//}