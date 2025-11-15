# 题解1

```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }

    struct ListNode *cur = head, *p = head->next;
    while(p != NULL) {
        if(cur->val == p->val){
            cur->next = p->next;
        }
        else {
            cur = cur->next;
        }
        p = p->next;
    }
    return head;
}
```

## 思路

本题解本质思想是迭代，利用双指针法，一个指针`cur`指向当前不重复的节点，另一个指针`p`用于遍历链表。当发现`cur`和`p`的值相等时，说明遇到了重复元素，此时将`cur->next`指向`p->next`，跳过重复节点。否则，移动`cur`指针到下一个节点。最终返回处理后的链表头节点。