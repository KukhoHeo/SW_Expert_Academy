//
//  stamp_2046.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/27.
//

#include <iostream>
#include <vector>
using namespace std;

struct VectorType{
    int vectorNumber;
};
int main(void){
    vector<VectorType> myArray;
    VectorType tempVector;
    cin>>tempVector.vectorNumber;
    myArray.push_back(tempVector);
    for(int testNumber=1;testNumber<=myArray[0].vectorNumber;testNumber++){
        cout<<"#";
    }
return 0;
}
