void sortZeroOne(int arr[], int n) {
  int zeroCount = 0;
  int oneCount = 0;
  //stepA: Count 0 and 1
  for(int i=0; i<n; i++) {
    if(arr[i] == 0) 
      zeroCount++;
    if(arr[i] ==1) 
      oneCount++; 
  }

  //Step B: place all zeroes first
  // int i;
  // for(i =0; i<zeroCount; i++) {
  //  arr[i] = 0;
  // }
  // //Step B: place all ones first
  // for(int j = i; j<n ;j++) {
  //  arr[j] = 1;
  // }

  //EASY WAY
  int index = 0;

  while(zeroCount--) {
    arr[index] = 0;
    index++;
  }

  while(oneCount--) {
    arr[index] = 1;
    index++;
  }
  
}