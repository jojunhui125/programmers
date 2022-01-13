#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int test1[5] = {1, 2, 3, 4, 5};
int test2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int test3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> result;
    int count[3]={0,0,0};
    int maxi=0;
    
    for(int i=0;i<answers.size();i++)
    {
        if(answers[i]==test1[i%5])
        {
            count[0]++;
        }
        if(answers[i]==test2[i%8])
        {
            count[1]++;
        }
        if(answers[i]==test3[i%10])
        {
            count[2]++;
        }
    }
    maxi=max( max(count[0],count[1]), count[2] );
    
    for(int i=0;i<3;i++)
    {
        if(count[i]==maxi)
        {
            result.push_back(i+1);
        }
    }
    
    return result;
}
