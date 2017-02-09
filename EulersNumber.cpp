//
//  EulersNumber.cpp
//  
//
//  Created by Peter Asmussen on 07/02/2017.
//
//
#include<iostream>

using namespace std;

double approx_e(int k){
    
    double result = 2.0;
    double factorial = 1.0;
    
    for (int i = 2; i<k; i++) {
        factorial *= i;
        result +=1/factorial;
    }
    return result;
    
}


int main(){
    int k;
    cin >> k;
    
    cout << approx_e(k) << endl;
    return 0;
}
