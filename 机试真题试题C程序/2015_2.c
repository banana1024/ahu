#include<stdio.h>
int main(){
	int i, j, k, index_h, index_l, min, a[3][4];
	int max = -65535;
	printf("请输入12个整数：\n");
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
			scanf("%d", &a[i][j]);
	printf("这个3*4的整型矩阵是：\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	for(i=0; i<3; i++){
		min = 65535; index_h = -1; index_l = -1;
		for(j=0; j<4; j++){
			if(a[i][j] > max)
				max = a[i][j];
			if(a[i][j] < min){
				min = a[i][j];
				index_h = i;
				index_l = j;
			}
		}
		printf("\n第%d行中最小的值是%d, 它的下标是[%d,%d]", index_h+1, min, index_h, index_l);
	}
	printf("所有元素的最大值是：%d\n", max);
	return 0;
}
