#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));

	int size[109][1][2];
	int i, j;
	int arr[10];


	cout << sizeof(size);
	//全部維度 * 資料型態
	cout << endl << endl;
	cout << sizeof(*size);
	//第二維之後 * 資料型態大小 
	cout << endl;

	return 0;

}
