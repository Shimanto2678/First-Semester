#include<stdio.h>
int main()
{
    int input;

  printf("Enter total days : ");
  scanf("%d",&input);

  int year = input / 365;
  printf("Years- %d ",year);
  int weeks = (input - (year * 365)) /7;

  printf("Weeks- %d ",weeks);

int days = input - year * 365 - weeks * 7;
  printf("Days- %d ",days);







}