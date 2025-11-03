//
//  main.cpp
//  algorithmActivity
//
//  Created by Gabriela Avila on 11/2/25.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

double mult(double& n){
    n = n * 2;
   return n;
}

double areaCircle(double& n){
    n = n * n * 3.14;
    return n;
}

double extraC(double& n){
    n = n + 5;
    return n;
}


int main() {
   
    
    vector<double> vec = {1, 2, 3, 4, 5};
    
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    for_each_n(vec.begin(), 3, mult);
    cout << endl;
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    
    
    cout << endl;
    vector<double> vec2 = {23, 2.2, 32.3, 114, 25, 21, 1};
    for(int i = 0; i < vec2.size(); i++){
        cout << vec2[i] << " ";
    }
    for_each_n(vec2.begin(), 2, areaCircle);
    cout << endl;
    for(int i = 0; i < vec2.size(); i++){
        cout << vec2[i] << " ";
    }
    
    
    cout << endl;
    vector<double> vec3 = {80, 76, 33, 100, 102, 98, 90, 78};
    for(int i = 0; i < vec3.size(); i++){
        cout << vec3[i] << " ";
    }
    for_each_n(vec3.begin(), 5, extraC);
    cout << endl;
    for(int i = 0; i < vec3.size(); i++){
        cout << vec3[i] << " ";
    }
}
