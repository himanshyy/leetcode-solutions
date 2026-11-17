char* removeStars(char* s) {
    int n=strlen(s);
    char *stack=malloc((n+1)*sizeof(char));
    int top=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            top--;
        }
        else{
            top++;
            stack[top]=s[i];
        }
    }
    stack[top+1]='\0';
    return stack;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna