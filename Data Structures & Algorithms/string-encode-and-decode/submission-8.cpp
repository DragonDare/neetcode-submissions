class Solution {
public:

    string encode(vector<string>& strs) {
        string s;

        for (auto const& i: strs) {
            s+=to_string(i.size()) + '#' + i;
        }

        return s;
    }

    vector<string> decode(string s) {
        cout<<s;
        vector<string> output;
        int l=0, r=0;
        while (r<s.size()) {
            if (s[r] == '#') {
                int k=stoi(s.substr(l,r-l));
                output.push_back(s.substr(r+1,k));
                r+=k+1;
                l=r;
            }
            else ++r;
        }

        return output;
    }
};
