#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) 
{
    while (b) 
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
    vector<int> answer;

    int number_tmp = (numer1 * denom2) + (numer2 * denom1);
    int denom_tmp = denom1 * denom2;

    int g = gcd(abs(number_tmp), abs(denom_tmp));

    answer.push_back(number_tmp / g);
    answer.push_back(denom_tmp / g);

    return answer;
}