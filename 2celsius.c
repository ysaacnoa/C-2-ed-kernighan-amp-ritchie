#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float fhar, celsius;

    printf("Celsius\tFarhenheit\n");
    
        for(fhar=UPPER;fhar>=LOWER;fhar-=STEP){
        celsius = (5.0/9.0)*(fhar-32.0);
        printf("%5.0f\t%6.1f\n",fhar,celsius);
    }
}