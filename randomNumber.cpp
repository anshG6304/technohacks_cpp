#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int main(){
    int lb , ub;
    cout << "Enter the lower bound and Upper Bound" <<endl;
    cin >> lb >> ub;
    cout << (rand() % (ub - lb + 1)) + lb;
    return 0;
}