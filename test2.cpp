#include <iostream>
#include <iomanip>
#include <cstdint>

int main()

{

long double d{1.11111111};

std::cout << d << std::endl;

std::cout << std::setprecision(20);

std::cout << d  << std::endl;
std::cout << sizeof(d) << " byte" << std::endl;

int8_t c(0);

for (int i = 0; i<256; ++i)
{
c = i;
std::cout << c ;
}


}