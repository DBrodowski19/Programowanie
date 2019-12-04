#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float add(float a, float b)
{
float c=a+b;
return c;

}


float test_add()
{
printf("Oczekiwano: 3 Otrzymano:%f\n",add(2,1));
   printf("Oczekiwano: 7.10 Otrzymano:%1.2f \n",add(4.1,3));
   printf("Oczekiwano: 4.68 Otrzymano:%1.2f \n",add(1.34,3.34));
   printf("Oczekiwano: 1253.795 Otrzymano:%f \n",add(800.342,453.453));
   printf("Oczekiwano: 11118111111 Otrzymano:%11.0f \n",add(7000000,11111111111));
   printf("Oczekiwano: 0.00000000000010004 Otrzymano:%f \n",add(0.000000000001,0.0000000000000004));
   printf("Oczekiwano: 11.14 Otrzymano:%f \n",add(2/2+3.14,1+6));
}

float sub(float a, float b) 
{
float c=a-b;
return c;
}

float test_sub() {
printf("\n\n\nOczekiwano: 1 Otrzymano:%f\n",sub(2,1));
   printf("Oczekiwano: 1.10 Otrzymano:%f \n",sub(4.1,3));
   printf("Oczekiwano: -2 Otrzymano:%f \n",sub(1.34,3.34));
   printf("Oczekiwano: 346.889 Otrzymano:%f \n",sub(800.342,453.453));
   printf("Oczekiwano: -4111 Otrzymano:%f\n",sub(7000,11111));
   printf("Oczekiwano: 0.000000000000996 Otrzymano:%f \n",sub(0.000000000001,0.0000000000000004));
   printf("Oczekiwano: 0.000000000000996 Otrzymano:%.16f \n",sub(0.000000000001,0.0000000000000004));
}
float mul(float a, float b)
{
float c=a*b;
return c;
} 
float test_mul(){

printf("\n\n\nOczekiwano: 2 Otrzymano:%f\n",mul(2,1));
   printf("Oczekiwano: 12.3 Otrzymano:%f \n",mul(4.1,3));
   printf("Oczekiwano: 4.4756 Otrzymano:%f \n",mul(1.34,3.34));
   printf("Oczekiwano: 362917,481 Otrzymano:%f \n",mul(800.342,453.453));
   printf("Oczekiwano: 362917,481 Otrzymano:%8.6f \n",mul(800.342,453.453));
  printf("Oczekiwano: 0.00000000004 Otrzymano:%f \n",mul(0.00001,0.000004));
  printf("Oczekiwano: 0.00000000004 Otrzymano:%1.11f \n",mul(0.00001,0.000004));
}
float divi(float a, float b)
{
float c=a/b;
return c;
}

float test_div()
{
printf("\n\n\nOczekiwano: 2 Otrzymano:%f\n",divi(2,1));
   printf("Oczekiwano: 1.36666667 Otrzymano:%f \n",divi(4.1,3));
   printf("Oczekiwano: 1.36666667 Otrzymano:%2.8f \n",divi(4.1,3));
   printf("Oczekiwano: 1.76499439 Otrzymano:%1.10f \n",divi(800.342,453.453));
   printf("Oczekiwano: 0,00063 Otrzymano:%f \n",divi(700000,1111111111));
   printf("Oczekiwano: 0,0006300001 Otrzymano:%1.10f \n",divi(700000.1,1111111111.1));;
   printf("Oczekiwano: 1 Otrzymano:%f \n",divi(2/2+1,1202-1200));
}

float sins(float a)
{
float c=sin(a);
return c;
}

float test_sin()
{
printf("\n\n\nOczekiwano: 1 Otrzymano:%f\n",sins(M_PI/2));
   printf("Oczekiwano:0.85090352453 Otrzymano:%.15f\n",sins(M_PI/4));
   printf("Oczekiwano: 0 Otrzymano:%f \n",sins(M_PI));
   printf("Oczekiwano: 0 Otrzymano:%f \n",sins(2*M_PI));
   printf("Oczekiwano: -1 Otrzymano:%f \n",sins(1.5*M_PI));
   printf("Oczekiwano: -1 Otrzymano:%f \n",sins(270));
   printf("Oczekiwano: 0 Otrzymano:%f \n",sins(10*M_PI));
}
float cosin(float a)
{
float c=cos(a);
return c;
} 
float test_cos()
{ 
printf("\n\n\nOczekiwano: 0 Otrzymano:%f\n",cosin(M_PI/2));
   printf("Oczekiwano:0.70710678118 Otrzymano:%f\n",cosin(M_PI/4));
   printf("Oczekiwano: -1 Otrzymano:%f \n",cosin(M_PI));
   printf("Oczekiwano: 1 Otrzymano:%f \n",cosin(2*M_PI));
   printf("Oczekiwano: 0 Otrzymano:%f \n",cosin(1.5*M_PI));
   printf("Oczekiwano: 0 Otrzymano:%f \n",cosin(270));
   printf("Oczekiwano: 1 Otrzymano:%f \n",cosin(10*M_PI));
}

int main()
{
test_add();
test_sub();
test_mul();
test_div();
test_sin();
test_cos();
return 0;
}
