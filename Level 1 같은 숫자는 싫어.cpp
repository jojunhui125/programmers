#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    int pos=0;
    
    for(int i=0;i<arr.size();i++)
    {
        if(answer[pos]!=arr[i])
        {
            answer.push_back(arr[i]);
            pos++;
        }
    }

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    cout << "Hello Cpp" << endl;

    return answer;
}
