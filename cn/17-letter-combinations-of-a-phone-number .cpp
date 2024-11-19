#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string>v;
    queue<string>q;
    string s;
    void hui(string str,int l,int r){
        for (int i = l; i <= r; ++i) {
            switch (str[i]) {
                case '2':
                    if(q.empty()){
                        q.push("a");
                        q.push("b");
                        q.push("c");
                    }else{
                        int x=q.size();
                        for (int j = 0; j < x; ++j) {
                            string y=q.front();
                            q.pop();
                            q.push(y+"a");
                            q.push(y+"b");
                            q.push(y+"c");
                        }
                    }
                    break;
                    case '3':
                    if(q.empty()){
                        q.push("d");
                        q.push("e");
                        q.push("f");
                    }else{
                        int x=q.size();
                        for (int j = 0; j < x; ++j) {
                            string y=q.front();
                            q.pop();
                            q.push(y+"d");
                            q.push(y+"e");
                            q.push(y+"f");
                        }
                    }
                    break;case '4':
                    if(q.empty()){
                        q.push("g");
                        q.push("h");
                        q.push("i");
                    }else{
                        int x=q.size();
                        for (int j = 0; j < x; ++j) {
                            string y=q.front();
                            q.pop();
                            q.push(y+"g");
                            q.push(y+"h");
                            q.push(y+"i");
                        }
                    }
                    break;case '5':
                    if(q.empty()){
                        q.push("j");
                        q.push("k");
                        q.push("l");
                    }else{
                        int x=q.size();
                        for (int j = 0; j < x; ++j) {
                            string y=q.front();
                            q.pop();
                            q.push(y+"j");
                            q.push(y+"k");
                            q.push(y+"l");
                        }
                    }
                    break;case '6':
                    if(q.empty()){
                        q.push("m");
                        q.push("n");
                        q.push("o");
                    }else{
                        int x=q.size();
                        for (int j = 0; j < x; ++j) {
                            string y=q.front();
                            q.pop();
                            q.push(y+"m");
                            q.push(y+"n");
                            q.push(y+"o");
                        }
                    }
                    break;case '7':
                    if(q.empty()){
                        q.push("p");
                        q.push("q");
                        q.push("r");
                        q.push("s");
                    }else{
                        int x=q.size();
                        for (int j = 0; j < x; ++j) {
                            string y=q.front();
                            q.pop();
                            q.push(y+"p");
                            q.push(y+"q");
                            q.push(y+"r");
                            q.push(y+"s");
                        }
                    }
                    break;case '8':
                    if(q.empty()){
                        q.push("t");
                        q.push("u");
                        q.push("v");
                    }else{
                        int x=q.size();
                        for (int j = 0; j < x; ++j) {
                            string y=q.front();
                            q.pop();
                            q.push(y+"t");
                            q.push(y+"u");
                            q.push(y+"v");
                        }
                    }
                    break;case '9':
                    if(q.empty()){
                        q.push("w");
                        q.push("x");
                        q.push("y");
                        q.push("z");
                    }else{
                        int x=q.size();
                        for (int j = 0; j < x; ++j) {
                            string y=q.front();
                            q.pop();
                            q.push(y+"w");
                            q.push(y+"x");
                            q.push(y+"y");
                            q.push(y+"z");
                        }
                    }
                    break;
            }
        }
        int a=q.size();
        for (int i = 0; i < a; ++i) {
            v.push_back(q.front());
            q.pop();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits=="")
            return {};
        hui(digits,0,digits.length()-1);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}