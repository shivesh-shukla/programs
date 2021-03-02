#include<stdio.h>
struct employee
{
  char empid[20];
  char empname[20];
  char company[20];
};
int i;
 main()
{
    FILE *fptr;
    fptr=fopen("employeedb.bin","wb");
	printf("\nEnter The Details\n");
    struct employee emp[3];
    for(i=0;i<3;i++)
    {
		printf("\nID\n");
        scanf("%s",&emp[i].empid);
		
		printf("\nName\n");
        scanf("%s",&emp[i].empname);
		
		printf("\nCompany\n");
        scanf("%s",&emp[i].company);
      fwrite(&emp[i], sizeof(struct employee), 1, fptr);
    }
	fclose(fptr);
}
