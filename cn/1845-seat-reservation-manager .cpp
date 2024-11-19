#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class SeatManager {
public:
    priority_queue<int,vector<int>,greater<>>q;
    SeatManager(int n) {
        for (int i = 1; i <= n; ++i) {
            q.push(i);
        }
    }
    
    int reserve() {
        int t=q.top();
        q.pop();
        return t;
    }
    
    void unreserve(int seatNumber) {
        q.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}