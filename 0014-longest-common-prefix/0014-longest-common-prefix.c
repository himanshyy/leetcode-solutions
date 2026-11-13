char* longestCommonPrefix(char** strs, int strsSize) {
    char *result = malloc(strlen(strs[0])+1 * sizeof(char));
    int i=0;
    while(strs[0][i] != '\0'){
        char ch = strs[0][i];
        
        for(int j=1 ;j < strsSize;j++){
            if(strs[j][i]=='\0' || strs[j][i] != ch){
                result[i]='\0';
                return result;
            }
        }
        
        result[i]=ch;
        i++;
    }
    result[i]='\0';
    return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna