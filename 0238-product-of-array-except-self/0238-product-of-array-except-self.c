/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    
    int* answer=malloc(numsSize * sizeof(int));
    *returnSize=numsSize;
    int left=1;
    for(int i=0;i<numsSize;i++){
       
       answer[i]=left;
       left *= nums[i];
    }
    int right=1;
    for(int j=numsSize-1;j>=0;j--){
        answer[j]=answer[j]*right;
        right *= nums[j];
    }
    return answer;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna