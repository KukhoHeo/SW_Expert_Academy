//
//  pattern_length_2007.cpp
//  SW Academy
//
//  Created by kukho heo on 2023/03/05.
//

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct VectorType {
    string sentence;
};
int main(void){
    vector<VectorType> myArray;
    VectorType tempVector;
    int testCase;
    
    cin>>testCase;
    for (int i =0;i<testCase;i++){
        cin>>tempVector.sentence;
        myArray.push_back(tempVector);
    }
    for (int i =0;i<testCase;i++){
        string pattern;
        for (int j=0;j<30;j++){
            pattern.push_back(myArray[i].sentence[j]);
            if(pattern.compare(myArray[i].sentence.substr(j+1,pattern.length()))==0){
                cout<<"#"<<i+1<<" "<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}

