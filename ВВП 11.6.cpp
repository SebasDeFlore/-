#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d, e, f; 
cout << "Число ";
cin >> a;

if (a>99) {
        if (a%2==0) {
            cout <<"Ответ = " << "Четное трёхзначное число" <<
            endl;
        } 
        else
        {
            cout <<"Ответ = " << "Нечетное трёхзначное число" <<
            endl;
        }
    } 
if (a>9 and a<100) {
        if (a%2==0) {
            cout <<"Ответ = " << "Четное двухзначное число" <<
            endl;
        } 
        else
        {
            cout <<"Ответ = " << "Нечетное двуххзначное число" <<
            endl;
        }
    } 
if (a<10) {
        if (a%2==0) {
            cout <<"Ответ = " << "Четное однозначное число" <<
            endl;
        } 
        else
        {
            cout <<"Ответ = " << "Нечетное однозначное число" <<
            endl;
        }
    } 
    

    return 0;
}
