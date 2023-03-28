//
//  double_2019.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/28.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct VectorType {
    int vectorNumber;
};
int main(void){
    VectorType tempVector;
    vector<VectorType> myArray;
    cin>>tempVector.vectorNumber;
    myArray.push_back(tempVector);
    
    for(int testNumber=0;testNumber<=myArray[0].vectorNumber;testNumber++){
        cout<<pow(2,testNumber)<<" ";
    }
return 0;
}
