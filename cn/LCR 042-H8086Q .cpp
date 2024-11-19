#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class RecentCounter {
public:
    deque<int>v;
    RecentCounter() {

    }
    
    int ping(int t) {
        v.push_back(t);
        while (!v.empty()&&v.front()+3000<t){
            v.pop_front();
        }
        return v.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}