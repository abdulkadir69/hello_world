#include <stdio.h>
#include <stdlib.h>
#define PI 3.141
int main()
{
    float yaricap,alan;
    printf("yaricapi giriniz: ");
    scanf("%f",&yaricap);
    alan = PI*yaricap*yaricap;
    printf("dairenin alani: %f",alan);
    return 0;
}
