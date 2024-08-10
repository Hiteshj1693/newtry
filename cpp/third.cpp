#include<iostream>
#include<stack>
using namespace std;
int main(){
    vector<int> hj;
    hj.push_back(1);
    hj.push_back(2);
    for(int i=0;i<hj.size();i++){
        cout<<hj[i]<<"->";
    }
    cout<<endl;
    hj.pop_back();
    for(int i=0;i<hj.size();i++){
        cout<<hj[i]<<"->";
    }
    return 0;
}