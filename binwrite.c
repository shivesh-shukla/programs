#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("testfile","wb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 1; n < 3; ++n)
   {
   printf("\nEnter n1\n");
      scanf("%d",&num.n1);
      fwrite(&num, sizeof(struct threeNum), 1, fptr); 
   }
   fclose(fptr);
  
   return 0;
}
