#include<stdio.h>
int main(){
	int i;
	float a[10];
	for(i = 0; i < 10; i++){
		printf("请输入第%d个同学的成绩：\n", i+1);
		scanf("%f", &a[i]);
		if(a[i] >= 90 && a[i] <= 100)
			printf("该同学的成绩等级为：A\n");
		else if(a[i] >= 80 && a[i] <= 89)
                        printf("该同学的成绩等级为：B\n");
                else if(a[i] >= 70 && a[i] <= 79)
                        printf("该同学的成绩等级为：C\n");
		else if(a[i] >= 60 && a[i] <= 69)
                        printf("该同学的成绩等级为：D\n");
		else if(a[i] >= 0 && a[i] <= 59)
                        printf("该同学的成绩等级为：E\n");
		else if(a[i] < 0 || a[i] > 100){
                        printf("输入的学生成绩必须在0到100之间，重新输入\n");
			i--;
		}
		if(9==i)
			printf("10个同学的成绩已经输入完毕，程序运行结束……\n");
	}
	return 0;
}
