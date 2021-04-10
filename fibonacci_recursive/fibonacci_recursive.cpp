#include<iostream>
#include<math.h>
using namespace std;

int fac(int n) {
	int f = 1;
	for (int x = 1; x <= n; x++) {
		f = f * x;
	}
	return f;
}

double fibo(int x)
{
	double f;
	static int n{ x };
	if (n > 0)
	{
		n--;
		f = fibo(x);
		n++;
		return f + (pow(x, n)/fac(n));
	}
	else 
	{
		return 1;
	}
}

int main() {
	int x;
	cin >> x;
	cout << fibo(x);
	return 0;
}