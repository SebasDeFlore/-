#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c; 
cout << "Введите a ";
cin >> a;
cout << "Введите b ";
cin >> b;

c=a;
a=b;
b=c;

cout <<"Новое a = " << a <<
endl;
cout <<"Новое b = " << b <<
endl;


    return 0;
}
