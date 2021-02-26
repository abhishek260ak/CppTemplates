
//Sum of 'n' natural numbers - Recusive Solution
//Abhishek Kumar - @abhishekkumar1775

#include<iostream>
using namespace std;

int fac(int n)
{
	if (n < 1) return 1;
	else return n * fac(n - 1);
}

int main()
{
	cout << "Enter the number to find it's factorial" << endl;
	int n{ 0 };
	cin >> n;
	cout << "The factorial is " << fac(n) << endl;
	return 0;
}

