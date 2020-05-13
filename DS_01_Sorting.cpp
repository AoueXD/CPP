#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void OutPut(int size, string a[]) {
	for(int i = 0; i < size; i++)
		cout << a[i] << endl;
}
void selection_sort(int size, string a[]);
void insertion_sort(int size, string a[]);
void bubble_sort(int size, string a[]);

int main(){
	srand(time(0));
	int pos, size;
	double start, end;
	char mode;
	string b = "abcdefghijklmnopqrstuvwxyz", d = "abcdef";
	
	cout << "Datasize = ";
	cin >> size;
	string *e = new string [size];
	
	//int len = (int) sizeof(e) / sizeof(*e);
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < 6; j++)
			d[j] = b[(rand () % 26)];//在26個英文字園中隨機取一個 
				e[i] = d;
		//cout << e[i] << endl;
	}
	
	cout << endl;
	cout << "s = selection sort\n";
	cout << "i = insertion sort\n";
	cout << "b = bubble sort\n";
	cout << "Whitch Mode : \n";
	
	while(cin >> mode) {
		start=clock();
		switch(mode) {
			case 's':
				selection_sort(size, e);
				break;
			case 'i':
				insertion_sort(size, e);
				break;
			case 'b':
				bubble_sort(size, e);
				break;
		}
		cout << endl;
	
		end = clock();
		cout << "Cost " << (end - start) / CLOCKS_PER_SEC << " sec.";
		cout << endl << endl;
	}

	return 0;
}
void selection_sort(int size, string a[]) {
	string temp = "abcdef";
	
	for(int i = 0; i < size; i++) {
		int pos = i;
		for(int j = i + 1; j < size; j++)
			if(a[j] < a[pos])
				pos = j;
			temp = a[i];
			a[i] = a[pos];
			a[pos] = temp;
	}
	//OutPut(size, a);
}

void insertion_sort(int size, string a[]) {
	string temp = "abcdef";
	
	for(int i = 1; i < size; i++){
  		temp = a[i];
   		int j;
   		for (j = i - 1; j >= 0 && temp < a[j]; j--)
       		a[j + 1] = a[j];
   		a[j + 1] = temp;
	}
	//OutPut(size, a);
}

void bubble_sort(int size, string a[]) {
	for(int i = 0; i < size - 1; i++) 
		for(int j = 0; j < size - 1 - i; j++) 
			if(a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
	//OutPut(size, a);
}
