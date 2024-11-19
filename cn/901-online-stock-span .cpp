#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class StockSpanner {
public:
    stack<int>st;
    vector<int>v;
    int cnt=0;
    StockSpanner() {

    }
    
    int next(int price) {
        while (!st.empty()&&v[st.top()]<=price){
            st.pop();
        }
        v.push_back(price);
        int ans=v.size();
        if (!st.empty()){
            ans=v.size()-st.top()-1;
        }
        st.push(v.size()-1);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}