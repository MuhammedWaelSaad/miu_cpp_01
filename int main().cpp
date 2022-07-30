#include <iostream>


using namespace std;

 
int main()
{
    int x;
    cout << "Enter numbers: " << endl;
    cin >> x;

    if (x % 2 == 0)
    {
        cout << " number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }
    return 0;
}
