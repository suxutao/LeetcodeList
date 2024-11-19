#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    int calPoints(vector<string>& operations) {
        int ans=0;
        for (auto&i:operations) {
            if (i=="C"){
                ans-=v[v.size()-1];
                v.pop_back();
            }else if (i=="D"){
                ans+=v[v.size()-1]*2;
                v.push_back(v[v.size()-1]*2);
            }else if (i=="+"){
                ans+=v[v.size()-1]+v[v.size()-2];
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }else{
                int a= stoi(i);
                ans+=a;
                v.push_back(a);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}