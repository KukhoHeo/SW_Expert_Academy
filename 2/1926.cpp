//
//  simple_369_game_1926.cpp
//  SW Academy
//
//  Created by kukho heo on 2023/03/05.
//

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct VectorType {
    int number;
};
int main(void){
    vector<VectorType> myArray;
    VectorType tempVector;
    cin>>tempVector.number;
    myArray.push_back(tempVector);
    
    for (int i=1;i<=myArray[0].number;i++){
        int one,ten,hund;
        int check=0;
        one=i%10;
        ten=i%100/10;
        hund=i%1000/100;
        
        if(hund ==3 || hund ==6|| hund==9)
            check++;
        if(ten ==3 || ten ==6|| ten==9)
            check++;
        if(one ==3 || one==6|| one==9)
            check++;
        for (int j=1;j<=check;j++){
            cout<<"-";
        }
        
        if (check ==0)
            cout<<i;
        cout<<" ";
    }
    
    
    return 0;
}
