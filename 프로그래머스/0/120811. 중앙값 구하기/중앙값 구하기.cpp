#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array)
{
    int answer = 0;

    vector<int>::iterator mid = array.begin() + array.size() / 2;
    
    nth_element(array.begin(), mid, array.end());
    
    answer = *mid;
    
    return answer;
}
