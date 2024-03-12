#include <iostream>
#include <cmath>

int main()
{
	double lengthPixels,widthPixels, screenSize, ppi;
	std::cout << "ÇëÊäÈë³¤¶ÈÏñËØÊý: ";
    std::cin >> lengthPixels;
    std::cout << "ÇëÊäÈë¿í¶ÈÏñËØÊý: ";
    std::cin >> widthPixels;
    std::cout << "ÇëÊäÈëÆÁÄ»³ß´ç£¨Ó¢´ç£©: ";
    std::cin >> screenSize;
    ppi = sqrt(pow(lengthPixels, 2)+ pow(widthPixels, 2)) /screenSize;
    std::cout << "ÏñËØÃÜ¶È£¨PPI£©: " << ppi << std::endl;
    return 0;
 } 
