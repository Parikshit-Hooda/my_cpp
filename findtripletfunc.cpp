void FindTriplet(int input[], int size, int x) {
 for(int i = 0 ; i < size-2 ; i++) {
   for(int j = i+1 ; j < size-1 ; j++) {
     for(int k = j+1; k < size ; k++) {
       if((input[i]+input[j]+input[k])==x)
       {
         if(input[i]>=input[j] && input[i]>=input[k]) {
           if(input[j] > input[k]) {
             cout<<input[k]<<" "<<input[j]<<" "<<input[i]<<endl;
             continue;
           }
           else
           {
             cout<<input[j]<<" "<<input[k]<<" "<<input[i]<<endl;
             continue;
           }
         }
         
         else if(input[j]>=input[i] && input[j]>=input[k]) {
           if(input[i] > input[k]) {
             cout<<input[k]<<" "<<input[i]<<" "<<input[j]<<endl;
             continue;
           }
           else
           {
             cout<<input[i]<<" "<<input[k]<<" "<<input[j]<<endl;
             continue;
           }
         }
         
         else if(input[k]>=input[j] && input[k]>=input[i]) {
           if(input[j] > input[i]) {
             cout<<input[i]<<" "<<input[j]<<" "<<input[k]<<endl;
             continue;
           }
           else
           {
             cout<<input[j]<<" "<<input[i]<<" "<<input[k]<<endl;
             continue;
           }
         }        
         
       }
     }
   }
 }

}
