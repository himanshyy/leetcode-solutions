bool backspaceCompare(char* s, char* t) {
    int top=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='#'){
            if(top>0){
            top--;
        }
        }
        else{
            s[top]=s[i];
            top++;
        }
    }
    s[top]='\0';
    int top2=0;
    for(int i=0;t[i]!='\0';i++){
        if(t[i]=='#'){
            if(top2>0){
                top2--;
            }}
        else{
                t[top2]=t[i];
                top2++;
            }
        
    }
    t[top2]='\0';
    return strcmp(s,t)==0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna