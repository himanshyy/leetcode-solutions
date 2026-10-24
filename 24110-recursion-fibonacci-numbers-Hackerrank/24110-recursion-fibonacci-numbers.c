#include <stdio.h>

int fibonacci(int n) {
   if(n==0){
    return 0;
   }
   if(n==1){
    return 1;
   }
   return fibonacci(n-1)+fibonacci(n-2);
};

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna