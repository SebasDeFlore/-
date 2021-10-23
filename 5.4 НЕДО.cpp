#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int x1, x2, y1, y2, s, p, a, b;
cout << "Координату x1 ";
cin >> x1;
cout << "Координату y1 ";
cin >> y1;
cout << "Координату x2 ";
cin >> x2;
cout << "Координату y2 ";
cin >> y2;
if(y1>y2) {
        a=y1-y2;
    } 
else
        a=y2-y1;
    }
if(x1>x2) {
        b=x1-x2;
    } 
else
        b=x2-x1;
    }
p=2(a+b)
s=a*b
cout <<"Переиметр прямоугольника = " << p <<
endl;
cout <<"Площадь прямоугольника = " << s <<
endl;


    return 0;
}