

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
   struct SinglyLinkedListNode *p1=head1;
   struct SinglyLinkedListNode *p2=head2;
   while(p1 != p2){
    if(p1==NULL){
        p1=head2;
    }
    else{
        p1=p1->next;
    }
    
    if(p2==NULL){
        p2=head1;
    }
    else{
        p2=p2->next;
    }
   }
    return p1->data;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna