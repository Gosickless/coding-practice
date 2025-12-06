//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    string reverseWords(string s) {
//        string res;
//        int tail = s.size() - 1;
//        while (tail > 0 && s[tail] == ' ') {
//            tail--;
//        }
//        int head = tail;
//        while (tail >= 0) {
//            while (tail >= 0 && s[tail] != ' ') {
//                tail--;
//            }
//            res += s.substr(tail + 1, head - tail) + ' ';
//            while (tail >= 0 && s[tail] == ' ') {
//                tail--;
//            }
//            head = tail;
//        }
//        return res.substr(0, res.size() - 1);
//    }
//};
//
//int main() {
//    string in, out;
//    getline(cin, in);
//    Solution s;
//    out = s.reverseWords(in);
//    cout << out;
//    return 0;
//}
