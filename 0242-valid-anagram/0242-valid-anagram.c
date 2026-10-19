bool isAnagram(char* s, char* t) {
    int len1=strlen(s);
    int len2=strlen(t);
    int freq1[26]={0};
    int freq2[26]={0};

    if(len1!=len2){
        return false;
    }

    for(int i=0; s[i]!='\0';i++){
        freq1[s[i]-'a']++;
        }
    for(int j=0;t[j]!='\0';j++){
        freq2[t[j]-'a']++;
    }    

    for(int k=0;k<26;k++){
        if(freq1[k]!=freq2[k]){
            return false;
        }
    }
    return true;
    
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna