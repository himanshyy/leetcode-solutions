void reverseString(char* s, int sSize) {
    int left=0;
    int right=sSize-1;
    while(left<right){
        int temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna