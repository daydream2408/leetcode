class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
       // int len=s.size();
        int maxfreq=0;
        int maxlen=0;
        unordered_map<char,int> hash;

        while(r<s.size()){
           hash[s[r]]++;
           maxfreq=max(maxfreq,hash[s[r]]);

           int check =(r-l+1)-maxfreq;
           if(check<=k){
            maxlen=max(maxlen,r-l+1);
           }

           else{
              hash[s[l]]--;
              l++;
           }
           r++;
        }
        return maxlen;
    }
};