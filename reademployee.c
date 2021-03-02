#include<stdio.h>
struct employee
{
  char empid[20];
  char empname[20];
  char company[20];
};
main()
{
	int i;
	struct employee emp1[3];
 FILE *fptr;
    fptr=fopen("employeedb.bin","rb");
	 for( i=0;i<3;i++)
	 {
		 fread(&emp1[i], sizeof(struct employee), 1, fptr);
		 printf("\n%s",emp1[i].empid);
		 printf("\t%s",emp1[i].empname);
		 printf("\t%s",emp1[i].company);
	 }
	 fclose(fptr);
	
}
