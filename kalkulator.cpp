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
float c=a-b;
return c;
}
float mul(float a, float b)
{
float c=a*b;
return c;
}
float div(float a, float b)
{
float c=a/b;
return c;
}
float sins(float a, float b)
{ float c;
	b=a/180;
	c=sin(b*M_PI);
	return c;
}
float cosin(float a, float b)
{  
 b=a/180;
 float c;
c=cos(b*M_PI);
c=cos(a);
	return c;
	
}
int main () 
{
}
