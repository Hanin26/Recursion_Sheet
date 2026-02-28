#include <iostream>

using namespace std;

void bin(int n){
    if(n<=0){
        return;
    }
    bin(n / 2);
    cout << n % 2;
}
int main()
{
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        bin(n);
         cout<<endl;
    }

    return 0;
}
