#include <iostream>
using namespace std;
#include <map>

void travelMap(map<int, int> m){
    for(map<int,int>::iter it = m.begin();it!=m.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

void travelMapReverse(map<int, int> m){
    for(auto it = m.rbegin();it!=m.rend();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

void mapDemo(){
    map<int,int> map_int;
    for(int i =0;i<10;++i){
        map_int[i] = i*i;
    }
    
    cout<<"--------------------------------trave map ------------------------"<<endl;
    travelMap(map_int);
    cout<<"----------------------------travel map reverse ----------------------"<<endl;
    travelMapReverse(map_int);
}
