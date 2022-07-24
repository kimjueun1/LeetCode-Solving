class Solution {
public:
    int getNumber(int n){
        switch(n){
            case 'V': { return 5; }
            case 'X': { return 10; }
            case 'L': { return 50; }
            case 'C': { return 100; }
            case 'D': { return 500; }
            case 'M': { return 1000; }
            default: { return 1; }
        }
    }
    int romanToInt(string s) {
        int result=0;
        for(int i=0; i<s.length(); i++){
            int num = getNumber(s[i]);
              if (i + 1 == s.length()) {
                result += num;
                continue;
            }
            char next = s[i + 1];
            if (num < getNumber(next)) 
                result -= num;
            else 
                result += num;
        }
        return result;
    }
};