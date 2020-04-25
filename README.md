# CPP
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
	int len = sizeof(arr) / sizeof(arr[0]);


}
