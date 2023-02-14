#include <math.h>
#include <stdio.h>

void do_it(int N)
{
	int i;
	printf(" n n*n cos(n) sen(n)sqrt(n)\n");
	printf("-- --- --- --- -----------------\n");
	for(i = 1;i <= N;i++)
		printf("%2d %3d %3f %3f %17.15f\n",i,i * i,cos(i*M_PI/180),sin(i*M_PI/180),sqrt((double)i));
}

int main(void)
{
	do_it(90);
	return 0;
}
