#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d, e; 
cout << "Число 1 ";
cin >> a;
cout << "Число 2 ";
cin >> b;
cout << "Число 3 ";
cin >> c;

if(a>b and a>c) {
        if(b>c) {
            d=a+b;
        }   
        else
        {
            d=a+c;
        }
    } 
if(b>a and b>c) {
        if(a>c) {
            d=a+b;
        }   
        else
        {
            d=b+c;
        }
        
    } 
else
    {
        if(b>a) {
            d=c+b;
        }   
        else
        {
            d=a+c;
        }    
    }



cout <<" Сумма = " << d <<
endl;

    return 0;
}
