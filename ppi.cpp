#include <iostream>
#include <cmath>

int main()
{
	double lengthPixels,widthPixels, screenSize, ppi;
	std::cout << "�����볤��������: ";
    std::cin >> lengthPixels;
    std::cout << "��������������: ";
    std::cin >> widthPixels;
    std::cout << "��������Ļ�ߴ磨Ӣ�磩: ";
    std::cin >> screenSize;
    ppi = sqrt(pow(lengthPixels, 2)+ pow(widthPixels, 2)) /screenSize;
    std::cout << "�����ܶȣ�PPI��: " << ppi << std::endl;
    return 0;
 } 
