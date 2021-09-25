#include <iostream>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b;
cout << "Введите сторону a ";
cin >> a;
cout << "Введите сторону b ";
cin >> b;
int s = a * b;
cout <<"Площадь прямоугольника = " << s <<
endl;
int p = 2 * (a + b);
cout <<"Периметр прямоугольника = " << p <<
endl;

    return 0;
}
