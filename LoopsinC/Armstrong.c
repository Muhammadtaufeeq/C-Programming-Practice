#include <stdio.h>
#include <math.h>
 int main()
{

   printf("Armstrong number between 1 to 500 are :\n");
   int lastdigit;
   int num ;
   int cube ;
  
   for (int i = 1; i <= 500; i++)
   {
    num = i;
    cube = 0;
    

      while (num != 0)
      {
         lastdigit = num % 10;
         cube  += lastdigit * lastdigit * lastdigit;
         num = num / 10;
      }
      if (cube == i)
      {
         printf("The Armstrong Number Are : %d\n",i);
      }
   }

   return 0;
} 