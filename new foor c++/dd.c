#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char str1[500];
   char str2[500];

  scanf("%s",str1);
  scanf("%s",str2);

  for(int i = 0 ; str1[i] != '\0'; i ++)
  {
    str1[i] = tolower(str1[i]);
  }

   for(int i = 0 ; str2[i] != '\0'; i ++)
  {
    str2[i] = tolower(str2[i]);
  }

 int x= strcmp(str1,str2);

 printf("%d",x);

  }

