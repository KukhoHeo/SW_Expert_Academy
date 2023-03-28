//
//  add_digit_2058.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/26.
//

#include <iostream>
#include <vector>
struct VectorType{
    int vectorNumber[5]={0,};
};
using namespace std;

int main(void){
    vector<VectorType> myArray;
    VectorType tempVector;
    int tempNumber=0,result=0;
    cin>>tempNumber;
    for(int testCase=1;testCase<=4;testCase++){
        tempVector.vectorNumber[testCase]=(tempNumber%10);
        tempNumber/=10;
    }
    myArray.push_back(tempVector);
    for(int testCase=1;testCase<=4;testCase++){
        result+=myArray[0].vectorNumber[testCase];
    }
    cout<<result<<endl;
return 0;
}
