char* decodeString(char* s) {
    int countStack[100];
    char *chrStack[100];
    int num=0;
    int top=-1;
    char *current=calloc(100001,sizeof(char));
    for(int i=0;s[i]!='\0';i++){
        if(isdigit(s[i])){
            num=num*10+(s[i]-'0');
        }
        else if(s[i]=='['){
            top++;
            countStack[top]=num;
            chrStack[top]=current;
            current=calloc(100001,sizeof(char));
            num=0;
        }
        else if(s[i]==']'){
            int rept=countStack[top];
            char *prev=chrStack[top];
            for(int j=0;j<rept;j++){
                strcat(prev,current);
            }
            free(current);
            current=prev;
            top--;
        }
        else{
            int len=strlen(current);
            current[len]=s[i];
            current[len+1]='\0';
        }
    }
    return current;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna