#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if (k>arr.size())
            return *std::max_element(arr.begin(), arr.end());
        int count=0,ans=arr[0],shang= max(arr[0],arr[1]);
        deque<int>d(arr.begin()+1,arr.end());
        while (count<k){
            int a=d.front();d.pop_front();
            if (ans<a)
                swap(ans,a);
            d.push_back(a);
            if (shang==ans){
                count++;
            }else{
                shang=ans;
                count=1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}