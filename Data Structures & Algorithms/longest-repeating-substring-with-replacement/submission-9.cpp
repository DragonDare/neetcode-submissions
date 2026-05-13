class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> a(26,0);
        int l=0, r=0, N=s.size(), m=0, b=0;

        while (r<N){
            ++a[s[r]-'A'];
            m=max(m,a[s[r]-'A']);
            
            while ((r-l+1)-m>k){
                --a[s[l]-'A'];
                ++l;
            }

            b=max(b,r-l+1);

            ++r;
        }

        return b;
    }
};
