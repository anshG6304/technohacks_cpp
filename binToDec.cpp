#include<iostream>
#include<math.h>
using namespace std;


int BinaryToDecimal(int n){
    int ans = 0, i=0;
    while(n!=0){
        int digit = n % 10;
        ans = ans + (digit * pow(2, i));
        i++;
        n = n / 10;
    }


    return ans;
}

int main(){
    int n;
    cout << "Enter a binary number\n";
    cin >> n;
    cout << "The binary to decimal of " << n << " is : " << BinaryToDecimal(n);
    return 0;
}