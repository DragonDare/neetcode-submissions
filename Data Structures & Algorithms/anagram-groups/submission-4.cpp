class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string,vector<string>> u;

        for (auto const& i: strs) {

            vector<int> enc(26,0);
            for (auto const& j: i) ++enc[j - 'a'];

            string t=keyHash(enc);

            u[t].push_back(i);
        }

        for (auto const& x: u) output.push_back(x.second);

        return output;
    }

    string keyHash(const vector<int>& code){
        string s;
        for (auto const& x: code) s+=to_string(x)+'#';
        return s;
    }
};
