#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int i=0;
    for(i=0;i<arr.size();i++)
    {
        answer+=arr[i];
    }
    answer/=i;
    
    return answer;
}
