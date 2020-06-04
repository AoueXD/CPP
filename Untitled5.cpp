#include <iostream>

using namespace std;

int main () {
	
	int len;
	
	while(cin >> len) {
		if(len == 0)
			break;
			
		int a[len];
		for(int i = 0; i < len; i++) {
			cin >> a[i];
			if(a[i] >= 100 || a[i] < 1)
				break;
		}
		for(int i = 1; i < len; i++) {
			int key = a[i];
			int j = i - 1;
			while((j >= 0) && (key < a[j])) {
				a[j + 1] = a[j];
				j--;
			}
			a[j + 1] = key;
		}
		for(int i = 0; i  < len; i++) {
			cout << a[i] << " ";
		}
	}
	
}
