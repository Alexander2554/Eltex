#include <stdio.h>
#define N 5

int main(){
    int a[N][N];
    int b = 1;

    for(int i = 0;i < N; i++){
        for(int j = 0;j < N; j++){
	    	a[i][j] = b++;
	    printf("%d ", a[i][j]);
	}
	printf("\n");
    }
    return 0;
}
