//
//  compare_number_2070.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/24.
//

#include <iostream>
#include <vector>

using namespace std;
struct VectorType{
    int vectorNumber[3]={0,};
};
char compare(int firstNumber, int secondNumber){
    char sign = firstNumber>secondNumber ?  '>': (firstNumber==secondNumber?'=':'<');
    return sign;
}
int main(void){
    int caseNumber =0;
    vector<VectorType> myArray;
    VectorType tempVector;
    cin>>caseNumber;
    for(int tempCase=0;tempCase<caseNumber;tempCase++){
        for(int tempNumber=1;tempNumber<=2;tempNumber++){
            cin>>tempVector.vectorNumber[tempNumber];
        }
        myArray.push_back(tempVector);
    }
    
    for(int tempCase=0;tempCase<caseNumber;tempCase++){
        cout<<"#"<<tempCase+1<<" "<<compare(myArray[tempCase].vectorNumber[1],myArray[tempCase].vectorNumber[2])<<endl;
    }
    
return 0;
}
