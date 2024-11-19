#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int arr['z'+1]={0};
        vector<int>v(1,0),vv;
        for (int i = s.length(); i >= 0; --i) {
            if (!arr[s[i]])
                arr[s[i]]=i;
        }
        int MAX=INT_MIN;
        for (int i = 0; i < s.length(); ++i) {
            MAX= max(MAX,arr[s[i]]);
            if (MAX==i){
                v.push_back(MAX+1);
                MAX=arr[s[i+1]];
            }
        }
        for (int i = 1; i < v.size(); ++i) {
            vv.push_back(v[i]-v[i-1]);
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}