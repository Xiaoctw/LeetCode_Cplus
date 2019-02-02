//
// Created by xiao on 19-1-26.
//

#ifndef LEETCODE_移除链表元素_27_H
#define LEETCODE_移除链表元素_27_H

#include <malloc.h>
#include <cstdio>
#include <cstdlib>
struct ListNode {
         int val;
         ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
     };
/**
 * 移除链表元素
 */
class leetcode_27 {
    ListNode* removeElements(ListNode* head, int val) {
        auto * newHead=new ListNode(0);
        newHead->next=head;
        ListNode* pre=newHead;
        ListNode* p=head;
        while (p!=nullptr){
            if (p->val==val){
                pre->next=p->next;
                p=p->next;
            } else{
            p=p->next;
            pre=pre->next;
            }
        }
        return newHead->next;
    }
};


#endif //LEETCODE_移除链表元素_27_H
