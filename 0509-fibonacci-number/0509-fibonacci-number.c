

int fib(int n){
    int fib1=0;
    int fib2=1;
    for(int i=0;i<n;i++){
        int nextfib=fib1+fib2;
        fib1=fib2;
        fib2=nextfib;
    }
    return fib1;

}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna