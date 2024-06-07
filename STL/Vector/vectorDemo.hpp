#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
using namespace std;
class comp{
    public:
    bool operator()(int a,int b){
        return a>b;
    }
};

void vectorSort(int n){

    //随机数
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1,100);

    vector<int> v1(n);
    for(int i =0;i<n;++i){
        v1.push_back(distrib(gen));
    }
    //正向排序
    sort(v1.begin(),v1.end());
    for_each(v1.begin(),v1.end(),[](int a){cout<<a<<" ";});

    //反向排序
    sort(v1.begin(),v1.end(),comp());
    for_each(v1.begin(),v1.end(),[](int a){cout<<a<<" ";});

}