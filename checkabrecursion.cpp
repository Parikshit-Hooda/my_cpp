bool checkab(char input[], int size ) {
 if(size<=0)
   return true;
  if(input[0] == 'a')
  {
    if(size==1)
      return true;
    if(input[1]=='b' && input[2]=='b')
      return checkab(input+3,size-3);
    if(input[1]=='a')
      return checkab(input+2,size-2);
    return false;
  }
  if(input[0] == 'b'){
    if(input[1] == 'b')
      return checkab(input+2,size-2);
    else 
      return false;
  }
  bool isAB = checkab(input+1, size-1);
  return isAB;  
}

bool checkAB(char input[]) {
	// Write your code here
  int size=0;
  bool result = false;
  for(int i = 0 ; input[i] !='\0' ; i++)
    size++;
  if(size==0)
    return false;
  if(input[0] == 'a')
  {
    result = checkab(input, size);
    return result;
  }
  return result;
}

int main() {
	// your code goes here
bool result = checkAB("abababa");
cout<<result;
	return 0;
}