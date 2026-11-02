

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    struct SinglyLinkedListNode *newnode=malloc(sizeof(int));
    
    newnode->data=data;
    newnode->next=NULL;
    
    if(position==0){
        newnode->next=llist;
        return newnode;
    }
    struct SinglyLinkedListNode *temp=llist;
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return llist;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna