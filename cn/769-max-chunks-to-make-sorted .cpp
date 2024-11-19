#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int pos=0,max_pos=arr[0],ans=0;
        while (pos<arr.size()){
            if (pos==max_pos){
                ans++;pos++;
                if (pos==arr.size())
                    break;
                max_pos=arr[pos];
            }else{
                max_pos= max(max_pos,arr[++pos]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}