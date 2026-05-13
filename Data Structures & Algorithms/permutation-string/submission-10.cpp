class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int N1=s1.size(), N2=s2.size(), l=0, r=0;
        vector<int> v1(26,0), v2(26,0);

        if (N1>N2) return false;

        for (auto const& i: s1) ++v1[i-'a'];

        while (r<N2){
            if ((r-l+1)>N1){
                --v2[s2[l]-'a'];
                ++l;
            }

            ++v2[s2[r]-'a'];

            if (v1==v2) return true;

            ++r;
        }

        return false;

        // while(l<N2){
        //     if (v1[s2[l]-'a']==0){
        //         ++l;
        //         r=l;
        //     }
        //     else{
        //         for (int i=0; i<N1; ++i){
        //             if (v1[s2[r]-'a']==0){
        //                 --v1[s2[l]-'a'];
        //                 if (v1[s2[l]-'a']=0) return false;
        //                 ++l;
        //                 --i;
        //             }
        //             --v1[s2[r]-'a'];
        //             ++r;
        //         }
        //     }
        // }
        
        // return true;
    }
};
