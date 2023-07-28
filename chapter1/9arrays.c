#include <stdio.h>

int main(){
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite=nother=0;

    //se inicializa los valores del array en cero
    for(i=0;i<10;i++){
        ndigit[i]=0;
    }

    while((c=getchar())!=EOF){
        //se verifica si c es un numero entre 0 y 9
        if(c>='0'&&c<='9'){
            //se incrementa el valor del array en la posicion c-'0' el c se recta con '0' para obtener el valor numerico
            ++ndigit[c-'0'];
        }else if(c==' '||c=='\n'||c=='\t'){
            ++nwhite;
        }else{
            ++nother;
        }
    }
    printf("digitos =");
    for(i=0;i<10;i++){
        printf(" %d",ndigit[i]);
    }
    printf(", espacios en blanco = %d, otros = %d\n",nwhite,nother);
}