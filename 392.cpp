#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    Solution obj;
    cout<<obj.isSubsequence(s,t);
    return 0;
}

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.length()&&j<t.length())
        {
            if(s[i]==t[j])
            {
                i++;j++;

            }
            else
            {
                j++;
            }
        }
        return (i==s.length());
        
    }
};