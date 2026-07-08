#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) 
{
    int answer = 0;
    int temp = a;

    for (int i = 0; i < (int)included.size(); i++)
    {
        if (included[i])
        {
            answer += temp;
        }

        temp += d;
    }

    return answer;
}