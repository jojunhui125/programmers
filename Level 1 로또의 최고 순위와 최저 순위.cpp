#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int sum=0;
    int zeronum=0;
    
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(lottos[i]==win_nums[j])
            {
                sum++;
                break;
            }
        }
        if(lottos[i]==0)
        {
            zeronum++;
        }
    }
    if((sum+zeronum)>=2)
    {
        answer.push_back(7-(sum+zeronum));
    }
    else
    {
        answer.push_back(6);
    }
    
    if(sum>=2)
    {
        answer.push_back(7-sum);
    }
    else
    {
        answer.push_back(6);
    }
    
    
    
    return answer;
}
