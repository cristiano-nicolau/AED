#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	srand(time(NULL));
	char nr[9]; // array com os nrms
	int k,x=0;
	int j, w = 0;
	for (k=0;k<10;k++){
		int r = rand() % 10;// random a 1 nr 0-9
		nr[k]=r;
		for (int i=0;i<=k;k++){ //Ver se o r ja existe no array
			if (nr[i]==r){
				x++;
			}
		}
		if (x==0){
			nr[k]=r; //adicionar ao array o nrm pois nao existe ainda no array
			for (j = 0; j < 10; j++){
    				w = 10 * w + nr[j]; //tranformar o array num int
    			}
    			if (w%k==0){
    				nr[k]=0;
    			}else{
    				k=k-1;
    			}
    			
		}else{ 
			k=k-1;
		}
		x=0;
		r=0;
		j=0;    //variaveis a 0 para a entrada do proximo k
		w=0;
	}
	return 0;
}
