#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    priority_queue<int> ab;
    pq.push(1);
    pq.push(2);
    cout<<pq.top()<<endl;
    return 0;
}