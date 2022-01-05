#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pos=1;
    int sum=0;
    int tmp;
    tmp=n;

    n--;
    while(n>0)
    {
        pos++;
        n=n-pos;
        if(n%pos==0)
        {
            answer++;
        }
        
    }
    answer++;
    return answer;
}
