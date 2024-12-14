#include<bits/stdc++.h>
using namespace std;

void mergeSort(int *a, int left, int right){
    if(left<right){
        int mid = (left+right)/2;
        mergeSort(a,left,mid);
        mergeSort(a,mid+1,right);
        Merge(a,left,mid,right);
    }

}

int main(){
int a[6]={20,10,5,2,21,1};
mergeSort(a,0,5);


return 0;
}
