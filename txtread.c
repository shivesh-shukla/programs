#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("testfile","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
for(int i=0;i<2;i++)
{
   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   }
   fclose(fptr); 
  
   return 0;
}
