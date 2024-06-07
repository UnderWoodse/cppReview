#include <iostream>
using namespace std;
#include <queue>

void priorityQueueDemo(){
    priority_queue<int,vector<int>,greater<int>> q1;
    for(int i =0;i<20;++i){
        q1.push(i);
    }

    cout<<"q1.front = "<<q1.top()<<endl;
    cout<<"q1.size = "<<q1.size()<<endl;;
    while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
    cout<<endl;

    priority_queue<pair<int, int> >q;
	q.push({7, 8});
	q.push({7, 9});
	q.push(make_pair(8, 7));
    while(!q.empty()) {
        cout << q.top().first << " " << q.top().second << "\n";
        q.pop();
    }
    cout<<"-------------priority queue demo end ----------------"<<endl;
}