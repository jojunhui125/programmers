#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
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
