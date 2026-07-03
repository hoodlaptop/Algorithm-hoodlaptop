#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    string temp1 = to_string(a) + to_string(b);
    string temp2 = to_string(b) + to_string(a);
    
    answer = stoi(temp1) > stoi(temp2) ? stoi(temp1) : stoi(temp2);
    
    return answer;
}