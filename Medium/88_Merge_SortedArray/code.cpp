class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
       int a = m-1;
       int b = n-1;
       int c = m+n-1;
    //    if(m==0){
    //     a=m;
    //    }
       while(a>-1 && b>-1)
       {
        if(nums1[a]<nums2[b]){
            nums1[c]=nums2[b];
             b--;
             c--;
        }
        else{
            nums1[c]=nums1[a];
            a--;
            c--;
        }
       }
     while(b>-1 && c>-1)
     {
        nums1[c] = nums2[b];
        c--;
        b--;
     }
    }
};