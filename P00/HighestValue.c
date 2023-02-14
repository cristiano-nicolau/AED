#include <stdio.h>
#define w 5

int main()
{
	int n[w],i,j,max=0,pos=0;
	printf("Input 5 integers: \n");
	for(i=0;i<w;i++){
		scanf("%d",&n[i]);
	}
	
	for (j=0; j<w; j++){
		if (n[j]>max){
			max=n[j];
			pos=j;
		}
	}
	printf("Highst Value %d on position %d\n",max,pos+1);
	return 0;
}
