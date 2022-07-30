#include <iostream>

int main()
{
int x;
std::cout << "Enter numbers: " << std::endl;
std::cin >> x;

if (x % 5 == 0 )
    {
        std::cout << " number is a multiple of 5" << std::endl;
    }
else
{
    std::cout << "number is not" << std:: endl;
}
    return 0;
}
