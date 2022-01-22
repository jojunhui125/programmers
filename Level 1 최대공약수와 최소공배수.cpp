#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int mini=min(n,m);
    
    for(int i=mini;i>0;i--)
    {
        if((n%i==0)&&(m%i==0))
        {
            answer.push_back(i);
            break;
        }
    }
    for(int i=mini;i<=n*m;i++)
    {
        if((i%n==0)&&(i%m==0))
        {
            answer.push_back(i);
            break;
        }
    }
    return answer;
}
