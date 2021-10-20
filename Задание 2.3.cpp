#include <iostream>
int main()
{
    printf("Введите два положительных зачения");
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    do
    {
        a=a+a/b;
        s=s+b;
        b=b+1;
    } while (a>s);
    printf("измененные значения равны a и b равны %d, %d соответственно",a,b);
    return 0;
}