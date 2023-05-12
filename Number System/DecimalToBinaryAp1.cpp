#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int power = 1;

    while(n != 0){

        int remainder = n % 2;
        n = n/2;
        ans = ans + remainder * power;
        power = power * 10;
    }

    cout << ans;
    return 0 ;

}
