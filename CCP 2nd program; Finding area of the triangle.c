#include<stdio.h>
#include<math.h>

float area_of_triangle(float,float,float);
int main()
{
  float a,b,c,d;
  printf("\nEnter the three sides of the triangle:");
  scanf("\n%f %f %f", &a,&b,&c);
  d=area_of_triangle(a,b,c);
  printf("\nThe area of the triangle is %.3f",d);
  return 0;
}

float area_of_triangle(float a,float b,float c)
{
  float s,area;
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  return (area);
}
