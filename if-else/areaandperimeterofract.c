#include<stdio.h>
 int main(){

   float length , breath , area , perimeter ;

   printf("\n\nWhat is the Length of rectangle : ");
   scanf("%fcm", &length);

   printf("\n\nWhat is The breath of rectangle : ");
   scanf("%fcm", &breath);

   area = length * breath ;
   perimeter = 2 * ( length + breath);

   printf("\n\nThe Area Of That Ractangle is : %fcm.sq", area);
   printf("\n\nThe Perimeter of that Ractnagle is : %fcm", perimeter);

   if ( area > perimeter )
   printf("\n\nThe Area Is Greater Than The perimeter of Ractangle");

   else //if (perimeter > area ) 
   printf("\n\nThe Perimeter is Graeter Than The Area of ractangle\n\n ");

   return 0 ;

 }