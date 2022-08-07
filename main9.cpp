

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num1, x,num2,answer;
	do
	{ 
	srand(time(0));
	num1= rand() % 151;
	num2 = rand() % 151;
	answer = num1 - num2;
	if (num1 < num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	cout << num1 << " - " << num2 << "=\n";
	
	
	
		cout << "Enter the answer : ";
		cin >> x;
		 

		if (x == answer)
			cout << "correct!\n";
		
		else
			cout << "wrong \n";
	} while (x != answer);

	return 0;
}
