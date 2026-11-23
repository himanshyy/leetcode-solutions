#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int q;
    scanf("%d",&q);
    int stack1[100000];
    int stack2[100000];
    int top1=-1;
    int top2=-1;
    
    while(q--){
        int type;
        scanf("%d",&type);
        if(type == 1){
            int val;
            scanf("%d",&val);
            top1++;
            stack1[top1]=val;
        }
        else if(type == 2){
            if(top2 == -1){
                while(top1 != -1){
                    top2++;
                    stack2[top2]=stack1[top1];
                    top1--;
                }
            }
            top2--;
        }
        else if(type == 3){
            if(top2==-1){
                while(top1 != -1){
                    top2++;
                    stack2[top2]=stack1[top1];
                    top1--;
                }
            }
            printf("%d\n",stack2[top2]);
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna