#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    //unordered_map<int, int> students;
    // 모든 학생들이 본인 체육복은 갖고 있다고 가정
    vector<int> student_cand(n, 1);
    
    for(int i = 0; i < reserve.size(); i++){
        //여벌 체육복이 있는 학생의 번호를 idx로 확인해 값을 1 추가
        //idx가 0부터 시작하므로 -1
        int student_num = reserve[i];
        student_cand[student_num - 1]++;
    }

    for(int i = 0; i < lost.size(); i++){
        //체육복 도난당한 학생 반영
        //idx가 0부터 시작하므로 -1
        int student_num = lost[i];
        student_cand[student_num - 1]--;
    }
    
    for(int i = 0; i < student_cand.size(); i++){
        //해당 번호의 학생이 옷을 갖고 있으면 answer++
        if(student_cand[i] >= 1){
            answer++;
            //cout << "옷을 가지고 있는 학생의 idx 과 갖고 있는 개수 : " << i << " " << student_cand[i] << endl;
        }
        //해당 번호의 학생이 옷을 갖고 있지 않으면 양옆 번호를 체크 후 있으면 answer++
        else{
            //첫번째 학생은 뒷번호 학생만 체크
            if(i == 0){
                if(student_cand[i+1] > 1){ 
                    student_cand[i+1]--;
                    answer++; 
                    //cout << "옷을 빌릴 수 있는 학생의 idx : " << i << endl;
                }    
            }
            //마지막 학생은 앞번호 학생만 체크
            else if(i == student_cand.size() - 1){
                if(student_cand[i-1] > 1){
                    student_cand[i-1]--;
                    answer++; 
                    //cout << "옷을 빌릴 수 있는 학생의 idx : " << i << endl;
                }
            }
            //그 외 학생들은 양 옆 체크
            else{
                    if(student_cand[i-1] > 1){
                        student_cand[i-1]--; 
                        answer++; 
                    }
                    else if(student_cand[i+1] > 1){
                        student_cand[i+1]--; 
                        answer++;                         
                    }
                    //cout << "옷을 빌릴 수 있는 학생의 idx : " << i << endl;
                }
        }   
    }
    return answer;
}