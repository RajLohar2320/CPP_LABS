#include<iostream>
using namespace std;

int main(){
	int arr[5];
	int* ptr[5];
	int i;
	cout << "Enter 5 nos." << endl;
	for(i=0;i<5;i++){
		cin >> arr[i];
	}
	for(i=0;i<5;i++){
		ptr[i] = &arr[i];
	}
	cout << "The values are : " <<endl;
	for(i=0;i<5;i++){
		cout << arr[i] <<endl;
	}
	cout << "Array of Pointers : " << endl;
	for(i=0;i<5;i++){
		cout << ptr[i] << endl;
	}
return 0;
}
