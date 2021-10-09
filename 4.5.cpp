#include <iostream>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d;

cout << "Введите число a ";
cin >> a;
cout << "Введите число b ";
cin >> b;
c = abs(a);
d = abs(b);
if(a == 0) {
        cout << "Ноль писать нельзя" << endl;
    }
if(b == 0) {
        cout << "Ноль писать нельзя!!" << endl;
    }
int s = c+d;
cout <<"Сумма модулей чисел = " << s <<
endl;
int f = c-d;
cout <<"Разность модулей чисел = " << f <<
endl;
int g = c*d;
cout <<"Произведение модулей чисел = " << g <<
endl;
int h = c/d;
cout <<"Частное модулей чисел = " << h <<
endl;

    return 0;
}