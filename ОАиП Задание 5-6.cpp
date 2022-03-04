#include<stdio.h>
int main(){
    int a, b, c;
    int s [] = { 8, 9, 1, 3, 7, 4, 5 };
    int n =sizeof(s) / sizeof(int);
    float k = 1.247;
    for(c = n - 1; c >= 1; c /= k) {
        for(a=0; a< n -c; a++){
            if(s[a] > s[a+c]){
                b= s[a];
                s[a]=s[a+c];
                s[a+c] = b;
            }
        }
    }
    for (a=0; a<n; a++)
    printf("%d", s[a]);
    return 0;
}    
