#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d, x, y; 
cout << "Введите a ";
cin >> a;
cout << "Введите b ";
cin >> b;
cout << "Введите c ";
cin >> c;

d=a;
x=b;
y=c;
a=x;
b=y;
c=d;

cout <<"Новое a = " << a <<
endl;
cout <<"Новое b = " << b <<
endl;
cout <<"Новое c = " << c <<
endl;


    return 0;
}
