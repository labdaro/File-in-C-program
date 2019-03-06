#include <stdio.h>
struct student
{
	char name;
	int Rollnum;
	char sub[3];
	int Marsub[3];
}Daro,Nak;


main()
{
	int i,num,total1,total2;
	FILE *fptr;
	fptr=fopen("program.txt","w");
	if(fptr==NULL)
	{
		printf("Error");
	}
	
	printf("Enter first student's name: ");
	scanf("%s",&Daro.name);
	printf("Enter the RollNumber: ");
	scanf("%d",&Daro.Rollnum);

	printf("Enter all subject:\n");
	for(i=0;i<3;i++)
	scanf("%s",&Daro.sub[i]);
	
	printf("Enter the score for each subject:\n");
	for(i=0;i<3;i++)
	{
	scanf("%d",&Daro.Marsub[i]);
	}
	total1=0;
	for(i=0;i<3;i++)
	{
	total1=total1+Daro.Marsub[i];	
	}
	
	printf(" total score are:%d",total1);
	printf("\n \n \n \n");

		// Student 2
	printf("Enter the second student's name: ");
	scanf("%s",&Nak.name);
	printf("Enter the RollNumber: ");
	scanf("%d",&Nak.Rollnum);

	printf("Enter all subject:\n");
	for(i=0;i<3;i++)
	scanf("%s",&Nak.sub[i]);
	
	printf("Enter the score for each subject:\n");
	for(i=0;i<3;i++)
	{
	scanf("%d",&Nak.Marsub[i]);
	}
	total2=0;
	for(i=0;i<3;i++)
	{
	total2=total2+Nak.Marsub[i];	
	}
	printf("Total scores are: %d",total2);
	
	//Daro
	fprintf(fptr,"%s",Daro.Marsub);
	fprintf(fptr,"%d",Daro.Rollnum);
	for(i=0;i<3;i++)
	{
	fprintf(fptr,"%d",Daro.Marsub[i]);
	fprintf(fptr,"\n");
	}
	fprintf(fptr,"%d",total1);
	//Nak
	fprintf(fptr,"%s",Nak.Marsub);
	fprintf(fptr,"%d",Nak.Rollnum);
	for(i=0;i<3;i++)
	{
	fprintf(fptr,"%d",Nak.Marsub[i]);
	fprintf(fptr,"\n");
	}
	fprintf(fptr,"%d",total2);



	fclose(fptr);
	
}
