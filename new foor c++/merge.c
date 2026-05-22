#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],mer[100];

    int n1,n2;

    printf("Enter the size of the first array : ");
    scanf("%d",&n1);
    for(int i = 0; i < n1; i ++)
    {   printf("Enter the %d th element of the first array : ",i +1);

        scanf("%d",&arr1[i]);

        printf("\n");
    }


    printf("Enter the sizre of the 2nd array : ");
    scanf("%d",&n2);

    for( int j = 0 ; j< n2; j++)
    {
        printf("Enter the %d th element of the second array :",j+1);
        scanf("%d",&arr2[j]);
        printf("\n");
    }

    for(int l=0;l<n1; l++)
    {  
        mer[l]=arr1[l];
        
    }
    for(int l=0; l<n2;l++)
    {  
        mer[n1+l] = arr2[l];
        
    }

    printf("Your input combined is : ");
    for(int k = 0; k < n1+n2; k++)
    {
        printf("%d ",mer[k]);
    }

    for(int i = 0; i< n1+ n2; i++)
    {  int j = 0;
        for ( int m = 0; m )
    }
                
    

    printf("The merged array is : ");
    for(int i = 0; i< n1+n2 ;i++)
    {
        printf("%d",mer[i]);
    }


}