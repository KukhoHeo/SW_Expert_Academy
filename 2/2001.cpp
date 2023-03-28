//
//  fly_kill_2001.cpp
//  SW Academy
//
//  Created by kukho heo on 2023/03/12.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Input{
    int map_cnt;
    int fly_cnt;
    int map[15][15];
};
int fly_sum(int map[][15],int x,int y,int cnt){
    int sum=0;
    for(int i=x;i<x+cnt;i++){
        for(int j=y;j<y+cnt;j++){
            sum+=map[i][j];
        }
    }
    return sum;
}
int main(){
    int test_cnt;
    vector <Input> fly;
    Input temp_input;
    cin>>test_cnt;
    for(int i=0;i<test_cnt;i++){
        cin>>temp_input.map_cnt>>temp_input.fly_cnt;
        for (int j=0;j<temp_input.map_cnt;j++){
            for(int k=0;k<temp_input.map_cnt;k++){
                cin>>temp_input.map[j][k];
            }
        }
        fly.push_back(temp_input);
    }
    for(int i=0;i<test_cnt;i++){
        int max=0;
        for (int j=0;j<=fly[i].map_cnt-(fly[i].fly_cnt);j++){
            for(int k=0;k<=fly[i].map_cnt-(fly[i].fly_cnt);k++){
                if (fly_sum(fly[i].map, j, k, fly[i].fly_cnt)>max)
                    max=fly_sum(fly[i].map, j, k, fly[i].fly_cnt);
            }
        }
        cout<<"#"<<i+1<<" "<<max<<endl;
    }
    return 0;
}
