/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    int *stack = malloc(asteroidsSize * sizeof(int));
    int top = -1;
    for(int i=0;i<asteroidsSize;i++){
        int alive = 1;
        while(top>=0 && stack[top]>0 && asteroids[i]<0){
            if(stack[top] < -asteroids[i]){
                top--;
            }
            else if(stack[top] == -asteroids[i]){
                top--;
                alive=0;
                break;
            }
            else{
                alive = 0;
                break;
            }
        }
        if(alive){
            top++;
            stack[top]=asteroids[i];
        }
    }
    *returnSize=top+1;
    return stack;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna