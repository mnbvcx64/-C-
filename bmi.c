#include <stdio.h>

int main() {
	double high,weight,bmi;
	printf("���������(��): ");
	scanf("%lf",&high);
	printf("����������(ǧ��): ");
	scanf("%lf",&weight);
	bmi = weight/(high*high);
	printf("BMIֵΪ: %.2f\n",bmi);
	if( bmi<=18.5){
		printf("����ƫ��\n");
	} else if( bmi > 18.5 && bmi <=23.9){
		printf("��������\n");
	} else if( bmi>=24 && bmi<=27.9){
		printf("����ƫ��\n");
	} else{
		printf("���ͷ���\n");
	}
	
	return 0;
}
