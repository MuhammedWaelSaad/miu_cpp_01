#include <iostream>

int main()
{
int x;
std::cout << "Enter numbers: " << std::endl;
std::cin >> x;

if (x <= 5 || x > 15 )
    {
        std::cout << " Accepted number " << std::endl;
    }
else
{
    std::cout << "Invalid number" << std:: endl;
}
    return 0;
}
