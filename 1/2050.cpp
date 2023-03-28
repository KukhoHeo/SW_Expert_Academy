//
//  char_to_number_2050.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/27.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct VectorType{
    string vectorString;
};
int main(void){
    vector<VectorType> myArray;
    VectorType tempVector;
    cin>>tempVector.vectorString;
    myArray.push_back(tempVector);
    for(int testNumber=0;testNumber<myArray[0].vectorString.size();testNumber++){
        cout<<int(myArray[0].vectorString[testNumber])-64<<" ";
    }
return 0;
}
