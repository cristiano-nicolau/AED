#include <stdio.h>

int main()
{
	int l,c,i=1,x=1,y=1;
	printf("Input number of lines: \n");
	scanf("%d",&l);
	printf("Input number of characters: \n");
	scanf("%d",&c);
	
	while (y<=l){
		while (x<=c){
			if (x<c){
				printf("%d ",i);
				x++;
				i++;
			}else if (x==c){
				printf("%d \n",i);
				x++;
				i++;
			}
			
		}
		x=1;
		y++;
	}
	return 0;
	
}
