#include<iostream>
using namespace std;


bool findKey(int arr[][3],int rows, int cols, int key){
    for(int i = 0; i < rows; i++ ){
        for(int j = 0; j < cols; j++)
            if(arr[i][j] == key){
                return true;
            
        }
    }
    // value is not present
    return false;


}

int main(){
 int arr[3][3];
int rows = 3;
int cols = 3;
for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        cin >> arr[i][j];
    }
}
   
int key = 1;
if( findKey(arr,3,3,40)){

 cout << " true";
}
else{
    
 cout << " false " ;
}
}