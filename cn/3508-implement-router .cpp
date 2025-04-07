#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Router {
public:
    int limit;
    queue<int>q;
    set<array<int,3>>s;
    unordered_map<int,deque<array<int,3>>>m;
    Router(int memoryLimit) {
        limit=memoryLimit;
    }
    
    bool addPacket(int source, int destination, int timestamp) {
        array<int,3>a{timestamp,source,destination};
        if (!s.contains(a)){
            q.push(destination);
            s.insert(a);
            m[destination].push_back(a);
            if (s.size()>limit){
                auto f=q.front();
                auto aa=m[f].front();
                q.pop();
                s.erase(aa);
                m[f].pop_front();
            }
            return true;
        }
        return false;
    }
    
    vector<int> forwardPacket() {
        if (q.empty())
            return {};
        auto f=q.front();
        auto a=m[f].front();
        q.pop();
        s.erase(a);
        m[f].pop_front();
        return {a[1],a[2],a[0]};
    }
    
    int getCount(int destination, int startTime, int endTime) {
        auto&dq=m[destination];
        auto start= lower_bound(dq.begin(), dq.end(), array<int,3>{startTime,0,0});
        auto end= upper_bound(dq.begin(), dq.end(), array<int,3>{endTime+1,0,0});
        return end-start;
    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}