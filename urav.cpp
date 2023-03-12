#include <iostream>
#include <math.h>

double deskriminant(double a, double b, double c)
{
    return (b*b-4*a*c);
}

int main ()
{
    std::cout << "vvedite a = " ;
    double a;
    std::cin >> a ; 
    std::cout << std::endl;

    std::cout << "vvedite b = " ;
    double b;
    std::cin >> b; 
    std::cout << std::endl;

    std::cout << "vvedite c = " ;
    double c;
    std::cin >> c;
    std::cout << std::endl;

    double d = deskriminant (a, b, c);

    if (d < 0) std::cout << "Resheniya net" << std::endl;
    else  
    if (d == 0) std::cout << "x = " << -b/2*a << std::endl;
    else
    std::cout << "x1 = " << (-b+sqrt(d))/2*a << "   x2 = " << (-b-sqrt(d))/2*a << std::endl;
}