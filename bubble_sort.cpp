#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
}

int main(){
    vector<int> arr = {5,3,2,6,7,4,9};
    bubbleSort(arr);
    for(int a:arr)
        cout<<a<<" ";
    cout<<endl;
    return 0;
}
