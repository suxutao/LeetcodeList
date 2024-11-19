#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int candy(vector<int>& ratings) {
        if (ratings.size()==1)
            return 1;
        int ans=0;
        vector<int>candy(ratings.size(),1);
        for (int i = 1; i < ratings.size(); ++i) {
            if (ratings[i]>ratings[i-1])
                candy[i]=candy[i-1]+1;
        }
        for (int i = ratings.size()-2; i >=0; --i) {
            if (ratings[i]>ratings[i+1])
                candy[i]=max(candy[i],candy[i+1]+1);
        }
        for (int i = 0; i < candy.size(); ++i) {
            ans+=candy[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}