#include <iostream>
#include <math.h>
#include <cmath>

using namespace
std;

int main()
{ setlocale(0,
"");
int x, y; 
cout << "Введите x ";
cin >> x;

y=pow(x-3,6)*4 - pow(x-3,3)*7 + 2 ;


cout <<"y = " << y <<
endl;


    return 0;
}
