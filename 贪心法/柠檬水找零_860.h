//
// Created by xiao on 19-2-8.
//

#ifndef LEETCODE_柠檬水找零_860_H
#define LEETCODE_柠檬水找零_860_H

#include <vector>
using namespace std;

class LeetCode_860 {
    bool lemonadeChange(vector<int>& bills) {
        //这段代码和java一模一样
        int five=0,ten=0;
        for (int bill:bills
                ) {
            if (bill==5){
                five++;
            }else if (bill==10){
                if (five==0) {
                    return false;
                }
                five--;
                ten++;
            }else {
                if(five>0&&ten>0){
                    five--;
                    ten--;
                }else if (five>=3){
                    five-=3;
                }else {
                    return false;
                }
            }
        }
        return true;
    }
};


#endif //LEETCODE_柠檬水找零_860_H
