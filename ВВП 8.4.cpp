#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d; 
cout << "Двузначное число ";
cin >> a;


b=a/10;
c=a%10;
d=c*10+b;


cout <<" Перевёрнутое число = " << d <<
endl;


    return 0;
}
