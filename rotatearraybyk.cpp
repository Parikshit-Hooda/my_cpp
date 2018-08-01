//rotate array clockwise by d

void Rotate(int arr[], int d, int size) {
  int *temparray = new int[d];
  for(int i = 0 ; i < d ; i++)
    temparray[i] = arr[i];
  for(int i = 0 ; i < size-d ; i++)
  {
    arr[i] = arr[i+d];
  }
  for(int i = size-d ; i < size ; i++) {
    arr[i] = temparray[i-(size-d)];
  }
  
}	
