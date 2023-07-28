#include <stdio.h>

//128 va de 0 a 127 porque son numeros en codigo ascii
#define MAX_CHARACTERS 128

int main(){
 int c;
 int charFrequency[MAX_CHARACTERS]={0};

    while((c=getchar())!=EOF){
        if(c >=0 && c<MAX_CHARACTERS){
            ++charFrequency[c];
        }
    }

    for(int i=0;i<MAX_CHARACTERS;i++){
        if(charFrequency[i]>0){
            printf("%c: ", i);
            for(int j=0;j<charFrequency[i];j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}