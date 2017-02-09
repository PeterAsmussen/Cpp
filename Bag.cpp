//
//  Bag.cpp
//  
//
//  Created by Peter Asmussen on 07/02/2017.
//
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Format for outputting elements:
void print(string s, int n){
    cout << n << "x " << s << endl;
}

int main(){
    
    vector<string> items;
    vector<int> counter;
    int count;
    
    string s;
    while(true){
        cin >> s;
        if(s == "stop"){
            break;
        }
        
        items.push_back(s);
    
    }
    
    sort(items.begin(), items.end());
    
    for (int i = 0; i<items.size(); i++) {
        int temp=0;
        for(int j = 0; j<items.size(); j++){
            if(items[i] == items[j]){
                temp++;
            }
            count = temp;
        }
        print(items[i], count);
    }
}
