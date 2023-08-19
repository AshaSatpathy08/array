#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr{1,3,4,7,5};
    vector<int> brr{3,5,10,12};

    vector<int> ans;

    //outer loop on arr
    for(int i = 0; i<arr.size();i++){
        int element = arr[i];
        //for every element, run loop brr
        for(int j = 0; j < brr.size(); j++){
            if(element == brr[j]){
                // mark
                brr[j] == -1;
                ans.push_back(element);
            }
        }
    }
    // printing
    for(auto value: ans){
        cout << value << " ";
    }
    cout << endl;
}