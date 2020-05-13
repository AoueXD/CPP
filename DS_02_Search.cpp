#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void OutPut(int size, string a[]) {
	for(int i = 0; i < size; i++)
		cout << a[i] << endl;
}
void insertion_sort(int size, string a[]); //用插入排序
void Linear_Search(string a[], string key, int size);
void Recursion_Binary_Search(string a[], string key, const int left, const int right); //地回 
void Iterative_Binary_Search(string a[], string key, int size);//蝶帶 

int main(){
	srand(time(0));
	int pos, i = 0, size[5] = {5000, 10000, 15000, 20000, 30000};
	double start, end;
	char mode;
	string b = "abcdefghijklmnopqrstuvwxyz", d = "abcdef", cc = "abcdef";
	string key = "abcdef";
	//string e[size];
	string *e;
	string m = "rli";
	
	cout << "Datasize = {10000, 50000, 100000, 150000, 200000}\n";
	cout << endl;
	cout << "-----------------------------\n";
	cout << "r = Recursion_Binary_Search\n";
	cout << "l = Linear_Search\n";
	cout << "i = Iterative_Binary_Search\n";
	cout << "-----------------------------\n";
	

	for(int s = 0; s < 5; s++){
		cout << "Current size is : " << size[s] << endl;
		
		for(int mm = 0; mm < 3; mm++){
			mode = m[mm];
			
			cout << "Corrent mode is : " << mode << endl;
			e = new string [size[s]];
		
			for(i = 0; i < size[s]; i++) {
				for(int j = 0; j < 6; j++)
					d[j] = b[(rand () % 26)];//在26個英文字元中隨機取一個 
						e[i] = d;
				//cout << e[i] << endl;
			}
				
			insertion_sort(size[s], e);	
			
			cout << endl;
			cout << "\nAfter creater and sorting----Begin search : \n";
			start = clock();
			switch(mode) {
				case 'r':
					for(int i = 0; i < size[s]; i++) {
						for(int j = 0; j < 6; j++)
							cc[j] = b[(rand () % 26)];//在26個英文字元中隨機取一個 
						key = cc;
						Recursion_Binary_Search(e, key, 0, size[s] - 1);
					}
					break;
				case 'l':
					for(int i = 0; i < size[s]; i++) {
						for(int j = 0; j < 6; j++)
							cc[j] = b[(rand () % 26)];//在26個英文字元中隨機取一個 
						key = cc;
					Linear_Search(e, key, size[s]);
					}
					break;
				case 'i':
					for(int i = 0; i < size[s]; i++) {
						for(int j = 0; j < 6; j++)
							cc[j] = b[(rand () % 26)];//在26個英文字元中隨機取一個 
						key = cc;
					Iterative_Binary_Search(e, key, size[s]);
					}
					break;
			}
			
			end = clock();
			cout << endl; 
			cout << mode <<  "\n	Cost " << (end - start) / CLOCKS_PER_SEC << " sec.";
			cout << endl;
			delete []e;// OP 
		}		
		cout << endl << endl << "------------" << endl << endl;
	}
	
	return 0;
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

void Linear_Search(string a[], string key, int size) {
	int temp;
	for(int i = 0; i < size; i++) {
		if(a[i] == key) {
			cout << "在第 " << i << " 個找到 ";
			break;
		}
			temp++;
	}
	
	/*if(temp == size)
		cout << "No found...";*/
}

void Recursion_Binary_Search (string a[], string key, const int left, const int right) {
	if (left <= right) {
	    int middle = (left + right)/2;
	    if (key < a[middle])
	      return Recursion_Binary_Search(a, key, left, middle - 1);
	    else if (key > a[middle])
	      return Recursion_Binary_Search(a, key, middle + 1, right);
	    else cout  << "在第 " << middle << " 個找到 ";
	}
	/*else
		return;*/
}

void Iterative_Binary_Search(string a[], string key, int size) {
	int left = 0, right = size - 1; 
	bool YoN = false;
	
	while(left <= right) { 
	    int middle = (left + right)/2;
   			if (key < a[middle]) 
			   right = middle - 1;
    		else if 
				(key > a[middle]) left = middle + 1;
    		else {
				cout  << "在第 " << middle << " 個找到 ";
				YoN = true;	//find the key
				break;
			}
	}// end of while
	/*if(YoN == false)
		cout << "No found...";*/ 
}
