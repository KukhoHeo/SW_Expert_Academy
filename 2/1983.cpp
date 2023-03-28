//
//  grade_1983.cpp
//  SW Academy
//
//  Created by kukho heo on 2023/03/13.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Input{
    int student;
    int who;
    int grade[100][3];
};

int main(){
    Input temp_input;
    vector <Input> grade;
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        cin>>temp_input.student>>temp_input.who;
        for(int j=0;j<temp_input.student;j++){
            for (int k=0;k<3;k++){
                cin>>temp_input.grade[j][k];
            }
        }
        grade.push_back(temp_input);
    }
    for(int i=0;i<test_case;i++){
        double avg[100];
        double temp;
        double res;
        for(int j=0;j<grade[i].student;j++){
            avg[j]=grade[i].grade[j][0]*0.35+grade[i].grade[j][1]*0.45+grade[i].grade[j][2]*0.2;
        }
        temp=avg[grade[i].who-1];
        sort(avg,avg+grade[i].student,greater<>());
        res=distance(avg,find(avg,avg+grade[i].student,temp))/(grade[i].student/10);
        
        switch (int(res)) {
            case 0:
                cout<<"#"<<i+1<<" A+"<<endl;
                break;
            case 1:
                cout<<"#"<<i+1<<" A0"<<endl;
                break;
            case 2:
                cout<<"#"<<i+1<<" A-"<<endl;
                break;
            case 3:
                cout<<"#"<<i+1<<" B+"<<endl;
                break;
            case 4:
                cout<<"#"<<i+1<<" B0"<<endl;
                break;
            case 5:
                cout<<"#"<<i+1<<" B-"<<endl;
                break;
            case 6:
                cout<<"#"<<i+1<<" C+"<<endl;
                break;
            case 7:
                cout<<"#"<<i+1<<" C0"<<endl;
                break;
            case 8:
                cout<<"#"<<i+1<<" C-"<<endl;
                break;
            case 9:
                cout<<"#"<<i+1<<" D+"<<endl;
                break;
        }
    }
    
    return 0;
}
