#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool square(double a)
{
    if(a==1)
    {
        return true;
    }
    for(double i=2;i<=31;i++)
    {
        if(i==sqrt(a))
        {
            return true;
        }
    }
    return false;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i=left;i<=right;i++)
    {
        if(square(i))
        {
            answer-=i;
        }
        else
        {
            answer+=i;
        }
    }
    return answer;
}
