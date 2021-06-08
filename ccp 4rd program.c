#include<stdio.h>
float average(float,float,float);
int main()
{
    float a,b,c,d;
    printf("\nEnter the three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    d=average(a,b,c);
    printf("\nThe average of three numbers is %.2f",d);
    return 0;
}

 float average(float a,float b,float c)
 {
    float avg;
    avg=(a+b+c)/3;
    return (avg);
}
