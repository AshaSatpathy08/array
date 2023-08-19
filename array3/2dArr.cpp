#include<iostream>
using namespace std;

int main(){
//     int arr[3][3];
//     int brr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
        
// };


// //row wise access
// //outerloop
// for(int i = 0; i < 3; i++){
//     //for every row, we need to print value in each col
//     for(int j = 0; j < 3; j++){
//         cout << brr[i][j] << " ";
//     }
//     cout << endl;
// }
// cout << "printing col" << endl;
// //column
// for(int i = 0; i < 3; i++){
//     //for every row, we need to print value in each col
//     for(int j = 0; j < 3; j++){
//         cout << brr[j][i]<< " ";
//     }
//     cout << endl;
// }



int arr[3][3];
int rows = 3;
int cols = 3;

//input
// row wise input
// for(int i = 0; i < rows; i++){
//     for(int j = 0; j < cols; j++){
//         cin >> arr[i][j];
//     }
// }


// cout << "Printing row wise " << endl;
// for(int i = 0; i < rows; i++){
//     for(int j = 0; j < cols; j++){
//     cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }

// col wise input
for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        cin >> arr[j][i];
    }
}


cout << "Printing row wise " << endl;
for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
    cout << arr[i][j] << " ";
    }
    cout << endl;
}

}