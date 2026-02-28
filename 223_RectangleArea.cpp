#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a1 = abs(ax1-ax2)*abs(ay1-ay2);
        int a2 = abs(bx1-bx2)*abs(by1-by2);
  
        int w = max(0,min(ax2,bx2) - max(ax1,bx1));
        int l = max(0,min(ay2,by2) - max(ay1,by1));

        int a3 = l*w;

        int area = a1+a2-a3;
            return area;
    }
};
int main() {
    Solution sol;
    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
    cout << "Enter coordinates for rectangle A (ax1 ay1 ax2 ay2): ";
    cin >> ax1 >> ay1 >> ax2 >> ay2;
    cout << "Enter coordinates for rectangle B (bx1 by1 bx2 by2): ";
    cin >> bx1 >> by1 >> bx2 >> by2;

    int area = sol.computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
    cout << "The total area covered by the two rectangles is: " << area << endl;

    return 0;
}