#include <stdio.h>

int power(int m,int n);

int main(){
    printf("Potencias de 2: ");
    for(int i=0;i<11;i++){
        printf("\nDonde n=%d -> %d",i,power(2,i));
    }
    
    return 0;
}

int power(int m, int n){
    int res=1;
    for(int i=0;i<n;i++){
        res*=m;
    }
    return res;
}