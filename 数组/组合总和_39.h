//
// Created by xiao on 19-2-3.
//

#ifndef LEETCODE_组合总和_39_H
#define LEETCODE_组合总和_39_H

#include <algorithm>
#include <vector>
using namespace std;

class leetcode_39 {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int >> lists;
        findList(lists,vector<int>(),candidates,target,0);
        return lists;
    }
    void findList(vector<vector<int >> &lists,vector<int> list,vector<int > nums,int target,int index){
        if (target<0){
            return;
        }
        if (target==0){
            vector<int > &temp(list);
            lists.push_back(temp);
        }
        for (int i = index; i <lists.size()&&nums[i]<=target ; ++i) {
            vector<int> temp(list);
            temp.push_back(nums[i]);
            findList(lists,temp,nums,target-nums[i],i);
        }
    }

};


#endif //LEETCODE_组合总和_39_H
