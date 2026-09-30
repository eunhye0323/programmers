#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    //r보다 작거나 같으면 반복
    for(int i = l; i <= r; i++){
        string num = to_string(i);
        //cout << "string : " << num << " ";
        
        int check = 0;
        //5의 배수인 경우
        if(i % 5 == 0){
            for(int j = 0; j < num.size(); j++){
                //5의 배수이면서 0과 5로만 이루어진 정수
                if(num[j] == '0' || num[j] == '5'){ 
                    check = 1;
                }
                //5의 배수이면서 0과 5로만 이루어지지 않은 정수 (ex : 10, 15, 20, 25, ...)
                else{ 
                    check = 0; 
                    break; 
                }
            }            
        }
        //5의 배수이면서 0과 5로만 이루어진 정수이면 answer에 저장
        if(check == 1) { answer.push_back(i); }
    }
    //해당하는 정수가 없을 경우 -1 return
    if(answer.empty() == true) answer.push_back(-1);
    
    return answer;
}