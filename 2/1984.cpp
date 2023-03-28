//
//  middle_average_1984.cpp
//  SW Academy
//
//  Created by kukho heo on 2023/03/13.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

struct Input{
    int number[10];
};
int main(){
    Input temp_input;
    vector <Input> ma;
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        for(int j=0;j<10;j++)
            cin>>temp_input.number[j];
        ma.push_back(temp_input);
    }
    for(int i=0;i<test_case;i++){
        sort(ma[i].number,ma[i].number+10);
        double avg=0;
        for (int j=1;j<9;j++)
            avg+=ma[i].number[j];
        
        cout<<"#"<<i+1<<" "<<round(avg/8)<<endl;
    }
    return 0;
}
