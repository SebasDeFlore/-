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

if (a>0 and a%2==0) {
        cout <<"Ответ = " << "Положительное четное число" <<
endl;
    }
if (a>0 and a%2!=0) {
        cout <<"Ответ = " << "Положительное нечетное число" <<
    
endl;
    }
if (a<0 and a%2==0) {
        cout <<"Ответ = " << "Отрицательное четное число" <<
    
endl;
    }
if (a<0 and a%2!=0) {
        cout <<"Ответ = " << "Отрицательное нечетное число" <<
endl;
    } 
if (a==0) {
        cout <<"Ответ = " << "Нулевое число" <<
endl;
    } 

    

    return 0;
}
