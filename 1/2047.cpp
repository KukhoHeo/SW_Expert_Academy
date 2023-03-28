//
//  small_capital_2047.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/27.
//

#include <iostream>
#include <vector>
using namespace std;

struct vectorType{
    string vectorString;
};
int main(void){
    vector<vectorType> myArray;
    vectorType tempVector;
    cin>>tempVector.vectorString;
    myArray.push_back(tempVector);
    
    for(int testNumber=0;testNumber<myArray[0].vectorString.size();testNumber++){
        if((97<=myArray[0].vectorString[testNumber]&&myArray[0].vectorString[testNumber]<=122)){
            cout<<char(myArray[0].vectorString[testNumber]-32);
        }
        else
            cout<<myArray[0].vectorString[testNumber];
    }
return 0;
}
