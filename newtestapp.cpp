#include <iostream>

int main() {
double x,y;
std::cout << "Enter numbers: " << std::endl;
std::cin >> x >> y;

if (x > y)
    {
        std::cout << "first number is greater" << std::endl;
    }
else
{
    std::cout << "second number is greater" << std:: endl;
}
    return 0;
}

