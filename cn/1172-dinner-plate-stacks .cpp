#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class DinnerPlates {
public:
    int capacity;
    vector<vector<int>>v;
    priority_queue<int,vector<int>,greater<>>q_push;
    DinnerPlates(int capacity):capacity(capacity) {
        for (int i = 0; i <= 200000; ++i) {
            q_push.push(i);
        }
    }

    void push(int val) {
        if (q_push.top()>=v.size()){
            v.push_back({});
        }
        while (v[q_push.top()].size()>=capacity){
            q_push.pop();
            if (q_push.top()>=v.size()){
                v.push_back({});
            }
        }
        v[q_push.top()].push_back(val);
    }

    int pop() {
        while (!v.empty()&&v.back().empty()){
            v.pop_back();
        }
        if (v.empty())
            return -1;
        if (v.back().size()==capacity)
            q_push.push(v.size()-1);
        int res=v.back().back();
        v.back().pop_back();
        return res;
    }

    int popAtStack(int index) {
        if (index>=v.size()||v[index].empty())
            return -1;
        if (v[index].size()==capacity)
            q_push.push(index);
        int res=v[index].back();
        v[index].pop_back();
        return res;
    }
};

/**
 * Your DinnerPlates object will be instantiated and called as such:
 * DinnerPlates* obj = new DinnerPlates(capacity);
 * obj->push(val);
 * int param_2 = obj->pop();
 * int param_3 = obj->popAtStack(index);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}