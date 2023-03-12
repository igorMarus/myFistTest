#include <iostream>
#include <bitset>

int main ()
{
std::cout << "enter number" << std::endl; 
int i;
std::cin >> i;  

std::bitset<4> bits(4);

bits.flip(1);

std::cout << bits << std::endl;


return 0 ;
}