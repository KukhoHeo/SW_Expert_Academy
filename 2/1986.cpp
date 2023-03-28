//
//  zigzag_1986.cpp
//  SW Academy
//
//  Created by kukho heo on 2023/03/13.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Input{
    int zig;
};
int main(){
    Input temp_input;
    vector <Input> zig;
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        cin>>temp_input.zig;
        zig.push_back(temp_input);
    }
    for(int i=0;i<test_case;i++){
        int sum=0;
        for (int j=1;j<=zig[i].zig;j++){
            if (j%2==1)
                sum+=j;
            else
                sum-=j;
        }
        cout<<"#"<<i+1<<" "<<sum<<endl;
    }
    return 0;
}
