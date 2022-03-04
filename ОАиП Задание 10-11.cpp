#include<stdio.h>
int main(){
    int a, b, c, j;
    int s[] = { 8, 9, 1, 3, 7, 4, 5 };
    int n =sizeof(s) / sizeof(int);
    for(c = n / 2; c > 0; c /= 2) {
        for(a = c; a < n; a++){
        b = s[a];
        for( j = a; j >= c; j-=c){
            if (b < s[j - c])
                s[j] = s[j-c];
            else break;
        }   
        s[j] = b;
      }
    }
    for (a=0; a<n; a++)
    printf("%d", s[a]);
    return 0;
}    
