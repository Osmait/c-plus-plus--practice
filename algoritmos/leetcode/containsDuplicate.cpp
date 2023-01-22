#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end()) {
                return true;
            }
            s.insert(nums[i]);
        }
        
        return false;
    }

    bool isAnagram(string s , string t){
        if(s.size() != t.size())return false;
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;

        for (int i = 0; i < s.size(); i++)
        {
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        for (int i = 0; i < smap.size(); i++)
        {
            if(smap[i] != tmap[i])return false;

        }
        return true;
        
        
    }
};


int main()
{
    vector<int>n = {1,2,3,1};
    Solution* solucion = new Solution();
   
    cout << solucion->containsDuplicate(n) << endl;
    cout << solucion->isAnagram("anagram","nagaram") << endl;
    cout << n[0] << endl;



    return 0;
}
