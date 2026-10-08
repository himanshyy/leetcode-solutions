int maxSubArray(int* nums, int numsSize) {
    int current=nums[0];
    int max=nums[0];
    for(int i=1;i<numsSize;i++){
        if(nums[i]<current+nums[i]){
            current=current+nums[i];
        }

        else{
            current=nums[i];
        }
        if(current>max){
            max=current;
        }
    }
    return max;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna