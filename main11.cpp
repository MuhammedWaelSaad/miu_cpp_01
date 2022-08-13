#include <iostream>
using namespace std;
float kelvin(float c)
{
    return c + 273.15;
}
float fahrenheit(float c)
{
    return (9 / 5) * c + 32;
}
int main()
{
    float kel, cel, fahr;
    cout << "Input the temperature in Celsius :";
    cin >> cel;
    kel = kelvin(cel);
    fahr = fahrenheit(cel);
    cout << "the tenperatuer of kelvin:" << kel << endl;
    cout << "the tenperatuer of fahrenheit:" << fahr << endl;
    cout << "the tenperatuer of Celsius:" << cel << endl;
    return 0;
}
