#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left=10;
    int right=12;

    
    for(int i=0;i<numbers.size();i++)
    {
        if(numbers[i]==1 || numbers[i]==4 || numbers[i]==7)
        {
            answer+="L";
            left=numbers[i];
        }
        else if(numbers[i]==3 || numbers[i]==6 || numbers[i]==9)
        {
            answer+="R";
            right=numbers[i];
        }
        else 
		{ 
			if(numbers[i] == 0) numbers[i] = 11; 
			int left_distance = abs((left - 1)/3 - (numbers[i] - 1)/3) + abs((left - 1)%3 - (numbers[i] - 1)%3); 
			int right_distance = abs((right - 1)/3 - (numbers[i] - 1)/3) + abs((right - 1)%3 - (numbers[i] - 1)%3); 
			if(left_distance > right_distance) 
			{ 
				answer += "R"; 
				right = numbers[i]; 
			} 
			else if(left_distance < right_distance) 
			{ 
				answer += "L"; 
				left = numbers[i]; 
			} else 
			{ 
				if(hand == "right") 
				{ 
					answer += "R"; 
					right = numbers[i]; 
				} 
				else 
				{ 
					answer += "L"; 
					left = numbers[i]; 
				} 
			}
		}


    }
    return answer;
}
