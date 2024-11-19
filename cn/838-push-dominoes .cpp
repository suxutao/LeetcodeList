#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        if (n==1)
            return dominoes;
        bool a=true;
        vector<int>v(n,0);
        for (int i = 0; i < n; ++i) {
            if (dominoes[i]!='.')
                v[i]=1;
        }
        while (a){
            a= false;
            for (int i = 0; i < n; ++i) {
                if (v[i]==2)
                    v[i]=1;
            }
            if (!v[0]&&dominoes[1]=='L'){
                dominoes[0]='L';
                v[0]=2;
                a= true;
            }
            if (!v[n-1]&&dominoes[n-2]=='R'){
                dominoes[n-1]='R';
                v[n-1]=2;
                a= true;
            }
            for (int i = 1; i < n-1; ++i) {
                if (!v[i]){
                    if (dominoes[i-1]=='R'&&v[i-1]==1&&dominoes[i+1]=='L'&&v[i+1]==1) {
                        v[i] = 2, a = true;
                    }else if (dominoes[i-1]=='R'&&v[i-1]==1){
                        dominoes[i]='R';
                        a= true;v[i]=2;
                    }else if (dominoes[i+1]=='L'&&v[i+1]==1){
                        dominoes[i]='L';
                        a=true;v[i]=2;
                    }
                }
            }
        }
        return dominoes;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}