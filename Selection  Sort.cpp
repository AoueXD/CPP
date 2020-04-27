#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	srand(time(0));
	
	int len = 10;
	int arr[len];
	int key, i, j, temp;
	
	for(int i = 0; i < len; i++) {
		arr[i] = (rand() % 10) + 1;
		cout << arr[i];
		cout << "  ";
	}
	
	for(int i = 0; i < len - 1; i++) {
		key = i;
		for(int j = i + 1; j < len; j++) 
			if(arr[j] < arr[key])
				key = j;
		temp = arr[key];
		arr[key] = arr[i];
		arr[i] = temp;	
	}
		
	cout << endl;
	for(i = 0; i < len; i++) {
		cout << arr[i];
		cout << "  ";
	}
	
	return 0;
}
