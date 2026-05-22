#include<stdio.h>
#include<string.h>
int main()
{  char word[100];
   printf("Enter the string to check palindrome : ");
   scanf("%s",word);
   int length = strlen(word);

   int track =0;

  for(int i = 0 ; i < length / 2; i ++)
  {
    if(word[i] != word[length - i - 1])
    {
         track++;

    }
  }

  if (track == 0)
  {
    printf("IS PALINDROME ");

  }

  else{
    printf("NOT PALINDROME");
  }
    

}