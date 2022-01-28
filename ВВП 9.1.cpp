#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int a, b, c, d; 
cout << "Всего секунд ";
cin >> a;


b=a/60;
c=a-b*60;

cout <<" Секунд с последней минуты = " << c <<
endl;

    return 0;
}
