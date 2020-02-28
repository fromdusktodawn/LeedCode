/*************************************************************************
	> File Name: 8.Leetcode206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时21分13秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p = head, *q;
    head = NULL;
    while (p) {
        q = p->next;
        p->next = head;
        head = p;
        p = q;
    }
    return head;
}
