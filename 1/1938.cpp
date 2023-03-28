//
//  simple_calculator_1938.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/27.
//

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

struct VectorType {
    int vectorNumber[3];
};
int main(void){
    char calculator[5]={'0','+','-','*','/'};
    VectorType tempVector;
    vector<VectorType> myArray;
    for(int testNumber=1;testNumber<=2;testNumber++){
        cin>>tempVector.vectorNumber[testNumber];
    }
    myArray.push_back(tempVector);
    for(int calculatorNumber=0;calculatorNumber<strlen(calculator);calculatorNumber++){
        switch(calculator[calculatorNumber]){
            case '+':
                cout<<myArray[0].vectorNumber[1]+myArray[0].vectorNumber[2]<<endl;
                break;
            case '-':
                cout<<myArray[0].vectorNumber[1]-myArray[0].vectorNumber[2]<<endl;
                break;
            case '*':
                cout<<myArray[0].vectorNumber[1]*myArray[0].vectorNumber[2]<<endl;
                break;
            case '/':
                cout<<myArray[0].vectorNumber[1]/myArray[0].vectorNumber[2]<<endl;
                break;
        }
    }
return 0;
}
