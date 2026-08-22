class Solution {
public:
    bool checkDivisibility(int n) {
        int digitSum=0,digitProd=1,temp=n;
        while(temp>0){
            digitSum+=temp%10;
            digitProd*=temp%10;
            temp=temp/10;
        }
        if(n%(digitSum+digitProd)==0){
            return true;
        }else{
            return false;
        }
    }
};