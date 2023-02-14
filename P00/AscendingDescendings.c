#include <stdio.h>

int main()
{	
	int i,j;
	printf("Input first integer: \n");
	scanf("%d",&i);
	printf("Input second integer: \n");
	scanf("%d",&j);
	
	if (i>j){
		printf("Ascending order\n");
	} else if (j>i){
		printf("Descending order\n");
	}else {
		printf("Equal Values\n");
	}
	return 0;
}
