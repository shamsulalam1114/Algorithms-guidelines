
#include<bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int credit;
};


struct compare
{
    bool operator()(const student & a, const student & b)
    {
        return a.name>b.name;
    }
};

int main()
{

    priority_queue<student,vector<student>,compare> pq;
    pq.push({"Richard",100});
    pq.push({"Aron",50});
    pq.push({"Karim",10});

    while(!pq.empty())
    {
        student value = pq.top();
        pq.pop();
        cout<<value.name<<" "<<value.credit<<endl;
    }

    return 0;
}
