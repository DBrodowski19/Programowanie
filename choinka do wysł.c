#include <stdio.h>
#include <stdlib.h>
int choinka1()
{

printf("      *      \n");
printf("     ***      \n");
printf("    *****      \n");
printf("   *******      \n\n\n\n");
return 0;
}
void choinka2()
{
int n=15;
   {

    for(int i = 0; i < n; i++)
{   for(int j = i + 1; j < n; j++)
       printf(" ");
    for(int j = 0; j <= 2*i; j++)
       printf("*");
   if(i < n - 1) printf("\n");
}

}


}
void choinka3 ()
int main(){

choinka1();
choinka2();
return 0;
}

