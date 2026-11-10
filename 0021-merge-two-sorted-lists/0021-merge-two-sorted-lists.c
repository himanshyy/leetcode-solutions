/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode *newnode=&dummy;
    dummy.next=NULL;
    while(list1 != NULL && list2 != NULL){
        if(list1->val <= list2->val){
            newnode->next=list1;
            list1=list1->next;
        }
        else{
            newnode->next=list2;
            list2=list2->next;
        }
        newnode=newnode->next;
    }
    if(list1 != NULL){
        newnode->next=list1;
    }
    if(list2!=NULL){
        newnode->next=list2;
    }
    return dummy.next;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna