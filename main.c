#include <stdio.h>
#include <stdlib.h>
int liczby[9];
void histogram();
int w;
int i;
int j;
int main()
{
for (w=0; w<10; w++)
{
scanf("%d",&liczby[w]);
}
for(i=0;i<=10;i++)
{


for (i = 0; i < 10; i++) {
      printf("[%d] ", i);
      for ( j = 0; j < liczby[i]; ++j) {
      printf("*");
      }
      printf("\n");
   }
}


return 0;
}






