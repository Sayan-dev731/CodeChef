// #include<stdio.h>
// int main()
// { int num;
// printf("enter a number less than 10");
// scanf("%d",&num);
// if(num<=10)
// {
//  printf("number is less than 10\n") ;}
//  else{

//     printf("number is greater than 10");
//  }
// return 0;
// }


#include <stdio.h>

int main()
{
   float n;
   scanf("%f", &n);
   float t = 1;
   while(n > 0) 
   {
      t = t * n;
      n--;
   }
   printf("%f", t);

   return 0;
}