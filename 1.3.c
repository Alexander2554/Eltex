#include <stdio.h>
#define N 5
int main()
{
	int array[N][N];
	int a = N;
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if(i+j+1 < a)
				array[i][j]=0;
			else
				array[i][j]=1;
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
