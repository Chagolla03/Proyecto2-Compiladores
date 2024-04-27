/* C Program to print a sentence. */
#include "stdio.h"
int r;
int h[2];
int printf();
int myfunc(int a, int b)
{
   int z;
   return a * b;
}
int main()
{
   double x = 0.1;
   float y = 1.5/3;
   int z = 3+2u;
   char c = '\xd2', cc = '\342';
   int i;
   r = x-3*4/2;
   y *= 2.5e5;
   if(r>3)
      printf(L"C Programming // %d\n", 5); /* printf() prints the content inside quotation */
   else
      r += 0x0aa;
   for(i = 0;i < 5;i++) 
   {
      printf("%d\n", i);
   }
   z = myfunc(h[1], 5);
   return z;
}
