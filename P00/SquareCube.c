#include <stdio.h>

int main()
{
	int i,j;
	printf("Input integer: \n");
	scanf("%d",&i);
	printf("i i*i i*i*i\n");
	printf("-- --- ----\n");
	for (j=0; j<=i;j++){
		printf("%2d %3d %3d\n",j,j*j,j*j*j);
	}	
	return 0;
}
