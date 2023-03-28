//
//  find_middle_number_2063.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/26.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct VectorType{
    int vectorNumber[200]={0,};
};
int main(void){
    int caseNumber=0;
    vector<VectorType> myArray;
    VectorType tempVector;
    cin>>caseNumber;
    for(int testNumber=1;testNumber<=caseNumber;testNumber++){
        cin>>tempVector.vectorNumber[testNumber];
    }
    myArray.push_back(tempVector);
    sort(myArray[0].vectorNumber,myArray[0].vectorNumber+caseNumber+1);
    cout<<myArray[0].vectorNumber[(caseNumber+1)/2];
return 0;
}
