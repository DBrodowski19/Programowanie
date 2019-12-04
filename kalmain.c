#include <stdio.h>
#include <stdlib.h>

//Mechanizm pracy kalendarza
int main ()
{
int year,month,day,daysOfMonth,cut=1,day1=1,startDay=1, secondDay=2;

printf ("Prosze podaj rok:");
scanf ("%d",&year);
printf ("Prosze podaj miesiac:");
scanf ("%d",&month);
printf ("Prosze podaj dzień:");
scanf ("%d",&day);

char *months[]={"Pierwszy miesiąc","STYCZEN","LUTY","MARZEC","KWIECIEN","MAJ","CZERWIEC","LIPIEC","SIERPIEN","WRZESIEN",
"PAZDZIERNIK","LISTOPAD","GRUDZIEN"};
int *weekdays[]={0,1,2,3,4,5,6};
printf("Wybrałeś datę: %d.%d.%dr.",day,month,year);
int monthDay[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
if((year%4==0&&year%100!=0)||(year%400==0))
{
monthDay[1]=29;
}

//Ustalanie pierwszego dnia

day1=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;

printf("\n-------------%s--------------\n",months[month]);

printf("--PON--WTO--SRO--CZW--PIA--SOB--ND-\n");
daysOfMonth=monthDay[month];
switch (day1)
{
case 0:
printf("%33d",startDay);
cut+=6;
while(secondDay<=daysOfMonth)
{
if(cut<=8)
{
printf("%5d",secondDay);
secondDay++;
cut++;
}
if(cut>=8)
{
printf("\n%5d",secondDay);
secondDay++;
cut=1;
cut++;
}
}
case 1:
printf("%3d",startDay);
cut++;
while(secondDay<=daysOfMonth)
{
if(cut<=8)
{
printf("%5d",secondDay);
secondDay++;
cut++;
}
if (cut>=8)
{
printf("\n%5d",secondDay);
secondDay++;
cut=1;
cut++;
}
}
////WTOREK---->
case 2:
printf("%8d",startDay);
cut+=2;
while(secondDay<=daysOfMonth)
{
if(cut<=8)
{
printf("%5d",secondDay);
secondDay++;
cut++;
}
if (cut>=8)
{
printf("\n%5d",secondDay);
secondDay++;
cut=1;
cut++;
}
}
case 3:
printf("%13d",startDay);
cut+=3;
while(secondDay<=daysOfMonth)
{
if(cut<=8)
{
printf("%5d",secondDay);
secondDay++;
cut++;
}
if(cut>=8)
{
printf("\n%5d",secondDay);
secondDay++;
cut=1;
cut++;
}
}
case 4:
printf("%18d",startDay);
cut+=4;
while(secondDay<=daysOfMonth)
{
if(cut<=8)
{
printf("%5d",secondDay);
secondDay++;
cut++;
}
if (cut>=8)
{
printf("\n%5d",secondDay);
secondDay++;
cut=1;
cut++;
}
}
case 5:
printf("%23d",startDay);
cut+=5;
while(secondDay<=daysOfMonth)
{
if(cut<=8){
printf("%5d",secondDay);
secondDay++;
cut++;
}
if (cut>=8)
{
printf("\n%5d",secondDay);
secondDay++;
cut=1;
cut++;
}
}
case 6:
printf(" %28d",startDay);
cut+=6;
while(secondDay<=daysOfMonth)
{
if(cut<=8)
{
printf("%5d",secondDay);
secondDay++;
cut++;
}
if (cut>=8)
{
printf("\n%5d",secondDay);
secondDay++;
cut=1;
cut++;
}
}
}
return 0;
}
