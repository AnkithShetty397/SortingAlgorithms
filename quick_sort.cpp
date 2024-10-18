#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& a,int low,int high){
    int l=low+1;
    int r=high;
    int pivot=a[low];

    while(true){
        while(l<=high && a[l]<=pivot) l++;
        while(r>=low && a[r]>pivot) r--;

        if(l<r){
            swap(a[l],a[r]);
        }else{
            swap(a[low],a[r]);
            return r;
        }
    }
}
void quicksort(vector<int>& a,int low,int high){
    if(low<high){
        int p=partition(a,low,high);
        quicksort(a,low,p-1);
        quicksort(a,p+1,high);
    }
}

int main(){
    vector<int> a= {10,4,5,62,4,6};
    quicksort(a,0,a.size()-1);
    for(int num:a)
        cout<<num<<" ";
    cout<<endl;
    return 0;
}
