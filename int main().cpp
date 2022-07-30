#include <iostream>

int main()
{
    int x;
    std::cout << "Enter numbers: " << std::endl;
    std::cin >> x;

    if (x % 2 == 0)
    {
        std::cout << " number is even" << std::endl;
    }
    else
    {
        std::cout << "number is odd" << std::endl;
    }
    return 0;
}
