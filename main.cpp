#include <iostream>
#include <malloc.h>
#include <cstdio>
#include <map>
#include <hash_map>
#include <unordered_map>
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
    return 0;
}