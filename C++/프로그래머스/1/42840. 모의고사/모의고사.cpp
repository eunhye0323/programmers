#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> s1 = {1, 2, 3, 4, 5}; //5
    vector<int> s2 = {2, 1, 2, 3, 2, 4, 2, 5}; //8
    vector<int> s3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}; //10
    
    int ans_size = answers.size();
    
    unordered_map<int, bool> map1;
    unordered_map<int, bool> map2;
    unordered_map<int, bool> map3;
    
    //답안 개수만큼 반복
    for(int i = 0; i < answers.size(); i++){
        //답안과 수포자1, 2, 3의 답이 맞는지 비교
        if(answers[i] == s1[i % s1.size()]){map1.insert(make_pair(i, true));}
        if(answers[i] == s2[i % s2.size()]){map2.insert(make_pair(i, true));}
        if(answers[i] == s3[i % s3.size()]){map3.insert(make_pair(i, true));}       
    }

    int maxScore = max({map1.size(), map2.size(), map3.size()});

    if (map1.size() == maxScore) answer.push_back(1);
    if (map2.size() == maxScore) answer.push_back(2);
    if (map3.size() == maxScore) answer.push_back(3);
    
    return answer;
}