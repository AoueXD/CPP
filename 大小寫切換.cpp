#include <iostream>
#include <cstdlib>
#include <cctype>

 
using namespace std;

//int tolower(int C);

int main() {

	int i = 0;
	char a[20];
	
	cout << "input a string";
	cin.getline(a, 20);
	
	while(a[i] != '\0') 
	{
		if(islower(a[i]))
			a[i] = toupper(a[i]);
		else if(isupper(a[i]))
			a[i] = (tolower(a[i]));
		i++;
	}
	
	cout << endl << a << endl;
	
	system("pause");
	
	return 0;
}

