#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

void ArrOutput(double A[],int size);

using namespace std;

int main(){
	srand(time(0));
	int i;
	double A_arr[30], B_arr[30];
	
	for(i=0; i<30; i++){
		A_arr[i] = (rand()%100);
		B_arr[i] = (rand()%100);
	}
	cout << "*****	A_array	*****" << endl;
	ArrOutput(A_arr, sizeof(A_arr)/8);
	cout << "*****	B_array	*****" << endl;
	ArrOutput(B_arr, sizeof(B_arr)/8);
	
	return 0;
} 
void ArrOutput(double A[],int size){
	int i;
	for(i=0;i<size;i++){
		cout << setw(5) << setprecision(4) << A[i] << "	"; //setprecision是控制小數點 而且會四捨五入 ;
		//<< fixed << setprecision(2) 3.14 = 3.14 
		if(i%1==9) 
			cout << endl;
	}
	cout << endl;
}

