#include <iostream>
#include <math.h>

using namespace
std;

int main()
{ setlocale(0,
"");
int x1, x2, y1, y2, s;
cout << "Координату x1 ";
cin >> x1;
cout << "Координату x2 ";
cin >> x2;
cout << "Координату y1 ";
cin >> y1;
cout << "Координату y2 ";
cin >> y2;
s=sqrt(pow((x2-x1),2)+pow((y2-y1),2)); 
cout <<"Расстояние между точками = " << s <<
endl;


    return 0;
}