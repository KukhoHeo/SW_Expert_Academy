//
//  rock_sissor_paper_1936.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/28.
//

#include <iostream>
#include <vector>
using namespace std;

struct VectorType {
    int vectorNumber[3];
};
int main(void){
    VectorType tempVector;
    vector<VectorType> myArray;
    for(int vectorNumber=1;vectorNumber<=2;vectorNumber++){
        cin>>tempVector.vectorNumber[vectorNumber];
    }
    myArray.push_back(tempVector);
    if(myArray[0].vectorNumber[1]-myArray[0].vectorNumber[2]==1||myArray[0].vectorNumber[1]-myArray[0].vectorNumber[2]==-2)
        cout<<"A";
    else
        cout<<"B";
return 0;
}
