#include<stdio.h>
int main(){
	int i, j, index_h = -1, index_l = -1, a[3][4];
	int max = -65535;
	printf("请输入12个整数：\n");
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
			scanf("%d", &a[i][j]);
	printf("这个3*4的整数矩阵是：\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	for(i=0; i<3; i++){
		for(j=0; j<4; j++)
			if(a[i][j] > max){
				max = a[i][j];
				index_h = i;
				index_l = j;
			}
	}
	printf("MAX=%d, 最大值在第%d行, 第%d列\n", max, index_h+1, index_l+1);
	return 0;
}
