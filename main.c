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
printf("Oczekiwano: 3 Otrzmyano:%f\n",add(2,1));
   printf("Oczekiwano: 7.10 Otrzmyano:%1.2f \n",add(4.1,3));
   printf("Oczekiwano: 4.68 Otrzmyano:%1.2f \n",add(1.34,3.34));
   printf("Oczekiwano: 1253.795 Otrzmyano:%f \n",add(800.342,453.453));
   printf("Oczekiwano: 11118111111 Otrzmyano:%11.0f \n",add(7000000,11111111111));
   printf("Oczekiwano: 0.00000000000010004 Otrzmyano:%f \n",add(0.000000000001,0.0000000000000004));
   printf("Oczekiwano: 11.14 Otrzmyano:%f \n",add(2/2+3.14,1+6));
}
float sub(float a, float b) 
{
float c=a-b;
return c;
}
float test sub() {
printf("Oczekiwano: 1 Otrzmyano:%f\n",add(2,1));
   printf("Oczekiwano: 1.10 Otrzmyano:%1.2f \n",add(4.1,3));
   printf("Oczekiwano: -2 Otrzmyano:%1.2f \n",add(1.34,3.34));
   printf("Oczekiwano: 1253.795 Otrzmyano:%f \n",add(800.342,453.453));
   printf("Oczekiwano: 11118111111 Otrzmyano:%11.0f \n",add(7000000,11111111111));
   printf("Oczekiwano: 0.00000000000010004 Otrzmyano:%f \n",add(0.000000000001,0.0000000000000004));
   printf("Oczekiwano: 11.14 Otrzmyano:%f \n",add(2/2+3.14,1+6));
}
float mul(float a, float b)
{
float c=a*b;
return c;
} 
float test_mul(){

printf("Oczekiwano: 1 Otrzmyano:%f\n",add(2,1));
   printf("Oczekiwano: 1.10 Otrzmyano:%1.2f \n",add(4.1,3));
   printf("Oczekiwano: -2 Otrzmyano:%1.2f \n",add(1.34,3.34));
   printf("Oczekiwano: 1253.795 Otrzmyano:%f \n",add(800.342,453.453));
   printf("Oczekiwano: 11118111111 Otrzmyano:%11.0f \n",add(7000000,11111111111));
   printf("Oczekiwano: 0.00000000000010004 Otrzmyano:%f \n",add(0.000000000001,0.0000000000000004));
   printf("Oczekiwano: 11.14 Otrzmyano:%f \n",add(2/2+3.14,1+6));
}
float div(float a, float b)
{
float c=a/b;
return c;
}
float test_div()
{
printf("Oczekiwano: 1 Otrzmyano:%f\n",add(2,1));
   printf("Oczekiwano: 1.10 Otrzmyano:%1.2f \n",add(4.1,3));
   printf("Oczekiwano: -2 Otrzmyano:%1.2f \n",add(1.34,3.34));
   printf("Oczekiwano: 1253.795 Otrzmyano:%f \n",add(800.342,453.453));
   printf("Oczekiwano: 11118111111 Otrzmyano:%11.0f \n",add(7000000,11111111111));
   printf("Oczekiwano: 0.00000000000010004 Otrzmyano:%f \n",add(0.000000000001,0.0000000000000004));
   printf("Oczekiwano: 11.14 Otrzmyano:%f \n",add(2/2+3.14,1+6));
}
float sin(float a);
{
float c=sin(a);
return c;
}
float test_sin()
{
printf("Oczekiwano: 1 Otrzmyano:%f\n",add(2,1));
   printf("Oczekiwano: 1.10 Otrzmyano:%1.2f \n",add(4.1,3));
   printf("Oczekiwano: -2 Otrzmyano:%1.2f \n",add(1.34,3.34));
   printf("Oczekiwano: 1253.795 Otrzmyano:%f \n",add(800.342,453.453));
   printf("Oczekiwano: 11118111111 Otrzmyano:%11.0f \n",add(7000000,11111111111));
   printf("Oczekiwano: 0.00000000000010004 Otrzmyano:%f \n",add(0.000000000001,0.0000000000000004));
   printf("Oczekiwano: 11.14 Otrzmyano:%f \n",add(2/2+3.14,1+6));
}
float cos(float a)
{
float c=cos(a);
return c;
} 
float test_cos()
{ printf("Oczekiwano: 1 Otrzmyano:%f\n",add(2,1));
   printf("Oczekiwano: 1.10 Otrzmyano:%1.2f \n",add(4.1,3));
   printf("Oczekiwano: -2 Otrzmyano:%1.2f \n",add(1.34,3.34));
   printf("Oczekiwano: 1253.795 Otrzmyano:%f \n",add(800.342,453.453));
   printf("Oczekiwano: 11118111111 Otrzmyano:%11.0f \n",add(7000000,11111111111));
   printf("Oczekiwano: 0.00000000000010004 Otrzmyano:%f \n",add(0.000000000001,0.0000000000000004));
   printf("Oczekiwano: 11.14 Otrzmyano:%f \n",add(2/2+3.14,1+6));
}
float main()
{
   test_add();
test_sub();
test_mul();
test_div();
test_sin();
test_cos();
return 0;
}

