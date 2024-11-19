#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pi = pair<int, int>;
    struct com{
        bool operator()(const pi&a,const pi&b)const{
            return a.first+a.second< b.first+b.second;
        }
    };
    priority_queue<pi,vector<pi>,com>q;
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        int n=aliceValues.size(),a=0,b=0;
        for (int i = 0; i < n; ++i) {
            q.emplace(aliceValues[i],bobValues[i]);
        }
        for (int i = 0; i < n; ++i) {
            if (i&1){
                b+=q.top().second;
            }else{
                a+=q.top().first;
            }
            q.pop();
        }
        if (a==b)
            return 0;
        else if (a>b)
            return 1;
        else
            return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}