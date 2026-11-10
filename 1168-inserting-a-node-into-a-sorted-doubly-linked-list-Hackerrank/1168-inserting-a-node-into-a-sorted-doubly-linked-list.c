

/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    struct DoublyLinkedListNode *temp=llist;
    struct DoublyLinkedListNode *newnode=malloc(sizeof(struct DoublyLinkedListNode));
    
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    
    if(temp==NULL){
        return newnode;
    }
    if(temp->data >= newnode->data){
        newnode->next=temp;
        temp->prev=newnode;
        return newnode;
    }
    while(temp->next != NULL && temp->next->data < newnode->data){
        temp=temp->next;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    if(temp->next !=NULL){
    temp->next->prev=newnode;}
    temp->next=newnode;
    
    return llist;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna