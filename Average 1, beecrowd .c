#include<stdint-gcc.h>
int main ()
{
    float A,B,MEDIA;
    printf("Enter the two subject resul :");
    scanf("%f%f",&A,&B);
    MEDIA=(A*3.5+B*7.5)/(3.5+7.5);
    printf("MEDIA = %.5f",MEDIA);
    return 0 ;
}
