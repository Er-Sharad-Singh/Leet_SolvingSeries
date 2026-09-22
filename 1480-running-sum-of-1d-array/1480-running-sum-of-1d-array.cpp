class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int len=arr.size();
        vector<int> newarr(len);
        for(int i=0;i<len;i++){
            // int sum=0;
            // for(int j=0;j<=i;j++){
            //     //std::cout << sum; I use it for debugging
            //     sum+=arr[j];
            // }
           
           //Without Nested Loop

            if(i){
                newarr[i]=arr[i]+newarr[i-1];
            }else{
                newarr[i]=arr[i];
            }
        }

        return newarr;
        
    }
};