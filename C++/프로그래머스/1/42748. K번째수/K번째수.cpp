#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int l = 0; l < commands.size(); l++){
        vector<int> command = commands[l];
        
        int i = command[0] - 1;
        int j = command[1];
        int k = command[2] - 1;
        
        vector<int> sliced(array.begin() + i, array.begin() + j);
    
        sort(sliced.begin(), sliced.end());
        answer.push_back(sliced[k]);
    }
    return answer;
}