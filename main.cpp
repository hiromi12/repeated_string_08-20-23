/**
 * 08-20-23
 * 
 * Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.
*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int len = 1; len <= n / 2; ++len) {
            if (n % len == 0) {
                bool isPossible = true;
                for (int i = len; i < n; ++i) {
                    if (s[i] != s[i % len]) {
                        isPossible = false;
                        break;
                    }
                }
                if (isPossible) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution s;
    string strg = "ababa";

    if (s.repeatedSubstringPattern(strg)) {
        cout << "String can be constructed." << endl;
    } else {
        cout << "String cannot be constructed." << endl;
    }

    return 0;
}