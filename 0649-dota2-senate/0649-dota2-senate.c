char* predictPartyVictory(char* senate) {
    int rad[10000];
    int dire[10000];
    int rfront=-1,rrear=-1;
    int dfront=-1,drear=-1;
    int n=strlen(senate);

    for(int i=0;i<n;i++){
        if(senate[i]=='R')
        {
                rrear++;
                rad[rrear]=i;
        }
        else
        {
            
                drear++;
                dire[drear]=i;
            
        }
    }
    while(rfront < rrear && dfront < drear)
    {
        rfront++;
        int r=rad[rfront];
        dfront++;
        int d = dire[dfront];

        if(r<d)
        {
            rrear++;
            rad[rrear]=r+n;
        }
        else{
            drear++;
            dire[drear]=d+n;
        }
    }
    if(rfront < rrear){
        return "Radiant";
    }
    else{
        return "Dire";
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna