#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fharToCel(float fhar);


int main()
{
    float fhar, celsius;

    printf("Farhenheit\tCelsius\n");
    
    
    for(fhar=UPPER;fhar>=LOWER;fhar-=STEP){
        printf("%5.0f\t\t%6.1f\n",fhar,fharToCel(fhar));
    }
}

float fharToCel(float fhar){
    return (5.0/9.0)*(fhar-32);
}
