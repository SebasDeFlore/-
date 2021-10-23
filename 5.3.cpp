#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, s, s1;
cout << "Координату a ";
cin >> a;
cout << "Координату b ";
cin >> b;
cout << "Координату c которая находится между a и b ";
cin >> c;
if (a<c, b>c) {
        s=c-a, s1=b-c;
    }
else
    {
        s=a-c, s1=c-b;
    }
cout <<"Расстояние между точками a и c = " << s <<
endl;
cout <<"Расстояние между точками b и c = " << s1 <<
endl;


    return 0;
}