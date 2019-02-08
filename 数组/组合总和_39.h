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
        sort(candidates.begin(),candidates.end());//数组还是向量都可以进行排序
        vector<vector<int >> lists;
        findList(lists,vector<int>(),candidates,target,0);//这里不能传入nullptr,在子程序运行过程中会报错
        return lists;
    }
    void findList(vector<vector<int >> &lists,vector<int> list,vector<int > nums,int target,int index){
        if (target<0){
            return;
        }
        if (target==0){
            const vector<int > &temp(list);
            lists.push_back(temp);
        }
        for (int i = index; i <nums.size()&&nums[i]<=target ; ++i) {
            vector<int> temp(list);
            temp.push_back(nums[i]);
            findList(lists,temp,nums,target-nums[i],i);
        }
    }

};


#endif //LEETCODE_组合总和_39_H
