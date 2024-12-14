#include<bits/stdc++.h>
using namespace std;


template <class T>
class Matrix{
private:
    T **m;
    int row;
    int column;
public:
    Matrix(){
        row=4;
        column=5;
        m= new T*[row];
        for(int i=0;i<row;i++){
            m[i]=new T[column];
        }
    }

    Matrix(int row, int column){
        this->row=row;
        this->column=column;
        m= new T*[row];
        for(int i=0;i<row;i++){
            m[i]=new T[column];
        }

    }


void printM(){
    for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cout<<m[i][j]<<" ";
    }
    cout<<"\n";
}

}



};



int main(){
    srand(time(0));


Matrix<int> *m1= new Matrix<int>();
m1->printM();
cout<<"\n";
Matrix<double> *m2= new Matrix<double>(10,20);
m2->printM();

return 0;
}
