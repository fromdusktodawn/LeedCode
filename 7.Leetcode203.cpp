/*************************************************************************
	> File Name: 7.Leetcode203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时20分48秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode ret;
    ret.next = head;
    struct ListNode *p = &ret, *q = head;
    while (q) {
        if (q->val != val) {
            p = q;
            q = q->next;
            continue;
        }
        p->next = q->next;
        free(q);
        q = p->next;
    }
    return ret.next;
}
