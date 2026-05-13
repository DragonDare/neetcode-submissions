class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r=0, N=s.size(), maxFreq=0, m=0;
        vector<int> lc(26,0);

        while (r<N){
            ++lc[s[r]-'A'];
            maxFreq=max(maxFreq,lc[s[r]-'A']);

            while (((r-l+1)-maxFreq)>k){
                --lc[s[l]-'A'];
                ++l;
            }

            m=max(m,r-l+1);

            ++r;
        }

        return m;
    }
};
