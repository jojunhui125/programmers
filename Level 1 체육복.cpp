#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {

    int answer = n;
    int cnt=0;
    int num=n-lost.size();

    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    if(reserve.size()==0)
    {
        return num;
    }


    for(int i=0;i<lost.size();i++)
    {
        for(int j=0;j<reserve.size();j++)
        {
            if(lost[i]==reserve[j])
            {
                cnt++;
                lost[i]=-50;
                reserve[j]=-100;
                break;
            }
        }
    }


    for(int i=0;i<lost.size();i++)
    {
        for(int j=0;j<reserve.size();j++)
        {
            if((lost[i]-1)==reserve[j] || (lost[i]+1)==reserve[j])
            {
                cnt++;
                lost[i]=-50;
                reserve[j]=-100;
                break;
            }
        }
    }
    answer=answer-lost.size()+cnt;

    return answer;
}
