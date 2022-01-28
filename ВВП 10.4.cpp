#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d, e; 
cout << "A ";
cin >> a;

b=a/100;
c=a/10%10;
d=a%10;


if(b<c and c<d or b>c and c>d) {
        cout <<" Ответ = " << "Образуют" <<
endl;
    } 
else    {
        cout <<" Ответ = " << "Не Образуют" <<
endl;
    }



    return 0;
}

