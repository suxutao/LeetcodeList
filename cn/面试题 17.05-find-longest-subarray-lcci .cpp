#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> findLongestSubarray(vector<string>& array) {
        vector<string>v;
        int l=INT_MAX,r=0,ch=0,di=0,MAX=0;
        unordered_map<int,int>m;
        m[0]=1;
        for (int i = 0; i < array.size(); ++i) {
            if (isdigit(array[i][0])){
                ++di;
            }else{
                ++ch;
            }
            if (m[ch-di]){
                if (i+2-m[ch-di]>MAX){
                    MAX=i+2-m[ch-di];
                    l=m[ch-di]-1,r=i;
                }else if (i+2-m[ch-di]==MAX&&m[ch-di]-1<l){
                    l=m[ch-di]-1,r=i;
                }
            }else{
                m[ch-di]=i+2;
            }
        }
        for (int i = l; i <= r; ++i) {
            v.push_back(array[i]);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}