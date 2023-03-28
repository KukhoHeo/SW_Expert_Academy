//
//  add_nline_2025.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/27.
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
    int result=0;
    cin>>tempVector.vectorNumber;
    myArray.push_back(tempVector);
    for(int testNumber=1;testNumber<=myArray[0].vectorNumber;testNumber++){
        result+=testNumber;
    }
    cout<<result;
return 0;
}
