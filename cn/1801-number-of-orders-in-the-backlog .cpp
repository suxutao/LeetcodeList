#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) {
        ll ans=0;
        priority_queue<pair<ll,ll>>cai;
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<>>xiao;
        for (int i = 0; i < orders.size(); ++i) {
            ll price=orders[i][0],num=orders[i][1],type=orders[i][2];
            if (type){
                if (!cai.empty()&&cai.top().first>=price){
                    while (!cai.empty()&&cai.top().first>=price){
                        ll a=cai.top().first,b=cai.top().second;
                        cai.pop();
                        if (b<num){
                            num-=b;
                        }else{
                            b-=num;
                            num=0;
                            if (b) cai.push({a,b});
                            break;
                        }
                    }
                    if (num)
                        xiao.push({price,num});
                }else{
                    xiao.push({price,num});
                }
            }else{
                if (!xiao.empty()&&xiao.top().first<=price){
                    while (!xiao.empty()&&xiao.top().first<=price){
                        ll a=xiao.top().first,b=xiao.top().second;
                        xiao.pop();
                        if (b<num){
                            num-=b;
                        }else{
                            b-=num;
                            num=0;
                            if (b) xiao.push({a,b});
                            break;
                        }
                    }
                    if (num)
                        cai.push({price,num});
                }else{
                    cai.push({price,num});
                }
            }
        }
        while (!cai.empty()){
            ans+=cai.top().second;
            cai.pop();
        }
        while (!xiao.empty()){
            ans+=xiao.top().second;
            xiao.pop();
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}