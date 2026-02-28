#include <iostream>

using namespace std;

void printStars(int count) {
    if (count == 0) return;
    cout << "*";
    printStars(count - 1);
}
void InvertedPyramid(int row, int N) {
    if (row > N)
        return;
    printStars(2*(N - row + 1) - 1);
    cout << endl;
    InvertedPyramid(row + 1, N);
}

int main()
{
    int N;
    cin >> N;
    InvertedPyramid(1, N);
    return 0;
}
