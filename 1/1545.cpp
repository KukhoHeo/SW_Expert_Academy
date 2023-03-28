//
//  reverse_1545.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/28.
//

#include <iostream>
#include <vector>
using namespace std;

struct VectorType {
    int vectorNumber;
};
int main(void){
    VectorType tempVector;
    vector<VectorType> myArray;
    cin>>tempVector.vectorNumber;
    myArray.push_back(tempVector);
    
    for(int testNumber=myArray[0].vectorNumber;testNumber>=0;testNumber--){
        cout<<testNumber<<" ";
    }
return 0;
}
