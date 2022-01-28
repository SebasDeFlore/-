#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d, e; 
cout << "Сторона a ";
cin >> a;
cout << "Сторона b ";
cin >> b;
cout << "Сторона c ";
cin >> c;

a=a*b;
b=c*c;
d=a/b;
e=a-d*b;


cout <<" Кол-воквадратов = " << d <<
endl;
cout <<" Площадь остатака = " << e <<
endl;
    return 0;
}
