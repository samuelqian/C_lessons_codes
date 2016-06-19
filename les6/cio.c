#include <stdio.h>

/* standard input output error stream
as long as script runs, OS create process thus provide pointer of resource including 3 files stdin ,stdout ,stderr, that stors input output and errors


 */


int main()
{
	//printf("hello world!");
	fprintf(stdout,"hello world !\n");
	int a;
	//scanf("%d", &a);
	fscanf(stdin,"%d",&a);
	if(a<0){
	fprintf(stderr,"the value must > 0");
	return 1;
	}

	printf("input value is : %d\n",a);
	return 0;
}
