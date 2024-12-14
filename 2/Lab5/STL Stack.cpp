#include<bits/stdc++.h>
#include <stack>
using namespace std;

int main(){

stack<string> st;

st.push("Richard");
st.push("Aaron");
st.push("Karim");
st.push("Jasim");

while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}

return 0;
}

