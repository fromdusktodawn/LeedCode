/*************************************************************************
	> File Name: 10.Leetcode237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时22分08秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *p = node;
    *node = *(node->next);
    free(p);
}
