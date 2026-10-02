

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int n=number_of_students;
  int sum=0;
  if(gender=='g'){
    for(int i=1;i<n;i+=2){
        sum=sum+marks[i];
    }
  }
  else{
    for(int i=0;i<n;i+=2){
        sum=sum+marks[i];
    }
  }
  return sum;
}



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna