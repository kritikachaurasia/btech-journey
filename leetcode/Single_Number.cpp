       // LEETCODE -- 136-- SINGLE NUMBER
       // DIFFICULTY-- EASY
       // APPROACH -- XOR OPERATOR

       
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int val : nums){
            ans^=val;

        }
        return ans;
    }
};