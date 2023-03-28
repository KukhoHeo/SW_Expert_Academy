//
//  add_odd_number.cpp
//  SW Academy
//
//  Created by kukho heo on 2021/03/19.
//

#include <iostream>

using namespace std;

int main(void){
    int loop=0, in[10]={0,};
    cin>>loop;
    for(int loop_num=0;loop_num<loop;loop_num++){
        unsigned long long result=0;
        for(int in_num=0;in_num<10;in_num++){
            cin>>in[in_num];
            if(in[in_num]%2 ==1)
                result+=in[in_num];
        }
        cout<<"#"<<loop_num+1<<" "<<result<<endl;
    }
    
    return 0;
}
