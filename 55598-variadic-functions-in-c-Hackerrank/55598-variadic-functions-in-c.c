
int  sum (int count,...) {
    va_list args;
    va_start(args, count);

    int total = 0;

    for(int i = 0; i < count; i++)
    {
        total += va_arg(args, int);
    }

    va_end(args);

    return total;
}

int min(int count,...) {
    va_list args;
    va_start(args, count);
    int minimum=va_arg(args,int);
    
    for(int i=1;i<count;i++){
        int x=va_arg(args,int);
        if(x<minimum){
            minimum=x;
        }
    }
    va_end(args);
    return minimum;
}

int max(int count,...) {
    va_list args;
    va_start(args,count);
     int max=va_arg(args,int);
     for(int i=1;i<count;i++){
        int x=va_arg(args,int);
        if(x>max){
            max=x;
        }
     }
     va_end(args);
     return max;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna