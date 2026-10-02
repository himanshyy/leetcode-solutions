#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];
    int freq[50]={0};
    scanf("%s",s);
    int digit=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0'&&s[i]<='9'){
            digit=s[i]-'0';
            freq[digit]++;
        } 
    }
    for(int i=0;i<10;i++){
        printf("%d ",freq[i]);
    }
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna