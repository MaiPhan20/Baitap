#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	i= 0;
	j = 10;
	while (i<100&&j>5)
	{
		printf("\na");
		i++;
		j-=2;
	}
	return 0;
}
