#include <iostream>

using namespace std;

void printDigits(int n){
    if (n < 10){
        cout << n << " ";
        return;
    }

    printDigits(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;
        if(n == 0){
            cout << 0;
        } else {
            printDigits(n);
        }
        cout << endl;
    }

    return 0;
}
