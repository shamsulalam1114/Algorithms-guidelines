#include<bits/stdc++.h>
using namespace std;

int main(){

queue<string> st;

st.push("Richard");
st.push("Aaron");
st.push("Karim");
st.push("Jasim");

while(!st.empty()){
    cout<<st.front()<<endl;
    st.pop();
}

cout<<st.size()<<endl;


return 0;
}

