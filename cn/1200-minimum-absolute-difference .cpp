#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>v;
        int cha=INT_MAX;
        std::sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i]-arr[i-1]<cha){
                v.clear();
                v.push_back({arr[i-1],arr[i]});
                cha=arr[i]-arr[i-1];
            }else if (arr[i]-arr[i-1]==cha){
                v.push_back({arr[i-1],arr[i]});
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}