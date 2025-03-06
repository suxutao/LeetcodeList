#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Bank {
    using ll = long long;
public:
    int n;
    vector<ll>balance;
    Bank(vector<long long>& balance) {
        balance.insert(balance.begin(),0);
        this->balance=balance;
        n=balance.size()-1;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if (account1>n||account2>n)
            return false;
        if (balance[account1]<money)
            return false;
        balance[account2]+=money;
        balance[account1]-=money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if (account>n)
            return false;
        balance[account]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if (account>n||balance[account]<money)
            return false;
        balance[account]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}