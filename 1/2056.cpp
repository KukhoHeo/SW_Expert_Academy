//
//  calendar_2056.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/26.
//

#include <iostream>
#include<vector>
using namespace std;

struct VectorType{
    int vectorNumber[4];
};
int main(void){
    int caseNumber=0;
    int tempNumber=0;
    VectorType tempVector;
    vector<VectorType> myArray;
    int dayList[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>caseNumber;
    for(int testNumber=1;testNumber<=caseNumber;testNumber++){
        cin>>tempNumber;
        for(int digitNumber=3;digitNumber>=2;digitNumber--){
            tempVector.vectorNumber[digitNumber]=tempNumber%100;
            tempNumber/=100;
        }
        tempVector.vectorNumber[1]=tempNumber;
        myArray.push_back(tempVector);
    }
    if(find(begin(dayList),end(dayList),30)!=end(dayList)){
    cout<<"ok"<<endl;
        cout<<*find(begin(dayList),end(dayList),30)<<endl;
    }
    else
        cout<<"no"<<endl;
    for(int testNumber=0;testNumber<caseNumber;testNumber++){
        if(1<=myArray[testNumber].vectorNumber[2]&&myArray[testNumber].vectorNumber[2]<=12){
            if(1<=myArray[testNumber].vectorNumber[3]&&myArray[testNumber].vectorNumber[3]<=dayList[myArray[testNumber].vectorNumber[2]]){
                cout<<"#"<<testNumber+1<<" ";
                cout.width(4);
                cout.fill('0');
                cout<<myArray[testNumber].vectorNumber[1];
                cout<<"/";
                cout.width(2);
                cout.fill('0');
                cout<<myArray[testNumber].vectorNumber[2];
                cout<<"/";
                cout.width(2);
                cout.fill('0');
                cout<<myArray[testNumber].vectorNumber[3]<<endl;
            }
            else
            {
                cout<<"#"<<testNumber+1<<" "<<-1<<endl;
            }
        }
        else
        {
            cout<<"#"<<testNumber+1<<" "<<-1<<endl;
        }
    }
    return 0;
}
