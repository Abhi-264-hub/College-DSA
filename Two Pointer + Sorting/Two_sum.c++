class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mpp;
        int c=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(mpp.find(s[i])!=mpp.end()) c--;
            mpp[s[i]]=i;
            c++;
            ans=max(ans,c);
        }
        return ans;   
    }
};