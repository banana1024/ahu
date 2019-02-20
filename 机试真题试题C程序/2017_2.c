#include<stdio.h>
int judge(int num){
	int sum = 0, temp[30], j = 0;
	for(int i = 1; i <= num/2; i++){
		if(num % i == 0){
			sum = sum + i;
			temp[j++] = i;//temp[]数组存储num的所有约数
		}
	}
	if(sum == num){
		printf("完数 %d 的所有完数为:", num);
		for(int i = 0; i < j; i++){
			printf("%d ", temp[i]);
		}
		printf("\n");
		return 1;
	}else{
		return 0;
	}
}

void main(void){
	for(int number = 1; number <= 1000; number++){
		judge(number);
	}
	printf("\n");
}
