#include <iostream>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b;
int c=5;
cout << "Введите a ";  
cin>> a;
cout << "Введите b ";  
cin>> b;
int s = a + b;
if(s != c) {
        cout << "Ответ должен быть равен 5" << endl;
    }
if(s == c) {
        cout << "Всё правильно" << endl;
    }
cout <<"Ответ " << s <<
endl;
    return 0;
}