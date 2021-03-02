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
 int i,j=0,sindex, flag=0;
	struct employee emp3[3];
    fptr=fopen("employeedb.bin","r+b");
    char search[20];
	printf("\nEnter the Update key\n");
	scanf("%s",&search);
	 fseek(fptr,0,SEEK_SET);
	

		
	for(i=0;i<3;i++)
	 {
		 fread(&emp3[j], sizeof(struct employee), 1, fptr);
		 if(strcmp(search,emp3[i].empid)==0)
		 {
			 flag=1;
			 printf("\nEmployee found\n");
			 strcpy(emp3[i].empid,"\0");
			 strcpy(emp3[i].empname,"\0");
			 strcpy(emp3[i].company,"\0");
			 fseek(fptr,sizeof(emp3[i])*(i),SEEK_SET);
			 fwrite(&emp3[i],sizeof(emp3[i]),1,fptr);
			 exit(0);
		 }
	 }
	
    if(flag==0)
	{
printf("\nNOT FOUND\n");
	}
	fclose(fptr);
	
}
