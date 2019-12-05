#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float add(float a, float b)
{
float c=a+b;
return c;
}

float sub(float a, float b)
{
float c=b-a;
return c;
}
float mul(float a, float b)
{
float c=a*b;
return c;
}
float divi(float a, float b)
{
float c=b/a;
return c;
}
float sins(float a)
{ float c;
	float b=a/180;
	c=sin(b*M_PI);
	return c;
}
float cosin(float a)
{
 float b=a/180;
 float c;
c=cos(b*M_PI);
	return c;

}
float first_Number()
{ float a;
printf("Liczba:");
scanf ("%f",&a);
return a;
}

int choose()
{
int w;
printf("\nWybierz znak: \n1.+\n2.-\n3.*\n4./ \n5.sin \n6.cos\n");
scanf ("%d", &w);
return w;
}
float second_Number()
{
float b;
printf("Liczba:");
scanf("%f",&b);
return b;
}
int main()
{
while (1>0)
{
switch (choose()) {

case 1: printf("Wynik to %f",add(second_Number(),first_Number())); break;
case 2:printf("Wynik to %f",sub(second_Number(),first_Number())); break;
case 3:printf("Wynik to %f",mul(second_Number(),first_Number())); break;
case 4:printf("Wynik to %f",divi(second_Number(),first_Number())); break;
case 5:printf("Wynik to %f",sins(second_Number()));break;
case 6:printf("Wynik to %f",cosin(second_Number())); break;
default:printf("Wybrano dzialanie spoza listy!");
}
}
return 0;
}
