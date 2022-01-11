#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    int n=a.size();
    
    int pos=0;
    
    while(pos<n)
    {
        answer+=a[pos]*b[pos];
        pos++;
    
    }
    return answer;
}
