/*
1. �q�Ĥ@�Ӥ����}�l�A�Ӥ����i�H�{���w�g�Q�Ƨ�
2.���X�U�@�Ӥ����A�b�w�g�ƧǪ������ǦC���q��V�e���y
3.�p�G�Ӥ����]�w�Ƨǡ^�j��s�����A�N�Ӥ�������U�@��m
4.���ƨB�J3�A������w�ƧǪ������p��Ϊ̵���s��������m
5.�N�s�������J��Ӧ�m��
6.���ƨB�J2~5
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

