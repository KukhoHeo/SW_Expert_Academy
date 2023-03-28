//
//  diagonal_2027.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/27.
//

#include <iostream>
#include <vector>

using namespace std;

struct VectorType {
    int vectorNumber[6];
};
int main(void){
    vector<VectorType> myArray;
    VectorType tempVector = {0,1,2,3,4,5};
    myArray.push_back(tempVector);
    
    for(int testNumber=1; testNumber<=5;testNumber++){
        for(int vectorNumber=1;vectorNumber<=5;vectorNumber++){
            if(vectorNumber==myArray[0].vectorNumber[testNumber])
                cout<<"#";
            else
                cout<<"+";
        }
        cout<<endl;
    }
return 0;
}
