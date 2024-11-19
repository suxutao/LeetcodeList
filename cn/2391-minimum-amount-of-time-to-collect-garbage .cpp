#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans=0,pos_m=0,pos_p=0,pos_g=0;
        vector<int>v(travel.size()+1);
        for (int i = 1; i < v.size(); ++i) {
            v[i]=v[i-1]+travel[i-1];
        }
        for (int i = garbage.size()-1; i >=0 ; --i) {
            if (garbage[i].find('M')!=string::npos){
                pos_m=i;
                break;
            }
        }
        for (int i = 0; i <= pos_m; ++i) {
            ans+= count(garbage[i].begin(), garbage[i].end(),'M');
        }
        for (int i = garbage.size()-1; i >=0 ; --i) {
            if (garbage[i].find('P')!=string::npos){
                pos_p=i;
                break;
            }
        }
        for (int i = 0; i <= pos_p; ++i) {
            ans+= count(garbage[i].begin(), garbage[i].end(),'P');
        }
        for (int i = garbage.size()-1; i >=0 ; --i) {
            if (garbage[i].find('G')!=string::npos){
                pos_g=i;
                break;
            }
        }
        for (int i = 0; i <= pos_g; ++i) {
            ans+= count(garbage[i].begin(), garbage[i].end(),'G');
        }
        ans+=v[pos_m]+v[pos_g]+v[pos_p];
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}