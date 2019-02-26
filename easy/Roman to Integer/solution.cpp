#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        short ret = 0;

        for(int i = 1; i <= s.size(); i++)
        {
            if(s[i-1] == 'C' && s[i] == 'M')
            {
                ret += 900;
                i++;
            }
            else if(s[i-1] == 'X' && s[i] == 'C')
            {
                ret += 90;
                i++;
            }
            else if(s[i-1] == 'I' && s[i] == 'V')
            {
                ret += 4;
                i++;
            }
            else if(s[i-1] == 'I' && s[i] == 'X')
            {
                ret += 9;
                i++;
            }
            else if(s[i-1] == 'X' && s[i] == 'L')
            {
                ret += 40;
                i++;
            }
            else if(s[i-1] == 'C' && s[i] == 'D')
            {
                ret += 400;
                i++;
            }
            else if(s[i-1] == 'C')
            {
                ret += 100;
            }
            else if(s[i-1] == 'M')
            {
                ret += 1000;
            }
            else if(s[i-1] == 'X')
            {
                ret += 10;
            }
            else if(s[i-1] == 'I')
            {
                ret += 1;
            }
            else if(s[i-1] == 'L')
            {
                ret += 50;
            }
            else if(s[i-1] == 'V')
            {
                ret += 5;
            }
            else if(s[i-1] == 'D')
            {
                ret += 500;
            }
        }

        return (int)ret;
    }
};