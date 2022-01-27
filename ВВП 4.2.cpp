#include <iostream>

using namespace
std;

int main()
{ setlocale(0,
"");
int d;
float p = 3.14;
cout << "Введите диаметр окружности d ";
cin >> d;
float L = p * d;
cout << "Диаметр окружности = " << L <<
endl;
    return 0;
}
