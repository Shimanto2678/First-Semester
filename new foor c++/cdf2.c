#include<stdio.h>
#include<string.h>
int main()
{

int run;
scanf("%d",&run);

for(int i = 1; i <= run ; i++)

{   int size;
    scanf("%d",&size);
    char arr[size +1];
    scanf("%s",arr);

    for(int i = 1; i < size; i++)
    {
       if(arr[i] == 'L' && arr[i - 1] == 'R')
       {
        printf("%d\n",i +1 );
        break;
       }

       

    }



}


}