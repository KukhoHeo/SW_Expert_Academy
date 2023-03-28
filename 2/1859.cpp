//
//  millionaire_1859.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/30.
//

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct VectorType {
    int dayNumber;
    int * dayPrice;
};
int main(void){
    vector<VectorType> myArray;
    VectorType tempVector;
    int caseNumber=0;
    cin>>caseNumber;
    for(int testNumber=1;testNumber<=caseNumber;testNumber++){
        cin>>tempVector.dayNumber;
        tempVector.dayPrice=new int[tempVector.dayNumber+1];
        for(int testDay=1;testDay<=tempVector.dayNumber;testDay++){
            cin>>tempVector.dayPrice[testDay];
        }
        myArray.push_back(tempVector);
    }
    for(int testNumber=0;testNumber<caseNumber;testNumber++){
        unsigned long long int result =0;
        int tempNumber=myArray[testNumber].dayPrice[myArray[testNumber].dayNumber];
        for(int testDay=myArray[testNumber].dayNumber-1;testDay>=1;testDay--){
            if(tempNumber>myArray[testNumber].dayPrice[testDay])
                result+=(tempNumber-myArray[testNumber].dayPrice[testDay]);
            else{
                tempNumber=myArray[testNumber].dayPrice[testDay];
            }
        }
        cout<<"#"<<testNumber+1<<" "<<result<<endl;
    }
    
    
    return 0;
}
