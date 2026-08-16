class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int maxlen=0;
        unordered_map <char,int> freq;
        int n= s.size();
        while(r<n){
            while(freq[s[r]]> 0){
                freq[s[l]]--;
                l++;
                
            }
            freq[s[r]]++;
            maxlen=max(maxlen,(r-l +1));
            r++;

        }
        return maxlen;
    }
};