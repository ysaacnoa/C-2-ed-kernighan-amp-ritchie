#include <stdio.h>

#define MAXLINE 1000 //tamaño maximo de la linea de entrada


int getline(char line[], int maxline);
void copy(char to[], char from[]);

//imprime la linea de entrada mas larga
int main(){
    int len; //longitud actual de la linea
    int max=0; //maxima longitud vista hasta el momento
    char line[MAXLINE]; //linea de entrada actual
    char longest[MAXLINE]; //la linea mas larga se guarda aqui
    
    while((len=getline(line,MAXLINE))>0){
        if(len>max){
            max=len;
            copy(longest,line);
        }
    }
    if(max>0){
        printf("%s",longest);
    }
    return 0;
}

int getline(char line[], int maxline){
    int c,i;
    for(i=0;i<maxline-1 && (c=getchar())!=EOF && c!='\n';++i){
        line[i]=c;
    }
    if(c=='\n'){
        line[i]=c;
        ++i;
    }
    line[i]='\0';
    while(c != EOF && c != '\n'){
        ++i;
        c = getchar();
    }

    return i;
}

void copy(char to[], char from[]){
    int i=0;
    while((to[i]=from[i])!='\0'){
        i++;
    }
}