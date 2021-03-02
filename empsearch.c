#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
  char empid[20];
  char empname[20];
  char company[20];
};
main()
{
   
 FILE *fptr;
 int i,j=0, flag=0;
	struct employee emp2[3];
    fptr=fopen("employeedb.bin","rb");
    char search[20];
	printf("\nEnter the search key\n");
	scanf("%s",&search);
	while(fread(&emp2[j], sizeof(struct employee), 1, fptr)==1)
	{
		 
	for(i=0;i<3;i++)
	 {
		 if(strcmp(search,emp2[i].empid)==0)
		 {
			 flag=1;
			 printf("\nFound\n");
			 exit(0);
		 }
	 }
	 j++;
	}
    if(flag==0)
	{
printf("\nNOT FOUND\n");
	}
	fclose(fptr);
	
}
