#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a, op=1;
    cout << "Введите число: \n";
    cin >> a;
    for (int i = a; i <= 20; i++) {
        op *= i;
    }
    cout << op;
}

