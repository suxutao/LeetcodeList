#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class AuthenticationManager {
public:
    int ttl;
    unordered_map<string,int>m;
    AuthenticationManager(int timeToLive) {
        ttl=timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        m[tokenId]=currentTime;
    }
    
    void renew(string tokenId, int currentTime) {
        if (!m.contains(tokenId)||m[tokenId]+ttl<=currentTime)
            return;
        m[tokenId]=currentTime;
    }
    
    int countUnexpiredTokens(int currentTime) {
        int ans=0;
        vector<string>v;
        for (auto &[a,b]: m){
            if (b+ttl<=currentTime){
                v.push_back(a);
            }else{
                ans++;
            }
        }
        for (auto &i: v){
            m.erase(i);
        }
        return ans;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}