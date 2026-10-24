
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    double area[n];
    for(int i=0;i<n;i++){
    double s=(tr[i].a+tr[i].b+tr[i].c)/2.0;
    area[i]=sqrt(s*(s-(tr[i].a))*
              (s-(tr[i].b))*
              (s-(tr[i].c)));}
    
    
    for(int i=0;i<n-1;i++){
        for(int j=0; j<n-i-1;j++){
            if(area[j]>area[j+1]){
                double temp=area[j];
                area[j]=area[j+1];
                area[j+1]=temp;
                
                triangle temps=tr[j];
                tr[j]=tr[j+1];
                tr[j+1]=temps;
            }
        }
    }
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna