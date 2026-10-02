#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int open_num = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            open_num++;
        }
        else if(s[i] == ')'){
            if(open_num == 0){
                //')'가 더 많은 경우
                answer = false;
                break;
            }
            open_num--;
        }
    }
    
    //'('가 더 많은 경우
    if(open_num != 0){
        answer = false;
    }

    return answer;
}