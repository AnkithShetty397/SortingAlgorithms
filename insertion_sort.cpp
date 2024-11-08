#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    vector<int> arr={5,3,4,2,7,6};
    insertionSort(arr);
    for(int a:arr)
        cout<<a<<" ";
    cout<<endl;
    return 0;
}
