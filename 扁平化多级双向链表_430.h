//
// Created by xiao on 19-1-24.
//

#ifndef LEETCODE_扁平化多级双向链表_430_H
#define LEETCODE_扁平化多级双向链表_430_H
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node()  {}

    Node(int val, Node *prev, Node *next, Node *child) : val(val), prev(prev), next(next), child(child) {}
};
class Solution{
public:
    Node* flatten(Node* head) {
        Node newHead;
        newHead.next=head;
        construct(head);
        return newHead.next;
    }
    Node* construct(Node* node){
        if(node== nullptr){
            return nullptr;
        }
        Node* nodeNext=node->next;
        node->next=construct(node->child);
        if(node->next!= nullptr){
            node->next->prev=node;
        }
        node->child= nullptr;
        Node* p=node;
        while (p->next!= nullptr){
            p=p->next;
        }
        p->next=construct(nodeNext);
        if(p->next!= nullptr){
            p->next->prev=p;
        }
        return node;
    }
};


#endif //LEETCODE_扁平化多级双向链表_430_H
