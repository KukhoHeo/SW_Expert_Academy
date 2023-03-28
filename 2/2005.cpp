//
//  pascal_triangle_2005.cpp
//  SW Academy
//
//  Created by kukho heo on 2023/03/05.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct input{
    int heigh;
};

int main(){
    input tempInput;
    vector<input> myArray;
    int testCase;
    
    cin>>testCase;
    
    for(int i=0;i<testCase;i++){
        cin>>tempInput.heigh;
        myArray.push_back(tempInput);
    }
    for(int i=0;i<testCase;i++){
        cout<<"#"<<i+1<<" "<<endl;
        int pascal[10][10]={0,};
        for(int j=0;j<myArray[i].heigh;j++){
            if (j==0){
                pascal[j][1]=1;
                continue;
            }
            for(int k=1;k<=j+1;k++){
                pascal[j][k]=pascal[j-1][k-1]+pascal[j-1][k];
            }
        }
        for (int j=0;j<myArray[i].heigh;j++){
            for (int k=0;k<myArray[i].heigh+1;k++){
                if(pascal[j][k]!=0)
                cout<<pascal[j][k]<<" ";
            }
            cout<<endl;
        }
                
    }
}
