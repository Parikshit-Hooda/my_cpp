//function to find the elements by which the sorted(increasing) array is rotated.

int FindSortedArrayRotation(int arr[], int n) {
	int smallestIdx=0;
  for(int i = 0 ; i < n ; i++) {
    if(arr[i] < arr[smallestIdx])
    {
      smallestIdx=i;
    }
  }
  return smallestIdx;
}
