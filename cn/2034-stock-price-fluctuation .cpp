#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class StockPrice {
public:
    map<int,int>m;
    priority_queue<pair<int,int>>q1;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>q2;
    StockPrice() {

    }
    
    void update(int timestamp, int price) {
        m[timestamp]=price;
        q1.push({price,timestamp});
        q2.push({price,timestamp});
    }
    
    int current() {
        return m.rbegin()->second;
    }
    
    int maximum() {
        while (m[q1.top().second]!=q1.top().first){
            q1.pop();
        }
        return q1.top().first;
    }
    
    int minimum() {
        while (m[q2.top().second]!=q2.top().first){
            q2.pop();
        }
        return q2.top().first;
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}