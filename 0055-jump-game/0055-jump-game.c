bool canJump(int* nums, int numsSize) {
    int max=0;
    for(int i=0 ; i<numsSize ; i++){
        if(i>max){
            return false;
        }
        if(i+nums[i]>max){
            max=i+nums[i];
        }
        if(max>=numsSize-1){
            return true;
        }
    }
    return true;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna