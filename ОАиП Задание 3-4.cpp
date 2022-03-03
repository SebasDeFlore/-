#include<stdio.h>
int main(){
    int a, b, c, s[] = { 8, 9, 1, 3, 7, 4, 5 };
    int n =sizeof(s) / sizeof(int);
    for(a=0; a<n-1; a++){
        for(b=0; b< n-1-a; b++){
            if(s[b] < s[b+1]){
                c= s[b];
                s[b]=s[b+1];
                s[b+1] = c;
            }
        }
    }
    for (a=0; a<n; a++)
    printf("%d", s[a]);
    return 0;
}    
