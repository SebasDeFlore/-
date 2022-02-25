#include <iostream>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b;
cout << "a+b должно быть равно 5" << endl;
cout << " Введите a ";  
cin>> a;
cout << "Введите b ";  
cin>> b;
int s = a + b;
while (s != 5)
    {
    if(s != 5) {
        cout << "Неправильно попробуйте ещё раз" << endl;
        cout << "a+b должно быть равно 5" << endl;
        cout << " Введите a ";  
        cin>> a;
        cout << "Введите b ";  
        cin>> b;
        int s = a + b;
        if(s == 5) {
        cout << "Всё правильно" << endl;
        break;
        }
        
    }
    }
if(s == 5) {
       cout << "Всё правильно" << endl;
        }
    return 0;
}
