//
//  chech_palindrome_1989.cpp
//  SW Academy
//
//  Created by kukho heo on 2023/03/12.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Input{
    string pali;
};
int main(){
    Input temp_input;
    vector <Input> pali;
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        cin>>temp_input.pali;
        pali.push_back(temp_input);
    }
    for(int i=0;i<test_case;i++){
        string front=pali[i].pali.substr(0,pali[i].pali.length()/2);
        string rear;
        if(pali[i].pali.length()%2==1)
            rear=pali[i].pali.substr(pali[i].pali.length()/2+1,pali[i].pali.length());
        else
            rear=pali[i].pali.substr(pali[i].pali.length()/2,pali[i].pali.length());
        reverse(front.begin(),front.end());
        if(rear.compare(front))
            cout<<"#"<<i+1<<" "<<0<<endl;
        else
            cout<<"#"<<i+1<<" "<<1<<endl;
    }
    return 0;
}
