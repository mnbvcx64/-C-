#include <stdio.h>
#include <math.h>

int main() {
    double lengthPixels, widthPixels, screenSize, ppi;

    printf("�����볤��������: ");
    scanf("%lf", &lengthPixels);
    printf("��������������: ");
    scanf("%lf", &widthPixels);
    printf("��������Ļ�ߴ磨Ӣ�磩: ");
    scanf("%lf", &screenSize);

    ppi = sqrt(lengthPixels * lengthPixels + widthPixels * widthPixels) / screenSize;
    printf("�����ܶȣ�PPI��: %.2f\n", ppi);

    return 0;
}
