#include<iostream>
#include<limits.h>
using namespace std;

int main(){

	int arr[] = {2,4,6,1,3,7,9,12,56,43,21,990};
	int size = 12;
	//initialse the maxi variable with the 
	//minimum possible integer value
	int maxi = INT_MIN;	
	int mini = INT_MAX;

	for(int i=0; i<size; i++) {
		if(arr[i] > maxi) {
			//found a number gretaer than maxi, update maxi
			maxi = arr[i] ;
		}
	}

	cout << "maximum number is " << maxi  << endl;
}