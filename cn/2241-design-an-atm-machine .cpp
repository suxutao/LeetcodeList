#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class ATM {
public:
    int arr[5]{20,50,100,200,500};
    int cnt[5]{};
    ATM() {
        
    }
    
    void deposit(vector<int> banknotesCount) {
        for (int i = 0; i < 5; ++i) {
            cnt[i]+=banknotesCount[i];
        }
    }
    
    vector<int> withdraw(int amount) {
        int temp=amount;
        for (int i = 4; i >= 0&&temp; --i) {
            temp-=min(cnt[i],temp/arr[i])*arr[i];
        }
        if (temp){
            return {-1};
        }else{
            vector<int>ans(5);
            for (int i = 4; i >= 0&&amount; --i) {
                ans[i]=min(cnt[i],amount/arr[i]);
                cnt[i]-=ans[i];
                amount-=ans[i]*arr[i];
            }
            return ans;
        }
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}