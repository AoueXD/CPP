//  資工二B 10603044a 曹峻誠

/*
1.C++撰寫
2.insertion sort
3.selection sort
4.bubble sort
5.資料量100萬，200萬，400萬，800萬，1600萬筆
6. 每筆資料為6個英文字母識別字
7. 心得報告及效能分析圖表
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
void BubbleSort(int arr[], int size);
void outputt(int a[], int size);

int main()
{
	
	srand(time(0));
	
	int datasize, num = 0, i, mode;
	
	char A[80];
	
	
	cout << "datasize = ";
	cin >> datasize;
	
	int *a = new int[datasize];
	
//	a[0] = rand () % 15;
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
	int i;
	
	for(i = 0; i < size; i++) {
		a[i] = rand () % 15;
		cout << a[i] << endl;
	}
}

void InsertionSort(int a[], int size) {
	
	for(int i = 1; i < size; i++){
		//insert a[i] into [0:i-1]
		int key = a[i];
		int j;
		for(j = i - 1; j >= 0 && key < a[j]; j--)//倒過來 重後面開始做
			a[j + 1] = a[j];
		a[j + 1] = key;
	}
}

void SelectionSort(int a[], int size) {
 // sort the n integers a[0]~a[n�{1] into nondecreasing order 
    for ( int i = 0; i < size; i++) { 
        int j = i; // find the smallest in a[i] to a[n�{1]
        for (int k = i+1; k < size; k++) 
            if (a[k] < a[j]) j = k;
        // swap(a[i], a[j]);
        int temp = a[i]; 
		a[i] = a[j]; 
		a[j] = temp; 
    } 
}

void BubbleSort(int arr[], int size) {
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
