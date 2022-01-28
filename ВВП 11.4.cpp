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
cout << "Число 2 ";
cin >> b;


if (a>0 and b>0) {
        cout <<"Координатная четверть = " << "1" <<
endl;
    }
if (a<0 and b>0) {
        cout <<"Координатная четверть = " << "2" <<
endl;
    } 
if (a<0 and b<0) {
        cout <<"Координатная четверть = " << "3" <<
endl;
    } 
if (a>0 and b<0) {
        cout <<"Координатная четверть = " << "4" <<
endl;
    } 

    

    return 0;
}

