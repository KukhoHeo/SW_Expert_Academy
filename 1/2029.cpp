//
//  divide_2029.cpp
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
    vector<VectorType> myArray;
    VectorType tempVector;
    int caseNumber=0;
    cin>>caseNumber;
    for(int testNumber=1;testNumber<=caseNumber;testNumber++){
        for(int vectorNumber=1; vectorNumber<=2;vectorNumber++){
            cin>>tempVector.vectorNumber[vectorNumber];
        }
        myArray.push_back(tempVector);
    }
    for(int testNumber=0;testNumber<caseNumber;testNumber++){
        cout<<"#"<<testNumber+1<<" "<<myArray[testNumber].vectorNumber[1]/myArray[testNumber].vectorNumber[2]<<" "<<myArray[testNumber].vectorNumber[1]%myArray[testNumber].vectorNumber[2]<<endl;
    }
    
return 0;
}
