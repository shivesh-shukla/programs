#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
fptr = fopen("firstfile.txt","r");

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}
