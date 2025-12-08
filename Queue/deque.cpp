#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    cout<<"Front element: "<<dq.front()<<endl;
    cout<<"Back element: "<<dq.back()<<endl;

    dq.push_front(5);
    dq.pop_back();
    cout<<"Front element: "<<dq.front()<<endl;
    cout<<"Back element: "<<dq.back()<<endl;
    return 0;
}