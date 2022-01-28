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

b=a/1000;
c=a/100%10;
d=a/10%10;
e=a%10;


if(b*10+c==e*10+d) {
        cout <<" Ответ = " << "Да" <<
endl;
    } 
else    {
        cout <<" Ответ = " << "Нет" <<
endl;
    }


    return 0;
}

