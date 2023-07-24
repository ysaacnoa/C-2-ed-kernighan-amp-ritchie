#include <stdio.h>

#define IN 1 //definimos IN como 1 porque 1 es true
#define OUT 0 //definimos OUT como 0 porque 0 es false

int main(){
    int c,nl,nw,nc,state;

    state=OUT;

    nl=nw=nc=0;

    while((c=getchar())!=EOF){ //EOF = End Of File (-1)
        ++nc;
        if(c=='\n'){
        ++nl;
        }
        if(c==' '||c=='\n'||c=='\t'){
            state=OUT;
        }else if(state==OUT){
            state=IN;
            ++nw;
        }
    }
    printf("El numero de lineas es %d\n",nl);
    printf("El numero de palabras es %d\n",nw);
    printf("El numero de caracteres es %d\n",nc);
}