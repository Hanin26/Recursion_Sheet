#include <iostream>

using namespace std;

void EvenReverse(int arr[], int i) {
    if (i < 0){
            return;
    }
    cout << arr[i] << " ";
    EvenReverse(arr, i - 2);
}

int main()
{
     int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int lastEven = (N - 1) % 2 == 0 ? N - 1 : N - 2;

   EvenReverse(A, lastEven);


    return 0;
}

