#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   fptr = fopen("firstfile.txt","w");

   printf("\nEnter num: \n");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}
