//pow function c++ - Recursive Solution
//Abhishek Kumar - @abhishekkumar1775

#include<iostream>
using namespace std;

int pow(int m, int n)
{
	if (n < 1) return 1;
	else return m*pow(m, n - 1);
}

int main()
{
	int n{ 0 }, m{ 0 }	;
	cout << "Enter m and n " << endl;
	cin >> m >> n;
	cout << "pow(m,n) is " << pow(m, n);
	return 0;
	
}