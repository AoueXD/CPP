//���l���� 
//insertion sort
//�N�����P�� �b��W�ƧǪ�

/*85126
  58126
  15826
  12586
  12568*/ 

//8, �]�N�O�Ĥ@�ӼơA�O���Ӹ�ĤG�ӼƤ�����A���ʪ��O�ĤG�ӼơA�]�N�O���j��n�q1�}�l�A�Ӥ��O0;
 
#include <iostream>

using namespace std;

void Insertion_Sort(int arr[], int len){
	for(int i = 1; i <= len; i++){
		int key = arr[i];//�ثe���ӭn�ƧǪ��Ʀr;
		int j = i - 1;
		while((j >= 0) && (key < arr[j])){
				arr[j + 1] = arr[j];
				j--;
		}
		arr[j+1] = key; 
	}
//	for(int i = 1; i <= len; i++)	
		//cout << arr[i] << endl;
} 
int main() {
	
	
	int pos[5];
	int n = 5;
	for(int i = 0; i < 5; i++) {
		cin >> pos[i];
	}
		
	Insertion_Sort(pos, n);
	
	
	for(int i = 0; i < n; i++)	
		cout << pos[i] << endl;
	
	return 0;
}
