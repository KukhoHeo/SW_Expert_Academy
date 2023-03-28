//
//  average_2071.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/23.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
struct VectorType{
    double Number[12]={0,};
};
int main(void){
    int testCase =0;
    VectorType tempVector;
    vector<VectorType> myArray;
    
    cin>>testCase;
    for (int caseNumber =1; caseNumber<=testCase;caseNumber++){
        for(int inputNumber =1;inputNumber<=10;inputNumber++){
            cin>>tempVector.Number[inputNumber];
        }
        myArray.push_back(tempVector);
    }
    for (int caseNumber =1; caseNumber<=testCase;caseNumber++){
        double tempSum=0;
        for(int inputNumber = 1; inputNumber<=10;inputNumber++){
            tempSum+=myArray[caseNumber-1].Number[inputNumber];
        }
        myArray[caseNumber-1].Number[11]=tempSum/10;
    }
      for(int caseNumber =1;caseNumber<=testCase;caseNumber++){
        cout<<"#"<<caseNumber<<" "<<round(myArray[caseNumber-1].Number[11])<<endl;
    }
    return 0;
}
