class Solution {
public:
        int inversions=0;
    void merge(vector<int>&arr,int l,int m,int r)
    {
        vector<int>Arr(r-l+1);
        int ptr1=l,ptr2=m+1,ptr3=0,idx=m+1;
        while(ptr3<=(r-l))
        {
            if(ptr1==(m+1))
            {
                Arr[ptr3]=arr[ptr2];
                ptr2++;
                ptr3++;
                continue;
            }
            if(ptr2==(r+1))
            {
                while(idx<=r && arr[ptr1]>(2*((long long)arr[idx])))
                {
                    idx++;
                }
                inversions+=idx-m-1;
                Arr[ptr3]=arr[ptr1];
                ptr1++;
                ptr3++;
                continue;
            }
            if(arr[ptr1]<=arr[ptr2])
            {
                while(idx<=r && arr[ptr1]>(2*((long long)arr[idx])))
                {
                    idx++;
                }
                inversions+=idx-m-1;
                Arr[ptr3]=arr[ptr1];
                ptr1++;
                ptr3++;
            }
            else
            {
                Arr[ptr3]=arr[ptr2];
                ptr2++;
                ptr3++;
            }
        }
        for(int i=l;i<=r;i++)
        {
            arr[i]=Arr[i-l];
        }
        return;
    }
    void mergeSort(vector<int>&arr,int l,int r)
    {
        if(l==r)
        {
            return;
        }
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        return;
    }
    
    
    int reversePairs(vector<int>& nums) {
        
                mergeSort(nums,0,nums.size()-1);
        return inversions;
        
    /* below approach is TC: O(N2) and will TLE
        int ans = 0;
        
        for(int i = 0; i < nums.size()-1; i++) {
            int curri = nums[i];
            for(int j = i+1; j < nums.size(); j++) {
                int currj = nums[j];
                if(curri > 2 * currj) ans++;
            }
        }
        
        
        return ans;
    */
    }
};