#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
        int a=0,MAX=0,price=0;
        while(a!=prices.size()-1){
            while(a<prices.size()-1&&prices[a+1]<=prices[a])
                a++;
            price-=prices[a];
            while (a<prices.size()-1&&prices[a+1]>=prices[a])
                a++;
            price+=prices[a];
            MAX= max(MAX,price);
        }
        return MAX;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}