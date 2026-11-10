

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode *first=head;
    struct SinglyLinkedListNode *second = head;
    while(second != NULL && second->next !=NULL){
        first=first->next;
        second=second->next->next;
        if(first == second){
            return true;
        }
    }
    return false;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna