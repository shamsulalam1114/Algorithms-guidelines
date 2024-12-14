

#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

/*
1. Selection vs Quick Sort
2. Insertion vs MergeSort
3. Bubble vs QuickSort


*/

void bubbleSort(int *p, int n){

for(int k=0;k<n;k++){
    for(int i=0;i<n-1-k;i++){
        if(p[i]>p[i+1]){
                swap(p[i],p[i+1]);
    }

    }
}
}

int Partition(int *p, int Start, int End){
    int pivot=p[End];
    int pindex = Start;
    for(int i=Start;i<End;i++){
        if(p[i]<pivot){
            swap(p[i],p[pindex]);
            pindex++;
        }
    }
    swap(p[pindex],p[End]);
    return pindex;

}


void QuickSort(int *p, int S, int E){
    if(S<=E){
        int pIndex = Partition(p,S,E);
        QuickSort(p,S,pIndex-1);
        QuickSort(p,pIndex+1,E);
    }

}
int main(){




    int n=100000;
    int *a= new int[n];

    ifstream fin("1000k.txt");

     for(int i=0;i<n;i++){
        fin>>a[i];
    }

    clock_t start, end1;

    start = clock();
    //QuickSort(a,0,n-1);
    bubbleSort(a,n);
    end1 = clock();

    // Calculating total time taken by the program.
    double time_taken = double(end1 - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    /*
    auto start = high_resolution_clock::now();
    QuickSort(a,0,n-1);
    //bubbleSort(a,n);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<seconds>(stop - start);
    cout << duration.count() << endl;

    */





return 0;
}

