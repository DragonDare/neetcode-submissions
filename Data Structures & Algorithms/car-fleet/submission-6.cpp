class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> s;
        for (int i=0; i<position.size(); ++i) {
            s.push_back({position[i],speed[i]});
        }
        sort(s.rbegin(),s.rend());
        stack<double> count;
        int k=0;
        for (int i=0; i<s.size(); ++i) {
            double maxh=(double)(target-s[i].first)/s[i].second;
            cout<<maxh<<endl;
            if (count.empty()) {
                count.push(maxh);
                ++k;
            }
            else if (count.top()<maxh) {
                count.push(maxh);
                ++k;
            }
        }
        return k;
    }
};
