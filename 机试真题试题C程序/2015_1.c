#include<stdio.h>
int main(){
	int i, a[10], b[10];
	int j = 0, sum = 0;
	printf("please input ten number:\n");
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
		if(a[i] > 0){
			b[j] = a[i];
			sum = sum + b[j];
			j++;
		}
	}
	printf("这10个数中的正数是：");
	for(i=0; i<j; i++){
		printf("%d,", b[i]);
	}
	printf("\n这%d个正数的和是：%d\n", j, sum);
	return 0;
}

