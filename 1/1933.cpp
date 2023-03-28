//
//  aliquot_1933.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/28.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct VectorType {
    int vectorNumber;
};
int main(void){
    VectorType tempVector;
    vector<VectorType> myArray;
    vector<int> aliquot;
    cin>>tempVector.vectorNumber;
    myArray.push_back(tempVector);
    for(int testNumber=1;testNumber<=myArray[0].vectorNumber;testNumber++){
        if(myArray[0].vectorNumber%testNumber==0){
            aliquot.push_back(testNumber);
        }
    }
    sort(aliquot.begin(),aliquot.end());
    for(auto print: aliquot){
        cout<<print<<" ";
    }
return 0;
}
