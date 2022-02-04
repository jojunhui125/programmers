#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    if(n<10)
    {
        return n;
    }
    while(1)
    {
        if(n==0)
        {
            break;
        }
        answer+=n%10;
        n/=10;
        
    }

    return answer;
}
