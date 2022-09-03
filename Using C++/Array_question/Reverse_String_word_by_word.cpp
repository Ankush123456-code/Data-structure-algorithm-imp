#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
using namespace std;
void Reverse_word_by_word(string &s)
{
    int start = 0;
    int end;
    for (end = 0; end < s.length(); end++)
    {
        if (s[end] == ' ')
        {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }
    reverse(s.begin() + start, s.end());
    reverse(s.begin(), s.end());
}

int main()
{
    string str = "I am Ankush";
    Reverse_word_by_word(str);
    cout << str << endl;
    return 0;
}