#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d; 
cout << "Введите a ";
cin >> a;
cout << "Введите b ";
cin >> b;
cout << "Введите c ";
cin >> c;

d=c;
c=b;
b=a;
a=d;

cout <<"Новое a = " << a <<
endl;
cout <<"Новое b = " << b <<
endl;
cout <<"Новое c = " << c <<
endl;


    return 0;
}
