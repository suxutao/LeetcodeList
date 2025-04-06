#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n1=list1.size(),n2=list2.size(),mn=INT_MAX;
        vector<string>ans;
        unordered_map<string,int>m;
        for (int i = 0; i < n1; ++i) {
            m[list1[i]]=i;
        }
        for (int i = 0; i < n2; ++i) {
            if (m.contains(list2[i])&&m[list2[i]]+i<mn){
                mn=m[list2[i]]+i;
                ans={list2[i]};
            }else if (m.contains(list2[i])&&m[list2[i]]+i==mn){
                ans.push_back(list2[i]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}