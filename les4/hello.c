#include <stdio.h>
//#include "max.c"

#include "max.h"
#include "min.h"







int main()
{
	printf("hello, world\n");
//	return 0;
        int a1=33;
	int a2=24;
	int maxnum=max(a1,a2);
	int minnum=min(a1,a2);
	printf("the max value is %d\n",maxnum);
	return 0;



}



