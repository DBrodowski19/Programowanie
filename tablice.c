#include <stdio.h>
#include <stdlib.h>

 void note_Numbers()
 { int drop;
 int tabexample [100];
 int w;
 int i;
 int r;
 printf ("Liczba cyfr w tablicy:");
 scanf ("%d",&w);
 int tab[w];
 printf("Stworzono tablice %d-elementowa. Wpisz liczby.",w);
for(i=0;i<w;i++)
{
scanf("%d",&tab[i]);
}

for (r=0;r<w;r++)

{
    printf("%d",tab[r]);
}



 }

 int size_of_Array()
 {
 int size;
 size=100;
 return size;
 }


 float write_Down( float tabexample[])
 {
 int drop;

for(drop=0;drop<size_of_Array();drop++)
{
printf(" %1.0f",tabexample[drop]);
}
}
float sum_up(float tabexample[])
{
float sum=0;
int drop;
for (drop=0; drop<size_of_Array(); drop++)
{
sum+=tabexample[drop];

}

return sum;


}
float average(float tabexample[])
{
float arithmetic_average;

arithmetic_average=sum_up(tabexample)/size_of_Array();

return arithmetic_average;
}
float elmin(float tabexample[])
{
float min;
int drop=1;
min=tabexample[0];
while (drop<size_of_Array())
{
if(tabexample[drop]<min)
{
min=tabexample[drop];
}
drop++;
}

}
float elmax(float tabexample[])
{
float max;
int drop=1;
max=tabexample[0];
while (drop<size_of_Array())
{
if(tabexample[drop]>max)
{
max=tabexample[drop];
}
drop++;
}
}
float sumab(float tabexample[], int example2[],float sumtab[])
{
int drop;

for(drop=0;drop<size_of_Array();drop++)
{
sumtab[drop]=tabexample[drop]+example2[drop];

}


}
int main()
{
//note_Numbers();
size_of_Array();


//zadeklarowanie tablicy i jej wypełnienie wartościami testowymi

float tabexample[size_of_Array()];
int drop;
for(drop=0;drop<size_of_Array();drop++)
{
tabexample[drop]=drop;
}
//druga tablica
int example2[size_of_Array()];
for(drop=0;drop<size_of_Array();drop++)
{
example2[drop]=drop+3;
}
//trzecia tablica
float sumtab[size_of_Array()];
// wypisanie elementów tablicy 100-elementowej
write_Down(tabexample);
//Sumowanie:
sum_up(tabexample);
average(tabexample);
elmin(tabexample);
elmax(tabexample);
sumab(tabexample,example2,sumtab);
    return tabexample;
}
