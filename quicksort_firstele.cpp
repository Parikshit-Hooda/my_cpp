//swap is working fine.
void swap(int *num1, int *num2){
  int tempNum = *num1;
  *num1 = *num2;
  *num2 = tempNum;
}

int partition(int input[], int si, int li){
 int pivotvalue=input[si];
  int first,right,left;
  first=si;
  right=left=first+1;
  while(right<=li) {
    if(input[right] < pivotvalue)
    {
      swap(&input[right], &input[left]);
      left++;  
    }
    right++;
  }
  swap(&input[first], &input[left-1]);
  return left-1;
}

void quicksort(int input[],int si, int li)
{
  if(si<li){
  int pIndex = partition(input,si,li);
  quicksort(input,si,pIndex-1);
  quicksort(input,pIndex+1,li);
  }
}

void quickSort(int input[], int n){
  quicksort(input, 0,n-1); 
}

int main(){
  int input[]={10,7,8,5,1,-1};
  quickSort(input,6);
  for(int i = 0 ; i < 6 ; i++)
    cout<<input[i]<<" ";
  cout<<endl;

}