#include<iostream>
#include<limits.h>
using namespace std;

int main(){

	int arr[] = {3,5,8,6,9,15,20,0};
	int size = 8;
	int maxi = INT_MIN;	
	int mini = INT_MAX;

	for(int i=0; i<size; i++) {
		if(arr[i] < mini) {
			mini = arr[i] ;
		}
	}

	cout << "minimum number is " << mini  << endl;
}