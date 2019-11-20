#include <stdio.h>
#define rozm 10
int w;
int main()

{
  int array[10];
  int i, j, Najw, temp;
for(w=0;w<10;w++)
{
scanf("%d",&array[w]);
}

  Najw = array[0];
  for (i = 0; i < rozm; ++i)
    if(array[i] > Najw)
      Najw = array[i];
  temp = Najw;
  printf("\n\n");


  for (i = 0; i < Najw; ++i) {
    printf("\n%3d|", Najw - i);
     for (j = 0; j < rozm; ++j)
       if (array[j] < temp)
     printf("   ");
       else {
     printf("  #");
     --array[j];
       }
     --temp;
  }

//metryczka-x
  printf("\n    ");
  for (i = 0; i < rozm; ++i)
    printf("  -", i);
  printf("\n    ");
  for (i = 0; i < rozm; ++i)
    printf("%3d", i);
  printf("\n");
  return 0;
}
