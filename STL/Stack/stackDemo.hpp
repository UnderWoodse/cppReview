#include <stack>
#include <iostream>
using namespace std;

void stackDemo(){
    stack<int> s1;

    for(int i = 0;i<10;++i){
        s1.push(i);
    }

    s1.pop();
    cout<<s1.top()<<endl;
    
    if(s1.empty()){
        cout<<"s1 empty"<<endl;
    }else{
        cout<<"s1 not empty"<<endl;
    }

    cout<<"s1.size = "<<s1.size()<<endl;
}