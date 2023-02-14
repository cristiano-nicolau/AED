//
// Tomás Oliveira e Silva, AED, October 2021
//
// program to print a table of the squares and square roots of some integers
//
// on GNU/Linux, run the command
//   man 3 printf
// to see the manual page of the printf function
//

#include <math.h>
#include <stdio.h>

void do_it(int N)
{
  int i;
  float a;

  printf(" n cos  sen\n");
  printf("-- --- -----------------\n");
  for(i = 0;i <= N;i++){
  	a=i*M_PI/180.0;
    	printf("%2d %3f %3f\n",i,cos(a),sin(a));
  }
}

int main(void)
{
  do_it(90);
  return 0;
}
