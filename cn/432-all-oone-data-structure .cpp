#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class AllOne {
public:
    unordered_map<string,int>m;
    priority_queue<pair<int,string>>q;
    priority_queue<pair<int,string>,vector<pair<int,string>>,greater<>>p;
    AllOne() {

    }
    
    void inc(string key) {
        ++m[key];
        q.emplace(m[key],key);
        p.emplace(m[key],key);
    }
    
    void dec(string key) {
        --m[key];
        if (m[key]){
            q.emplace(m[key],key);
            p.emplace(m[key],key);
        }
    }
    
    string getMaxKey() {
        while (!q.empty()&&m[q.top().second]!=q.top().first)
            q.pop();
        return q.empty()?"":q.top().second;
    }
    
    string getMinKey() {
        while (!p.empty()&&m[p.top().second]!=p.top().first)
            p.pop();
        return p.empty()?"":p.top().second;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}