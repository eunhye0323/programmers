#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    long long answer = 0;
    long long temp = num;
    
    while(temp != 1){
        if(answer == 500){
            answer = -1;
            break;
        }
        
        else if(temp % 2 == 0){
            temp = temp/2;
        }
        else if(temp % 2 != 0){
            temp = temp*3+1;
        }
        //cout << temp << " ";
        answer++;
    }    
    return answer;
}