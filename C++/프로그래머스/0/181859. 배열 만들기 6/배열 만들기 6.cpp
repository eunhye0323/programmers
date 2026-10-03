#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    vector<int> stk;
    for(int i = 0; i < arr.size(); i++){
        if(stk.empty() == true){
            stk.push_back(arr[i]);
        }
        else if(stk.empty() != true && stk[stk.size() - 1] == arr[i]){
            stk.pop_back();
        }
        else if(stk.empty() != true && stk[stk.size() - 1] != arr[i]){
            stk.push_back(arr[i]);
        }
    }
    answer = stk;

    if(stk.empty() == true){
        answer.push_back(-1);         
    }

    return answer;
}