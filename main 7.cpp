#include <iostream>

int main()
{
char x;
std::cout << "Enter: " << std::endl;
std::cin >> x;

switch (x)
    case 'b':
    
        std::cout << " is b " << std::endl;
        break;
    
    case 'B':

    std::cout << "This character is not b" << std:: endl;
    break;
    
    default:
           std::cout << "not b" << std::endl;
           break;

         return 0;
}
