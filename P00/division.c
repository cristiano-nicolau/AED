#include <stdio.h>

int main()
{	
	int i,j;
	printf("Input first integer: \n");
	scanf("%d",&i);
	printf("Input second integer: \n");
	scanf("%d",&j);
	
	if (j!=0){
		float div=(float)i/(float)j;
		printf("%.1f\n", div);
	}else{
		printf("Division not possible\n");
	}
}
