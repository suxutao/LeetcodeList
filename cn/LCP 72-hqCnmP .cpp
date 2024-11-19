#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> supplyWagon(vector<int>& supplies) {
        int pos=0,a,sz=supplies.size()/2;
        while (supplies.size()>sz){
            a=INT_MAX;
            for (int i = 0; i < supplies.size()-1; ++i) {
                if (supplies[i]+supplies[i+1]<a){
                    a=supplies[i]+supplies[i+1];
                    pos=i;
                }
            }
            supplies[pos]=supplies[pos]+supplies[pos+1];
            supplies.erase(supplies.begin()+pos+1);
        }
        return supplies;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}