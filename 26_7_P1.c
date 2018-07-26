#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[50],s[50];
	int c,i=0,n;
	FILE *fptr;
	fptr=fopen("D:\\it69\\hellooooooo.txt","w+");
	fprintf(fptr,"%s %s","C/C++","Programming");
	
	printf("Enter number of students: ");
	scanf("%d",&n);
	printf(" %s %s %s \n",fptr);
	if(fptr==NULL){
		printf("ERROR!");
		exit(1);
		gets(name);
	}
	for(i=0;i<n;i++){
		fprintf(fptr,"\nStudent %d Infor: %s ",i+1,name);
		printf("Input the information of Student %d and Press 0 to stop\n",i+1);
		while(s[0]!='0'){
			scanf("%s",s);
			fprintf(fptr,"%s\n",s);
			}
		s[0]=1;
		}
	fclose(fptr);
	return 0;
}
