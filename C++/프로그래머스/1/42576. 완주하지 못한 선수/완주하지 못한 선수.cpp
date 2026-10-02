#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    //comp와 part idx로 반복문을 순회하며 비교
    for(int i = 0; i < completion.size(); i++){
        if(completion[i] != participant[i]){
            answer = participant[i];
            break;
        }
    }
    //comp길이가 part 길이보다 작으므로, 만약 comp.size()만큼 돌았는데도 명단과 다른 사람이 없다면 마지막 참가자가 완주X
    if(answer == ""){
        int part_size = participant.size();
        answer = participant[part_size - 1];
    }
    return answer;
}