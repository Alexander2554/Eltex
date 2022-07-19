#include <stdio.h> 
#define N 5
int main()
{
    int  i, j, b = 1, c = 0;
    int a[N][N];
    while (i < N * N) {
        c++;
        for (j = c - 1; j < N - c + 1; j++) {
            a[c - 1][j] = b;
            b++;
            i++;
        }
        for (j = c; j < N - c + 1; j++) {
            a[j][N - c] = b;
            b++;
            i++;
        }
        for (j = N - c - 1; j >= c - 1; j--) {
            a[N - c][j] = b;
            b++;
            i++;
        }
        for (j = N - c - 1; j >= c; j--) {
            a[j][c - 1] = b;
            b++;
            i++;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
