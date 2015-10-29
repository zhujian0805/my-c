#include <stdio.h>
 
int main ()
{
   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* take the address of var */
   ptr = &var;

   /* take the address of ptr using address of operator & */
   pptr = &ptr;

   /* take the value using pptr */
   printf("Value available at var = %d\n", var);
   printf("Value available at var = %p\n", &var);

   printf("Value available at var = %p\n", ptr);
   printf("Value available at var = %p\n", &ptr);

   printf("Value available at var = %p\n", pptr);
   printf("Value available at var = %p\n", &pptr);

   return 0;
}
