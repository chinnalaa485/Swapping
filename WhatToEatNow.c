#include<stdio.h>
#include<stdlib.h>
int main()
{
int n=0;
printf("enter an item:\n1.Pizza\n2.Burger\n3.Pasta\n4.frenchfries\n5.Sandwich");
scanf("%d",&n);
switch(n)
{
case 1:
printf("Food item-Pizza");
printf("\nPrice-Rs239");
break;
case 2:
printf("Food item-Burger");
printf("\nPrice-Rs129");
break;
case 3:
printf("Food item-Pasta");
printf("\nPrice-Rs179");
break;
case 4:
printf("Food item-FrenchFries");
printf("\nPrice-Rs99");
break;
case 5:
printf("Food item-Sandwich");
printf("\nPrice-Rs149");
break;
Default:
printf("not found");
break;
}
}
