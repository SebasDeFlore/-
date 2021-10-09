#include <iostream>

using namespace
std;

int main()
{ setlocale(0,
"");
int d;
int p = 3.14;
cout << "Введите диаметр окружности d ";
cin >> d;
int L = p * d;
cout << "Диаметр окружности = " << L <<
endl;
    return 0;
}
