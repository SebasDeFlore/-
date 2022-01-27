#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, s;
cout << "Координату a ";
cin >> a;
cout << "Координату b ";
cin >> b;
cout << "Координату c ";
cin >> c;
if (a<c) {
        s=c-a;
    }
else
    {
        s=a-c;
    }
cout <<"Расстояние между точками a и c = " << s <<
endl;


    return 0;
}
