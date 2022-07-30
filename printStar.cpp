#include <iostream>

int main()
{

    int rows;
    std::cout << "Enter Row Numper : " << std::endl;
    std::cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (rows - i); j++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = 1; i <= (rows - 1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= 2 * (rows - i) - 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
