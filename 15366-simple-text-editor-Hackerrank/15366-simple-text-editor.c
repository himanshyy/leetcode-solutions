#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct Undo{
        int type;
        int len;
        char *text;
    };
   
    int top =-1;
    char s[10001]="";
    int q;
    scanf("%d",&q);
    struct Undo *stack=malloc(q * sizeof(struct Undo));
   
    for(int i=0;i<q;i++){
         
    int type;
    scanf("%d",&type);
        if(type == 1){
            char ops[10001];
            scanf("%s",ops);
            strcat(s+strlen(s),ops);
            
            top++;
            stack[top].type=1;
            stack[top].len=strlen(ops);
            stack[top].text= NULL;
        }
        else if(type == 2){
            int k;
            int j=0;
            scanf("%d",&k);
            char *deletes=malloc(k+1);
            for(int i=strlen(s)-k;i<strlen(s);i++){
                 deletes[j]= s[i];
                 j++;
            }
            deletes[j]='\0';
            s[strlen(s)-k]='\0';
            top++;
            stack[top].type=2;
            stack[top].len=k;
            stack[top].text= deletes;
        }
        else if(type == 3){
            int idx;
            scanf("%d",&idx);
            printf("%c\n",s[idx-1]);  
            
        }
        else if(type == 4){
            if(top>=0){
                if(stack[top].type == 1){
                    s[strlen(s)-stack[top].len]='\0';
                }
                else if(stack[top].type==2){
                    strcat(s,stack[top].text);
                    free(stack[top].text);
                }
                top--;
            }
        }
            
    }
    free(stack);
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna