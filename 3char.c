#include <stdio.h>

int main()
{
    int c;
    printf("EOF es: %d\n",EOF);
    while((c=getchar())!=EOF){  // EOF is end of file 
        putchar(c);
    }
    return 0;
}
