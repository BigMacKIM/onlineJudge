#include <iostream>
using namespace std;

int main(){
    long long int DP[91] = {0,1,1,2 };
    for(int i = 4; i <= 90; i++){
        DP[i] = DP[i-1] + DP[i-2];
    }
    int number;
    cin >> number;
    cout << DP[number];


}