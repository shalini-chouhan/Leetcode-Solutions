#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int countthesetbits(int n) {
    int c = 0;
    while (n) {
      n = n & (n - 1);
      c++;
    }
    return c;
  }
  vector<int> countBits(int n) {
    vector<int> result;
    for (int i = 0; i <= n; i++) {
      result.push_back(countthesetbits(i));
    }

    return result;
  }
};