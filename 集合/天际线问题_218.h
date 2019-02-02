//
// Created by xiao on 19-2-2.
//

#ifndef LEETCODE_天际线问题_218_H
#define LEETCODE_天际线问题_218_H

#include <utility>
#include <vector>
#include <set>

using namespace std;
class 天际线问题_218 {
public:
    vector<pair<int, int>> getSkyline(vector<vector<int>>& buildings) {
        if (buildings.empty()){
            return {};
        }
        multiset<pair<int,int>> set;
        vector<pair<int,int>> ans;
        for(auto val:buildings){
            set.insert(make_pair(val[0],-val[2]));
            set.insert(make_pair(val[1],val[2]));
        }
        multiset<int> height{0};
        int maxVal=0;
        for(auto val:set){
            if (val.second<0){
                height.insert(-val.second);
            } else{
                height.erase(height.find(val.second));
            }
            if (*height.rbegin()!=maxVal){
                ans.emplace_back(val.first,*height.rbegin());
            }
            maxVal=*height.rbegin();
        }
        return ans;
    }
};


#endif //LEETCODE_天际线问题_218_H
