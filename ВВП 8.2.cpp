#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c; 
cout << "Введите отрезок а (a>b) ";
cin >> a;
cout << "Введите отрезок b (a>b) ";
cin >> b;

c=a/b;


cout <<"Количество отрезков B, размещенных на отрезке A = " << c <<
endl;


    return 0;
}
