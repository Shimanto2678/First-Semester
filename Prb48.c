#include <stdio.h>
int main()
  {
    int arr[7]; 

    for(int i = 0; i < 7; i++)
    {
        int x;
        scanf("%d", &x);

        if(x <= 0)
        {
            x = 100;  
        }

        arr[i] = x;  
    }


    printf("Final array: ");
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
