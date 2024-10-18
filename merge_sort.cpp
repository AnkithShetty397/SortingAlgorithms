#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& a,int l,int m,int r){
    int i=l,j=m+1,x=0;
    vector<int> b(r-l+1);

    while(i<=m && j<=r){
        if(a[i]>a[j])
            b[x++]=a[j++];
        else
            b[x++]=a[i++];
    }

    while(i<=m) b[x++]=a[i++];
    while(j<=r) b[x++]=a[j++];

    for(i=0,j=l;i<(r-l+1);i++,j++) a[j]=b[i];
}

void mergesort(vector<int>& a,int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
    vector<int> a={5,3,4,6,7,1};
    mergesort(a,0,a.size()-1);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
