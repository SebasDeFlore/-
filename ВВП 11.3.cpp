#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d, e, f; 
cout << "Число 1 ";
cin >> a;
cout << "Число 2 ";
cin >> b;
cout << "Число 3 ";
cin >> c;

if (a>b) {
        d=a-b;
    } 
else
    {
        d=b-a;
    }
if (a>c) {
        e=a-c;
    } 
else
    {
        e=c-a;
    }
if (d>e) {
    cout <<" Точка = " << b <<
endl;
    cout <<" Растояние от точки А = " << d <<
endl;

    } 
else
    {
            cout <<" Точка = " << c <<
endl;
             cout <<" Растояние от точки А = " << e <<
endl;
    }
    

    return 0;
}

