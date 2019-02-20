#include<stdio.h>
int main(){
	int i, num = 0, sum = 0;
	int a[10], b[10];
	for(i=0; i<10; i++){
		scanf("%d,",&a[i]);
		if(a[i] % 2 == 0){
			b[num++] = a[i];
			sum = sum + a[i];
		}
	}
	for(i=0; i<num; i++){
		printf("%d, ", b[i]);
	}
	printf("AVE=%d\n", sum/num);
	return 0;
}
