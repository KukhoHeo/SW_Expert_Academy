//
//  1979.cpp
//  SW Academy
//
//  Created by kukho heo on 2023/03/27.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
struct Input{
    int row;
    int K;
    int puzzle[15][15];
};
int SearchPuzzle(Input Input){
    int result=0;
    for(int i=0;i<Input.row;i++){
        int IsOneRow=0;
        int IsOneCol=0;
        for(int j=0;j<Input.row;j++){
            if (Input.puzzle[i][j]==1)
                IsOneRow++;
            else
            {
                if (IsOneRow==Input.K){
                    result++;
                    IsOneRow=0;
                }
                else
                    IsOneRow=0;
            }
            if (Input.puzzle[j][i]==1)
                IsOneCol++;
            else
            {
                if (IsOneCol==Input.K){
                    result++;
                    IsOneCol=0;
                }
                else
                    IsOneCol=0;
            }
        }
        if (IsOneRow==Input.K)
            result++;
        if (IsOneCol==Input.K)
            result++;
    }
    return result;
}
int main(){
    Input TempInput;
    vector<Input> Input;
    
    int TestCase=0;
    cin>>TestCase;
    for(int i=0;i<TestCase;i++){
        cin>>TempInput.row;
        cin>>TempInput.K;
        for(int j=0;j<TempInput.row;j++){
            for(int k=0;k<TempInput.row;k++){
                cin>>TempInput.puzzle[j][k];
            }
        }
        Input.push_back(TempInput);
    }
    for(int i=0;i<TestCase;i++){
        cout<<"#"<<i+1<<" "<<SearchPuzzle(Input[i])<<endl;
    }
    return 0;
}
