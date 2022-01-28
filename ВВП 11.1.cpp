#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d, e; 
cout << "Переменная 1 ";
cin >> a;
cout << "Переменнрая 2 ";
cin >> b;



if(a!=b) {
        if(a>b) {
            b=b+a;
            a=a+a;
        
    }   
        else    {
            a=a+b;
            b=b+b;
        
    }
    } 
else    {
        a=0;
        b=0;
    }

cout <<" A = " << a <<
endl;
cout <<" b = " << b <<
endl;
    return 0;
}

