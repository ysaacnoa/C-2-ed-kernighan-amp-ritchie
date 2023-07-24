#include <stdio.h>

int main(){
    int c ,nl=0, prev_c=0;

    while((c=getchar())!=EOF){
        if(c=='\n' || c=='\t' || c==' '){
            ++nl;
            if(prev_c!=' '){
                putchar(' ');
            }    
        }else{
            putchar(c);
        }
        prev_c=c;
    }
    printf("El numero de espacios, saltos de linea, tabuladores es: %d\n",nl);
    return 0;
}