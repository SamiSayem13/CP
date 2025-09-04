#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> leftHeap; // max-heap (lower half)
    priority_queue<int, vector<int>, greater<int>> rightHeap; // min-heap (upper half)

    int n;
    while (cin >> n) {
        if (n == 0) break; // terminate

        if (n > 0) {
            // Insert into one of the heaps
            if (leftHeap.empty() || n <= leftHeap.top()) {
                leftHeap.push(n);
            } else {
                rightHeap.push(n);
            }

            // Balance heaps: size(left) >= size(right), and differ at most by 1
            if (leftHeap.size() > rightHeap.size() + 1) {
                rightHeap.push(leftHeap.top());
                leftHeap.pop();
            } else if (rightHeap.size() > leftHeap.size()) {
                leftHeap.push(rightHeap.top());
                rightHeap.pop();
            }
        }
        else if (n == -1) {
            // Median is always at leftHeap.top()
            cout << leftHeap.top() << " ";
            leftHeap.pop();

            // Rebalance if needed
            if (leftHeap.size() < rightHeap.size()) {
                leftHeap.push(rightHeap.top());
                rightHeap.pop();
            }
        }
    }
    return 0;
}
