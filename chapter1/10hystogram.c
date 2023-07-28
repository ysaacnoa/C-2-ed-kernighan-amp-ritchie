#include <stdio.h>

//analizamos necesitamos un flag que detecte si estamos o no en una palabra esas son IN y OUT seguido de el maximo numero de caracteres de una palabra
#define IN 1
#define OUT 0
#define MAX_LENGTH_WORD 15  

int main(){
    ///definimos state como OUT por defecto
    int c, state=OUT ,wordLength=0;
    //MAX_LENGTH_WORD+1 porque se necesita un espacio para las palabras que superen el maximo de caracteres
    int wordLengths[MAX_LENGTH_WORD+1];

    for(int i=0;i<=MAX_LENGTH_WORD;i++){
        wordLengths[i]=0;
    }
    while((c=getchar())!=EOF){
        //si c es un espacio, un salto de linea o un tabulador y state es IN entonces se termino una palabra
        if(c==' '||c=='\n'||c=='\t'){
            if(state==IN){
                //si la palabra es menor o igual al maximo de caracteres se incrementa el valor del array en la posicion wordLength
                if(wordLength<=MAX_LENGTH_WORD){
                    ++wordLengths[wordLength];
                }else{
                    ++wordLengths[MAX_LENGTH_WORD];
                }
            }
        //si c no es un espacio, un salto de linea o un tabulador y state es OUT entonces se comienza una palabra
        state=OUT;
        wordLength=0;
        }else{
            state=IN;
            ++wordLength;
        }
    }
    
    for(int i=0; i<=MAX_LENGTH_WORD;i++){
        printf("%d",i);
        //se imprime un * por cada palabra de la longitud i
        for(int j=0;j<wordLengths[i];j++){
            printf("*");
        }
        printf("\n");
    }

    //se imprime el maximo de caracteres
    if(wordLengths[MAX_LENGTH_WORD]>0){
        printf(">%2d",MAX_LENGTH_WORD);
        for(int j=0;j<wordLengths[MAX_LENGTH_WORD];j++){
            printf("*");
        }
        printf("\n");
    }
}

