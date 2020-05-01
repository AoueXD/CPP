//雙子殺手 
//insertion sort
//就像打牌時 在手上排序的

/*85126
  58126
  15826
  12586
  12568*/ 

//8, 也就是第一個數，是拿來跟第二個數比較的，移動的是第二個數，也就是說迴圈要從1開始，而不是0;
 
#include <iostream>

using namespace std;

void Insertion_Sort(int arr[], int len){
	for(int i = 1; i <= len; i++){
		int key = arr[i];//目前那個要排序的數字;
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
