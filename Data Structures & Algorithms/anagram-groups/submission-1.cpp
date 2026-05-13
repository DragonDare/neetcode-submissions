class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int N=strs.size();
        vector<vector<int>> enc(N, vector<int>(26,0));
        vector<vector<string>> output;
        unordered_map<string,vector<string>> u;

        for (int i=0; i<N; ++i) {
            for (int j=0; j<strs[i].size(); ++j) ++enc[i][strs[i][j] - 'a'];

            string t=keyHash(enc[i]);

            u[t].push_back(strs[i]);
        }

        for (auto const& x: u) output.push_back(x.second);

        return output;
    }

    string keyHash(vector<int> code){
        string s;
        for (auto const& x: code) s+=to_string(x)+'#';
        return s;
    }
};
