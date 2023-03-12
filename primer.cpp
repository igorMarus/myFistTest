#include <iostream>
#include <cstdint>


int main()
{
    std::cout << "char\t\t" << sizeof(char) << "byte" << std::endl;
    std::cout << "int\t\t" << sizeof(int) << "byte" << std::endl;
    std::cout << "long\t\t" << sizeof(long) << "byte" << std::endl;
    std::cout << "long long\t" << sizeof(long long) << "byte" << std::endl;
    std::cout << "short\t\t" << sizeof(short) << "byte" << std::endl;

    std::int64_t b;
    std::cout << "b\t\t" << sizeof(b) << "byte" << std::endl;
    std::cout << "char\t\t" << sizeof(char) << "byte" << std::endl;
}