#include<iostream>
#include<math.h>
using namespace std;

float CtoF(float temp){
    float f = (temp * 9/5) + 32;
    return f;
}

float FtoC(float temp){
    float c = (temp - 32) * 5/9;
    return c;
}

int main(){
    float c, f;
    int n;
    cout << "enter the option \n1. Celcius To Farenheit \n2. Farenheit to celcius " <<endl;
    cin >> n;
    if(n==1){
        cout << "enter temperature in celcius:" <<endl;
        cin >> c;
        cout << "the temperature is : " << CtoF(c);
    }

    else if(n==2){
        cout << "enter temperature in Farenheit:" <<endl;
        cin >> f;
        cout << "the temperature is : " << FtoC(f);
    }
    else{
        cout << "enter a valid option and try again...";
    }
    return 0;
}