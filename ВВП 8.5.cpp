#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d; 
cout << "Трёхзначное число ";
cin >> a;


b=a/100;
c=a%100;
d=c*10+b;


cout <<" Перевёрнутое число = " << d <<
endl;

    return 0;
}
