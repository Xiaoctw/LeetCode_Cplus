#include <iostream>
#include <malloc.h>
#include <cstdio>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <hash_map>
#include <unordered_map>
#include <random>
#include <algorithm>
#define N 40
using namespace std;

/**
 * vector
emplace <->  insert
emplace_back​  <-> ​push_back
set
emplcace <->  insert
map
emplace <->  insert
 * @return
 */
int main() {
   // std::cout << "Hello, World!" << std::endl;
   map<string,string> mapStudent;//带有顺序的字典
   //给出三种插入方式
   mapStudent.insert(pair<string,string>{"123","xiao"});
   mapStudent.insert(pair<string,string>{"012","han"});
   mapStudent.insert(pair<string,string>{"234","zhang"});
   mapStudent.emplace("567","xiao1");
   mapStudent["345"]="xiao";
   for (auto &iter : mapStudent) {
       cout<< iter.second<<endl;
   }
    unordered_map<string,string> mapStudent1;
    mapStudent1.insert(pair<string,string>{"123","xiao"});
    mapStudent1.insert(pair<string,string>{"012","han"});
    mapStudent1.insert(pair<string,string>{"234","zhang"});
    mapStudent1.emplace("567","xiao1");
    mapStudent1["345"]="xiao";
    auto *pair1=new pair<string,string>();
    auto pair2=(make_pair("Hello","World"));
    pair1->first="Hello";
    pair1->second="World!";
    for (auto &iter : mapStudent1) {
        cout<< iter.second<<endl;
    }
    cout<<pair1->first<<" ";
    cout<<pair1->second<<endl;
    cout<<"---------------------------"<<endl<<"lamdba表达式操作";
    cout<<[](double f){ return std::abs(f);}(-4.3);
    vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(4);
    a.push_back(-3);
    a.push_back(-12);
    a.push_back(2);
    a.push_back(3);
    a.push_back(-5);
    int A[N];
    for (int &i : A) {
        i =rand()%100-50;
    }

    sort(A,A+20);//排序前20个元素
    for (int j = 0; j < 20; ++j) {
        cout<<A[j]<<" ";
    }
    cout<<"\n----------"<<endl;
    sort(A,A+20,[](int a,int b)-> bool {
        return abs(a)<abs(b);
    });
    for (int j = 0; j < 20; ++j) {
        cout<<A[j]<<" ";
    }
    cout<<"\n----------"<<endl;
    for (int j = 20; j < N; ++j) {
        cout<<A[j]<<" ";
    }
    return 0;
}