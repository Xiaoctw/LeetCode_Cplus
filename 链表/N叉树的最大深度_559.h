//
// Created by xiao on 19-1-27.
//

#ifndef LEETCODE_N叉树的最大深度_559_H
#define LEETCODE_N叉树的最大深度_559_H

#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;



class Node{
public:
    int val;
    vector<Node*> children;

    Node(){}

    Node(int val,  vector<Node *> &children) : val(val), children(children) {}
};

class N叉树的最大深度_559 {
public:
    int maxDepth(Node* root) {
        if (root==nullptr){
            return 0;
        }
        int maxVal=0;
        for (auto node : root->children) {
            int x=maxDepth(node);
            if (x>maxVal){
                maxVal=x;
            }
        }
        return maxVal+1;
    }
};


#endif //LEETCODE_N叉树的最大深度_559_H
