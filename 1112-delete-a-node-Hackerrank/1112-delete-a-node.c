

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    struct SinglyLinkedListNode *temp = llist;
    if(position==0){
        struct SinglyLinkedListNode *del = llist;
        llist=llist->next;
        free(del);
        return llist;
    }
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
    
    struct SinglyLinkedListNode *del = temp->next;
    temp->next = del->next;
    free(del);
    return llist;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna