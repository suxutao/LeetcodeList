#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        sort(restaurants.begin(), restaurants.end(),[](vector<int>&a,vector<int>&b){
            if (a[1]==b[1])
                return a[0]>b[0];
            return a[1]>b[1];
        });
        vector<int>v;
        for (auto &item: restaurants){
            if (item[3]<=maxPrice&&item[4]<=maxDistance&&!(veganFriendly&&!item[2]))
                v.push_back(item[0]);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}