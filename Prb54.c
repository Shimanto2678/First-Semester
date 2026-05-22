#include<stdio.h>
int main()
{  long long int a,b,c;
 scanf("%lld%lld%lld",&a,&b,&c);
 if (a < b && a < c)
 {
   printf("%lld ",a);

  if (b > c)
  {
   printf("%lld",b);

  }
  else
  {
   printf("%lld",c);
  }
}

 if (b < a && b < c)
 {
   printf("%lld ",b);

  if (a > c)
  {
   printf("%lld",a);

  }
  else
  {
   printf("%lld",c);
  }

 }
  

 if (c < b && c < a)
 {
   printf("%lld ",c);

  if (a > b)
  {
   printf("%lld",a);

  }
  else
  {
   printf("%lld",b);
  }

}



}
