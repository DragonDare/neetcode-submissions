class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for (auto const& i: strs) s+=to_string(i.size())+"#"+i;
        return s;
    }

    vector<string> decode(string s) {
        vector<string> output;
        int N=s.size(), i=0, j=0;
        while (j<N){
            if (s[j]=='#'){
                int k=stoi(s.substr(i,j-i));
                output.push_back(s.substr(j+1,k));
                j+=k+1;
                i=j;
            }
            else ++j;
        }
        return output;
    }
};
