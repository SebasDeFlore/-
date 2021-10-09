#include <iostream>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b;
cout << "Введите число a ";
cin >> a;
cout << "Введите число b ";
cin >> b;
if(a == 0) {
        cout << "Ноль писать нельзя" << endl;
    }
if(b == 0) {
        cout << "Ноль писать нельзя!!" << endl;
    }
int s = a*a+b*b;
cout <<"Сумма квадратов чисел = " << s <<
endl;
int f = a*a-b*b;
cout <<"Разность квадратов чисел = " << f <<
endl;
int g = (a*a)*(b*b);
cout <<"Произведение квадратов чисел = " << g <<
endl;
int h = (a*a)/(b*b);
cout <<"Частное квадратов чисел = " << h <<
endl;

    return 0;
}