#include <stdio.h>

int main() {
	double high,weight,bmi;
	printf("请输入身高(米): ");
	scanf("%lf",&high);
	printf("请输入体重(千克): ");
	scanf("%lf",&weight);
	bmi = weight/(high*high);
	printf("BMI值为: %.2f\n",bmi);
	if( bmi<=18.5){
		printf("体型偏瘦\n");
	} else if( bmi > 18.5 && bmi <=23.9){
		printf("体型正常\n");
	} else if( bmi>=24 && bmi<=27.9){
		printf("体型偏胖\n");
	} else{
		printf("体型肥胖\n");
	}
	
	return 0;
}
