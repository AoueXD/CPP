#include <iostream>
using namespace std;

int fib(int n);

int main() {

	cout << "fib(0) = " << fib(0) << endl;
	cout << "fib(1) = " << fib(1) << endl;
	cout << "fib(2) = " << fib(2) << endl;
	cout << "fib(3) = " << fib(3) << endl;
	cout << "fib(4) = " << fib(4) << endl;
	cout << "fib(5) = " << fib(5) << endl;
	cout << "fib(6) = " << fib(6) << endl;	
	
	system("pause");
	return 0;
}


int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (fib(n - 1) + fib(n - 2));
}
