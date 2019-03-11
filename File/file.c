#include<stdio.h>
struct student{
	char name[30], sub[30];
	int rollNum, mark;
}std1;

main(){
	FILE *fptr;
	fptr = fopen("program.txt","a");
	
	int i, num, tot=0;
	
	printf("Enter student name: ");
	scanf("%s", &std1.name);
	fprintf(fptr,"%s ,", std1.name);
	
	printf("Enter student roll number: ");
	scanf("%d", &std1.rollNum);
	fprintf(fptr,"%d\n", std1.rollNum);
	
	for(i=0;i<3;i++){
		printf("Enter subject: ");
		scanf("%s", &std1.sub);
		printf("Enter %s mark: ",std1.sub);
		scanf("%d", &std1.mark);
		fprintf(fptr, "%s: %d\n", std1.sub, std1.mark);
		printf("-----------------------\n");
		tot+=std1.mark;
	}
	printf("Total: %d", tot);
	fprintf(fptr,"\nTotal: %d\n---------------------\n", tot);
	fclose(fptr);
}
