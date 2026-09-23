class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0,size=m+n;

        vector<int> res(size);
        while(m>i && n>j)
        {
            if(nums1[i]<nums2[j]){
              res[k++]=nums1[i++];
            }else{
                res[k++]=nums2[j++];
            }
        }

        while(m>i){
            res[k++]=nums1[i++];
        }
        while(n>j){
            res[k++]=nums2[j++];
        }
        nums1 = res;
    }
};