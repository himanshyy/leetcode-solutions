int maxProfit(int* prices, int pricesSize) {
    
    int min=prices[0];
    int max=0;
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        int profit=prices[i]-min;
        if(profit>max){
            max=profit;
        }
    }
    return max;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna