#include<stdio.h>
int judge(int number){
	if(1 == number%2){
		return 1;
	}
	return 0;
}
void main(){
	int num, num_odd = 0, sum_odd = 0;
	printf("请输入10个正整数:\n");
	for(int i = 0; i < 10; i++){
		scanf("%d,", &num);
		if(1 == judge(num)){
			printf("%d ", num);
			num_odd++;
			sum_odd += num;
		}
	}
	printf("\nNUM = %d\nSUM = %d\n", num_odd, sum_odd);
}
