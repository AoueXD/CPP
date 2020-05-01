//  ¸ê¤u¤GB 10603044a ±ä®m¸Û

/*
1.C++¼¶¼g
2.insertion sort
3.selection sort
4.bubble sort
5.¸ê®Æ¶q100¸U¡A200¸U¡A400¸U¡A800¸U¡A1600¸Uµ§
6. ¨Cµ§¸ê®Æ¬°6­Ó­^¤å¦r¥ÀÃÑ§O¦r
7. ¤ß±o³ø§i¤Î®Ä¯à¤ÀªR¹Ïªí
*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;

void RandGenerated(int a[], int size);
void InsertionSort(int a[], int size);
void SelectionSort(int a[], int size);
void BubbleSort(int a[], int size);
void outputt(int a[], int size);

int main()
{
	srand(time(0));
	
	int datasize, a[datasize], num = 0, i, mode;
	
	char A[80];
	
	
	cout << "datasize = ";
	cin >> datasize;
	
	a[0] = rand () % 15;
	RandGenerated(a, datasize);
		
	cout << endl;
	cout << "insertion sort = 1\n" << "selection sort = 2\n" << "bubble sort = 3\n";
	cin >> mode;
	cout << endl;
	
	
	for(int z = 0; z < datasize; z++) 
		A[z] = A[z -1] + (rand() % 2);
		
	
	switch(mode) {
		case 1:
			InsertionSort(a, datasize);
			outputt(a, datasize);
			break;
		case 2:
			SelectionSort(a, datasize);
			outputt(a, datasize);
			break;
		case 3:
			BubbleSort(a, datasize);
			outputt(a, datasize);
			break;
			
	}
	
	return 0;
}

void RandGenerated(int a[], int size) {
	for(int i = 0; i < size; i++) 
		a[i] = a[i-1] + rand () % 15;
}

void InsertionSort(int a[], int size) {
	
	for(int i = 0; i < size; i++){
		//insert a[i] into [0:i-1]
		int sum = a[i];
		for(int j = i - 1; j >= 0 && sum < a[j]; j--)//­Ë¹L¨Ó ­««á­±¶}©l°µ
			a[j + 1] = a[j];
		a[j + 1] = sum;
	}
}

void SelectionSort(int a[], int size) {
 // sort the n integers a[0]~a[nƒ{1] into nondecreasing order 
    for ( int i = 0; i < size; i++) { 
        int j = i; // find the smallest in a[i] to a[nƒ{1]
        for (int k = i+1; k < size; k++) 
            if (a[k] < a[j]) j = k;
        // swap(a[i], a[j]);
        int temp = a[i]; 
		a[i] = a[j]; 
		a[j] = temp; 
    } 
}

void BubbleSort(int a[], int size) {
	for (int j = size - 1; j > 0; --j){
        for (int i = 0; i < j; ++i)
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
	}
}

void outputt(int a[], int size) {
	for(int i = 0; i < size; i++) {
		cout << "a[" << setw(2) << i << "] = " << setw(2) << a[i] << "	";
		if((i + 1) % 5 == 0)
			cout << endl;
	}
}
