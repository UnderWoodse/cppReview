#include <iostream>
using namespace std;
#include <queue>
void queueDemo(){
    
    queue<int> q1;
    for(int i =0;i<20;++i){
        q1.push(i);
    }

    cout<<"q1.front = "<<q1.front()<<"q1.back = "<<" "<<q1.back()<<endl;
    cout<<"q1.size = "<<q1.size()<<endl;;
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    cout<<"------------------queue demo end ------------"<<endl;
}