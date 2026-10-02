#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    vector<int> command;
    for(int i = 0; i < commands.size(); i++){
        command = commands[i];
        
        int a = command[0] - 1;
        int b = command[1];
        int k = command[2];
        
        vector<int> sliced(array.begin()+a, array.begin()+b);
        sort(sliced.begin(), sliced.end());

//         for(int j = 0; j < sliced.size(); j++){
//             cout << sliced[j] << " ";
//         }
//         cout << endl;
        
        answer.push_back(sliced[k-1]);
    }

    return answer;
}