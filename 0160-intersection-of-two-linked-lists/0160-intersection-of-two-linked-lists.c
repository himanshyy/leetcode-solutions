/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *nodeA = headA;
    struct ListNode *nodeB = headB;

    while(nodeA != nodeB)
    {
        if(nodeA == NULL)
        {
            nodeA = headB;
        }
        else{
            nodeA = nodeA->next;
        }

        if(nodeB == NULL)
        {
            nodeB = headA;
        }
        else{
            nodeB = nodeB->next;
        }
    }
    return nodeA;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna