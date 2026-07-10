#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    int temp1 = 0, temp2 = 1;
    
    for (int i = 0; i < num_list.size(); i++)
    {
        temp1 += num_list[i];
        temp2 *= num_list[i];
    }
    
    if (temp2 < (temp1 * temp1))
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }
    
    return answer;
}
