#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class LFUCache {
public:
    using tup = tuple<int, int, int>;
    int time=1,capacity;
    struct com{
        bool operator()(tup&a,tup&b){
            if (get<2>(a)==get<2>(b))
                return get<1>(a)>get<1>(b);
            return get<2>(a)>get<2>(b);
        }
    };
    unordered_map<int,tup>m;
    priority_queue<tup,vector<tup>,com>q;
    LFUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
        if (!m.contains(key))
            return -1;
        q.emplace(key,time,++get<2>(m[key]));
        get<1>(m[key])=time++;
        return get<0>(m[key]);
    }
    
    void put(int key, int value) {
        if (m.size()==capacity&&!m.contains(key)){
            while (!q.empty()&&get<1>(m[get<0>(q.top())])!=get<1>(q.top())&&get<2>(m[get<0>(q.top())])!=get<2>(q.top()))
                q.pop();
            m.erase(get<0>(q.top()));
            q.pop();
        }
        get<0>(m[key])=value;
        q.emplace(key,time,++get<2>(m[key]));
        get<1>(m[key])=time++;
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}