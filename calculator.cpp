#include<iostream>
#include<math.h>
using namespace std;


int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int subt(int a, int b){
    int difference;
    difference = a - b;
    return difference;
}

int multiply(int a, int b){
    int product;
    product = a * b;
    return product;
}

int divide(int a, int b){
    int quotient;
    quotient = a / b;
    return quotient;
}


int main(){
    int a, b; 
    int o;
    cout << "Enter two numbers" <<endl;
    cin >> a >> b;
    cout << "Enter the operator: \n1.addition \n2.subtraction \n3.Multiplication \n4.Division" <<endl;
    cin >> o;

    switch(o){
        case 1:
            cout << "The answer is : " << add(a,b);
            break;
        case 2:
            cout << "The answer is : " << subt(a,b);
            break;
        case 3:
            cout << "The answer is : " << multiply(a,b);
            break;
        case 4:
            cout << "The answer is : " << divide(a,b);
            break;
    }

    

    return 0;
}