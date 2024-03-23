#include <stdio.h>
#include <math.h>

int main() {
    double lengthPixels, widthPixels, screenSize, ppi;

    printf("请输入长度像素数: ");
    scanf("%lf", &lengthPixels);
    printf("请输入宽度像素数: ");
    scanf("%lf", &widthPixels);
    printf("请输入屏幕尺寸（英寸）: ");
    scanf("%lf", &screenSize);

    ppi = sqrt(lengthPixels * lengthPixels + widthPixels * widthPixels) / screenSize;
    printf("像素密度（PPI）: %.2f\n", ppi);

    return 0;
}
