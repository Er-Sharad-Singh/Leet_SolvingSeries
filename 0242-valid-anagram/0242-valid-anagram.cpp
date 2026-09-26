class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char,int> an;
        for(int i=0;i<s.size();i++){
            an[s[i]]++;
        }
        unordered_map<char,int> ta;
        for(int i=0;i<t.size();i++){
            ta[t[i]]++;
        }
        
        if(an==ta){
            return true;
        }else{
            return false;
        }
        
    }
};