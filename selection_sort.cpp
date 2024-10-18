#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int minIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx])
                minIdx = j;
        }
        swap(arr[minIdx],arr[i]);
    }
}

int main(){
    vector<int> arr={6,7,2,4,5,9};
    selectionSort(arr);
    for(int a:arr)
        cout<<a<<" ";
    cout<<endl;
    return 0;
}
