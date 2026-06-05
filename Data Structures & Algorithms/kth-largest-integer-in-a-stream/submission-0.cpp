class KthLargest {

private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for (auto const& i: nums) pq.emplace(i);

        while (pq.size() > k) pq.pop();
    }
    
    int add(int val) {
        pq.emplace(val);

        while (pq.size() > k) pq.pop();

        return pq.top();
    }
};
