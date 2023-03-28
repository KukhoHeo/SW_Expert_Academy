//
//  maximum_number_2068.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/24.
//

#include <iostream>
#include <vector>

using namespace std;
struct VectorType{
    int vectorNumber[11]={0,};
};
int Maximum(int * myArray){
    int maximum=0;
    for(int arrayNumber=1;arrayNumber<=10;arrayNumber++){
        if(myArray[arrayNumber]>=maximum)
            maximum=myArray[arrayNumber];
    }
    return maximum;
}

int main(void){
    int caseNumber=0;
    VectorType tempVector;
    vector<VectorType> myArray;
    cin>>caseNumber;
    for(int testNumber=0;testNumber<caseNumber;testNumber++){
        for(int vectorNumber=1;vectorNumber<=10;vectorNumber++){
            cin>>tempVector.vectorNumber[vectorNumber];
        }
        myArray.push_back(tempVector);
    }
    for(int testNumber=0;testNumber<caseNumber;testNumber++){
        cout<<"#"<<testNumber+1<<" "<<Maximum(myArray[testNumber].vectorNumber)<<endl;
    }
return 0;
}
