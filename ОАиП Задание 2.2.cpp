#include <iostream>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b;
printf("a+b должно быть равно 5");
int c=5;
cout << " Введите a ";  
cin>> a;
cout << "Введите b ";  
cin>> b;
int s = a + b;
if(s != c) {
        printf("Не верно");
        exit;
    }
else
    {
        cout << "Всё правильно" << endl;
    }
    return 0;
}
