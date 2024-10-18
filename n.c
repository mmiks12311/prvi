
#include<stdio.h>

void endian() {

   int x = 1;

   char *a = (char *)&x;

   if (a[0] == 1)

     printf("Little Endian\n");

   else

     printf("Big Endian\n");

}

int main(){

   printf("Machine Endianness => ");

   endian();

   return 0;

}