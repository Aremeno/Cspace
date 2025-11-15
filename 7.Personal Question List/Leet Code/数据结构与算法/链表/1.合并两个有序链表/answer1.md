# 题解1

```c

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }
    if(list1->val > list2->val){
        list2->next = mergeTwoLists(list1,list2->next);
        return list2;
    }
    else{
        list1->next = mergeTwoLists(list1->next,list2);
        return list1;
    }
}
```

## 题解思路

本题解运用了递归的方法来合并两个有序链表，十分巧妙。

下面以（1->3->5）和（2->4->6）为例进行说明：

1. 首先比较（1）和（2），1小于2，因此将1作为合并后链表的头节点，然后递归地合并（3->5）和（2->4->6）。
2. 接着比较（3）和（2），2小于3，因此将2作为合并后链表的第二个节点，然后递归地合并（3->5）和（4->6）。
3. 然后比较（3）和（4），3小于4，因此将3作为合并后链表的第三个节点，然后递归地合并（5）和（4->6）。
4. 接着比较（5）和（4），4小于5，因此将4作为合并后链表的第四个节点，然后递归地合并（5）和（6）。
5. 然后比较（5）和（6），5小于6，因此将5作为合并后链表的第五个节点，然后递归地合并NULL和（6）。
6. 最后，由于第一个链表已经为空，直接将剩余的（6）连接到合并后的链表末尾。
7. 最终得到的合并后链表为（1->2->3->4->5->6）。此时list1空了，递归开始回溯，依次连接各个节点。