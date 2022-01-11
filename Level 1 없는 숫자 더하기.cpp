#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num[10];
int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<10;i++)
    {
        num[i]=i;
    }
    
    for(int i=0;i<numbers.size();i++)
    {
        num[numbers[i]]=0;
    }
    
    for(int i=0;i<10;i++)
    {
        if(num[i]!=0)
        {
            answer+=i;
        }
    }
    
    return answer;
}
