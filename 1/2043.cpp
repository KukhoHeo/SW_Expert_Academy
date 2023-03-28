//
//  password_2043.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/27.
//

#include <iostream>
#include <vector>
using namespace std;

struct VectorType{
    int vectorNumber[3];
};
int main(void){
    VectorType tempVector;
    vector<VectorType> myArray;
    int result=0;
    for(int vectorNumber=1; vectorNumber<=2;vectorNumber++){
        cin>>tempVector.vectorNumber[vectorNumber];
    }
    myArray.push_back(tempVector);
    for(int testNumber=myArray[0].vectorNumber[2]; testNumber<=999;testNumber++){
        if(testNumber<=myArray[0].vectorNumber[1]){
            result+=1;
        }
    }
    cout<<result;
return 0;
}
