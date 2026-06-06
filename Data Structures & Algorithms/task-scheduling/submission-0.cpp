class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> taskFreq(26,0);
        int time = 0;

        priority_queue<int> maxHeap;

        for (auto const& i: tasks) ++taskFreq[i - 'A'];

        for (auto const& i: taskFreq) if (i != 0) maxHeap.emplace(i);

        queue<pair<int, int>> q;

        while (!maxHeap.empty() || !q.empty()) {
            ++time;

            if (maxHeap.empty()) {
                time = q.front().second;
            } else {
                int temp = maxHeap.top() - 1;
                maxHeap.pop();

                if (temp) q.push({temp, time + n});
            }

            if (!q.empty() && q.front().second == time) {
                maxHeap.emplace(q.front().first);
                q.pop();
            }
        }

        return time;
    }
};
