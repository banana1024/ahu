#include<stdio.h>
#define N 3
int main(){
	int i, j, a[N][N];
	printf("请输入%d个整数：\n", N*N);
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			scanf("%d", &a[i][j]);
	printf("原矩阵是：\n");
	for(i=0; i<N; i++){
        for(j=0; j<N; j++)
            printf("%4d", a[i][j]);
        printf("\n");
	
	for(i=0; i<N; i++){
		for(j=0; j<i; j++){
			a[i][j] = a[i][j] + a[j][i];
			a[j][i] = 0;
		}
	}
	printf("处理后的矩阵是：\n");
	for(i=0; i<N; i++){
		for(j=0; j<N; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	return 0;
}
