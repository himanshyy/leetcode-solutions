
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}
int distinct_count(const char *s){
    int freq[26]={0};
    for(int i=0; s[i]!='\0';i++){
        freq[s[i]-'a']++;
    }
    int count=0;
    for(int j=0;j<26;j++){
        if(freq[j]>0){
            count+=1;
        }
    }
    return count;
    
}
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int first=distinct_count(a);
    int second=distinct_count(b);
    
    if(first != second){
        return first-second;
    }
    return strcmp(a, b);
}

int sort_by_length(const char* a, const char* b) {
    int len1=strlen(a);
    int len2=strlen(b);
    
    if(len1 != len2){
        return len1-len2;
    }
    
    return strcmp(a, b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if (cmp_func(arr[j], arr[j + 1]) > 0){
                char* temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna