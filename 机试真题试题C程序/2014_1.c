#include<stdio.h>
#include<math.h> 
double funpi(double e); 
int main(){
	double pi;
	pi=funpi(0.00001);
	printf("pi=%.5f\n", pi);
	return 0;
}

double funpi(double e){
	int denominator, flag;
	double item, sum;
	flag = 1;
	denominator = 1;
	item = 1.0;
	sum = 0;
	while(fabs(item) >= e){
		item = flag * 1.0 / denominator;
		sum = sum + item;
		flag = -flag;
		denominator = denominator + 2;
	}
	return sum * 4;
}
