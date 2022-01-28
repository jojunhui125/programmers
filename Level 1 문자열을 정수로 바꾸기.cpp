#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int pos = 1;
    for(int i=s.size();i>=0;i--)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            answer+=(s[i]-'0')*pos;
            pos*=10;
        }
        else if(s[i]==45)
        {
            answer*=-1;
        }
    }
    return answer;
    
}
