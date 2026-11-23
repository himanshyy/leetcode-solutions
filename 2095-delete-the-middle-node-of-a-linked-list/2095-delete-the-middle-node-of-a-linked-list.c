/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteMiddle(struct ListNode* head) {

    // Empty list or only one node
    if(head == NULL || head->next == NULL) {
        free(head);
        return NULL;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head;
    struct ListNode *prev = NULL;

    // Find middle node
    while(fast != NULL && fast->next != NULL) {

        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // Delete middle node
    prev->next = slow->next;

    free(slow);

    return head;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna