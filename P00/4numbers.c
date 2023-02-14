#include <stdio.h>
int main(void)
{
	int p;
	int q;
	int r;
	int s;

	printf("Enter p: \n");
	scanf("%i",&p);
	
	printf("Enter q: \n");
	scanf("%i",&q);

	printf("Enter r: \n");
	scanf("%i",&r);

	printf("Enter s: \n");
	scanf("%i",&s);
	
	
	if (q>r && s>p && ((r+s)>(p+q))) {
		printf("Correct Values.\n");
	}else{
		printf("Wrong Values.\n");
	}
	return 0;	
}
