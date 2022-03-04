#include<stdio.h>
int main(){
    int a, b, c;
    int s[] = { 8, 9, 1, 3, 7, 4, 5 };
    int n =sizeof(s) / sizeof(int);
       for(a = 1; a < n; a++) {
        for(b = a, c = s[a];(b > 0) && (s[b - 1] > c); b--){
                s[b]=s[b - 1];
            }
            s[b] = c;
        }
    for (a=0; a<n; a++)
    printf("%d", s[a]);
    return 0;
}    
