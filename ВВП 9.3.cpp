#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d; 
cout << "День К ";
cin >> a;
cout << "Первый день года ";
cin >> d;

a=a+d-1;
b=a/7;
c=a-b*7;
if(c==0) {
        c=7;
    } 
cout <<" День недели для К = " << c <<
endl;

    return 0;
}
