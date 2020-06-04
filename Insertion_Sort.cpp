/*
1. 從第一個元素開始，該元素可以認為已經被排序
2.取出下一個元素，在已經排序的元素序列中從後向前掃描
3.如果該元素（已排序）大於新元素，將該元素移到下一位置
4.重複步驟3，直到找到已排序的元素小於或者等於新元素的位置
5.將新元素插入到該位置後
6.重複步驟2~5
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void CreateRandomArray(int arr[]);
void Insertion_Sort(int arr[], int length);

int main() {
	srand(time(0));
	
	int length[] = {10, 100, 5000, 10000, 20000, 30000};
	int arr[length[0]];
	int a[1] = {10};
	int len = sizeof(arr) / sizeof(arr[0]);
	int temp[10];
	
	
	for(int temp: arr) {
		arr[temp] = (rand() % 10) + 1;
		
		cout << arr[temp] << endl;
	}

	for(int i = 1; i < len; i++) {
		int key = arr[i];
		int j;
		for(j = i - 1; j >= 0; j--) 
			if(arr[j] > key)
				arr[j + 1] = arr[j];
		arr[j + 1] = key;
	}
	
	
}

