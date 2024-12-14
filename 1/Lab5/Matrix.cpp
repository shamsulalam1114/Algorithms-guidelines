#include<bits/stdc++.h>
using namespace std;

void printM(int **p, int row, int column){
    for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cout<<p[i][j]<<" ";
    }
    cout<<"\n";
}

}

int **create(int row, int column){

    int **m= new int*[row];
    for(int i=0;i<row;i++){
        m[i]=new int[column];
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            m[i][j]=rand()%10;
        }
    }

    return m;
}

int **sumMatrix(int **a, int **b, int row, int column){

    int **c= new int*[row];
    for(int i=0;i<row;i++){
        c[i]=new int[column];
    }

     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    return c;
}

int **transposeM(int **p, int row, int column ){

    int **k= new int*[column];
    for(int i=0;i<column;i++){
        k[i]=new int[row];
    }

     for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            k[i][j]=p[j][i];
        }
    }
    return k;
}


int main(){
    srand(time(0));



    int **m1=create(4,5);
    printM(m1,4,5);
    cout<<"\n";


    int **m2=create(4,5);
    printM(m2,4,5);
    cout<<"\n";


    int **m3=sumMatrix(m1,m2,4,5);
    printM(m3,4,5);
    cout<<"\n";

    int **m4=transposeM(m3,4,5);
    printM(m4,5,4);
    cout<<"\n";



return 0;
}
