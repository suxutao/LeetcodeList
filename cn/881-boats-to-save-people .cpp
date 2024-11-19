#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int l=0,r=people.size()-1,ans=0;
        while (l<r){
            if (people[l]+people[r]<=limit){
                l++;r--;
            }else{
                r--;
            }
            ans++;
        }
        ans+=l==r;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}