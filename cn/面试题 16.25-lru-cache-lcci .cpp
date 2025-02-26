#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class LRUCache {
public:
    int capacity,time=1;
    unordered_map<int,pair<int,int>>m;
    priority_queue<array<int,3>>q;

    LRUCache(int capacity) {
        this->capacity=capacity;
    }

    int get(int key) {
        if (!m.contains(key)){
            return -1;
        }
        m[key].second=-time;
        q.push({-time++, key, m[key].first});
        return m[key].first;
    }

    void put(int key, int value) {
        m[key].first=value;
        m[key].second=-time;
        q.push({-time++, key, value});
        if (m.size()>capacity){
            while (!m.contains(q.top()[1])||m[q.top()[1]].first!=q.top()[2]||m[q.top()[1]].second!=q.top()[0])
                q.pop();
            m.erase(q.top()[1]);
            q.pop();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}