//Sum of 'n' natural numbers - Recursive Solution
//Abhishek Kumar - @abhishekkumar1775

#include<iostream>
using namespace std;

int sum(int n)
{
	if (n > 0)
	{
		return { sum(n - 1) + n };
	}

	else return n;
};

int main()
{
	int n{ 0 };
	cout << "Enter the integer upto which sum is  required" << endl;
	cin >> n;
	cout << "The sum is " << sum(n) << endl;
	return 0;
}
