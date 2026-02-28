#include <iostream>

using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
int countVowels(const string &s, int index) {
    if (index == s.length())
        return 0;
    return isVowel(s[index]) + countVowels(s, index + 1);
}

int main()
{
    string S;
    getline(cin, S);
    cout << countVowels(S, 0) << endl;

    return 0;
}
