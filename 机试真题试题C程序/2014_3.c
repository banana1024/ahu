#include<stdio.h>
#define N 10
void main(){
	int b[N], i, j, k, index, temp;
	printf("请输入%d个整数：",  N);
	for(i=0; i<N; i++)
		scanf("%d", &b[i]);
	for(i=0; i<N-1; i++){
		index = i;
		for(j=i+1; j<N; j++)
			if(b[index] > b[j])
				index = j;
		temp = b[index];
		b[index] = b[i]; 
		b[i] = temp;
	}
	printf("请输入k(0<k<%d):", N);
	scanf("%d", &k);
	printf("%d个最小值：", k);
	for(i=0; i<k; i++)
		printf("%d ", b[i]);
	printf("\n%d个最大值", k);
	for(i=N-1; i>N-k-1; i--)
		printf("%d ", b[i]);
	printf("\n");
}
