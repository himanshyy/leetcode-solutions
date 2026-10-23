#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char string[900];
    char line[900];
    scanf("%c",&ch);
    printf("%c \n",ch);
    scanf("%s",string);
    printf("%s \n",string);
    getchar();
    fgets(line,sizeof(line),stdin);
    printf("%s",line);
    
    
    
        
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna