#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class LRUCache {
public:
    int time=1,capacity;
    unordered_map<int,int>mv,mt;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>q;
    LRUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
        if (mv.contains(key)) {
            q.emplace(time,key);
            mt[key]=time++;
            return mv[key];
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (mv.size()==capacity&&!mv.contains(key)){
            while (!q.empty()&&mt[q.top().second]!=q.top().first)
                q.pop();
            mv.erase(q.top().second);
            mt.erase(q.top().second);
            q.pop();
        }
        mv[key]=value;
        q.emplace(time,key);
        mt[key]=time++;
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