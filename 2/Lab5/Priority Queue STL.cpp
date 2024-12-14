#include<bits/stdc++.h>
using namespace std;

struct cmp
{
    bool operator()(const int & a, const int & b)
    {
        return a>b;
    }
};

int main(){
priority_queue<int,vector<int>,cmp >st;
//priority_queue<int> st;

st.push(1000);
st.push(20);
st.push(100);
st.push(12);

while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}



return 0;
}

