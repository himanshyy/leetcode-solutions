

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    struct SinglyLinkedListNode dummy;
    struct SinglyLinkedListNode *newnode = &dummy;
    
    dummy.next=NULL;
    while(head1 != NULL && head2 != NULL){
        if(head1->data <= head2->data){
            newnode->next=head1;
            head1=head1->next;
        }
        else{
            newnode->next=head2;
            head2=head2->next;
        }
        newnode=newnode->next;
    }
    if(head1 !=NULL){
        newnode->next=head1;
    }
    else{
        newnode->next=head2;
    }
    return dummy.next;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna