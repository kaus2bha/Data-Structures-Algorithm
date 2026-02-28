#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(long int x) {
        for(long int i=0;i<=x;i++){
            if((i*i)==x)
                return i;
            else if ((i*i)>x)
                return i-1;
        }
        return 0;
    }    
};
int main() {
    Solution sol;
    long int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "The integer square root of " << x << " is: " << sol.mySqrt(x) << endl;
    return 0;
}