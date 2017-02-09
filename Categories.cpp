//
//  Categories.cpp
//  
//
//  Created by Peter Asmussen on 07/02/2017.
//
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> points;
    
    int i;
    while(true){
        cin >> i;
        if(cin.fail()){
            break;
        }
        
        points.push_back(i);
        
    }
    
    int good_min, excellent_min;
    
    int avg1, avg2, poor, excellent;
    
    for (int i = 1; i<=points.size(); i++) {
        avg1 += points[i];
    }
    
    avg2 = avg1/points.size();
    poor = avg2-(avg2*0.25);
    excellent = avg2+(avg2*0.25);

    for (int i = 0; i<=points.size(); i++) {
        if(points[i]>poor && points[i]<excellent){
            good_min = points[i];
        }
        if(points[i]>=excellent){
            excellent_min = points[i];
        }
    }
    
    cout << "good >= " << good_min << " excellent >= " << excellent_min << endl;
}



