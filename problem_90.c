#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char arr[500];

    gets(arr);

    for(int i =  0; arr[i]!= '\0'; i++)
    {
        for(int j = i + 1; arr[j] != '\0';j++)
        {
            if(arr[i]>arr[j])
            {
                char temp;
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }

    printf("%s",arr);


}