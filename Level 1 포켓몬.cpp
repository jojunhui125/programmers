#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int len=nums.size()/2;
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    
   
    if(len>nums.size()) // 3>2
    {
        answer=nums.size();
    }
    else
    {
        answer=len;
    }
    
    
    
    
    return answer;
}
