//
// Created by xiao on 19-2-9.
//

#ifndef LEETCODE_和可被K整除的子数组_974_H
#define LEETCODE_和可被K整除的子数组_974_H

#include <vector>
#include <unordered_map>
using namespace std;
class LeetCode_974{
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int sum=0,count=0,len= static_cast<int>(A.size());
        int dp[len];
        unordered_map<int,int > map;
        map.insert({0,1});
        for (int i = 0; i < len; ++i) {
            sum+=A[i];
            dp[i]=sum%K;
            if (dp[i]<0){
                dp[i]=K+dp[i];
            }
            if (map.find(dp[i])==map.end()){
                map.insert({dp[i],0});
            }
            map[dp[i]]++;
        }
        for (auto pair:map){
            count+=pair.second*(pair.second-1)/2;
        }
        return count;
    }
};
#endif //LEETCODE_和可被K整除的子数组_974_H
