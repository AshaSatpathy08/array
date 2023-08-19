//union of 2array

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int arr[] = {1,3,5,7,9};
    int sizea = 5;
    int sizeb = 4;
    int brr[] = {2,4,6,8};

    vector<int>ans;
    //push all element of vector arr
    for(int i = 0; i < sizea; i++){
        ans.push_back(arr[i]);
    }
    //push all element of vector brr
    for(int i = 0; i < sizeb; i++){
        ans.push_back(brr[i]);
    }

    //printing
    cout << "Printig ans array" << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " " ;
    }
    
}