char* removeDuplicates(char* s) {
    int top=0;
    for(int i=0;s[i]!='\0';i++){
        if(top>0 && s[top-1]==s[i]){
            top--;
        }
        else{
            s[top]=s[i];
            top++;
        }
    }
    s[top]='\0';
    return s;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna