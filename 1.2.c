#include <stdio.h>
#define N 5
	int main()
	{
	int a[N];
	printf("a[n]=\n");
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
	}
	for(int i=N-1; i>=0; i--){
		printf("%d\t",a[i]);
	}
	return 0;
}

