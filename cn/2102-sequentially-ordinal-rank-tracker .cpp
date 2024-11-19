#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class SORTracker {
public:
    using pii = pair<int, string>;
    priority_queue<pii,vector<pii>,greater<>>q1;
    priority_queue<pii>q2;
    int k=1;
    SORTracker() {

    }
    
    void add(string name, int score) {
        q1.push({-score,name});
    }
    
    string get() {
        while (q2.size()<k){
            q2.push(q1.top());
            q1.pop();
        }
        while (q2.size()>k){
            q1.push(q2.top());
            q2.pop();
        }
        while (q2.top()>q1.top()){
            q1.push(q2.top());
            q2.pop();
            q2.push(q1.top());
            q1.pop();
        }
        ++k;
        return q2.top().second;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}