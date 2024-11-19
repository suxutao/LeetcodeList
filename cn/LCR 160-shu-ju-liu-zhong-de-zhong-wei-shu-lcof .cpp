#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MedianFinder {
public:
    priority_queue<double,vector<double>>q1;
    priority_queue<double,vector<double>,greater<>>q2;
    int n;
    MedianFinder() {
        n=0;
    }

    void addNum(int num) {
        if (n){
            if (num>q1.top())
                q2.push(num);
            else
                q1.push(num);
        }else {
            q1.push(num);
            n=1;
        }
        while (q1.size()>1+q2.size()){
            q2.push(q1.top());
            q1.pop();
        }
        while (q2.size()>1+q1.size()){
            q1.push(q2.top());
            q2.pop();
        }
    }

    double findMedian() {
        if (q1.size()>q2.size())
            return q1.top();
        else if (q1.size()==q2.size())
            return (q1.top()+q2.top())/2;
        else
            return q2.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}