#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            if((s[i]+n)>90)
            {
                s[i]+=-26;
            }
            answer+=s[i]+n;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            if((s[i]+n)>122)
            {
                s[i]+=-26;
            }
            answer+=s[i]+n;
        }
        else
        {
            answer+=s[i];
        }
        
    }
    return answer;
}
