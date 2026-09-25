#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); i++){
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        //cout << s << e << k << endl;
        
        vector<int> num(arr.begin() + s, arr.begin() + e + 1);
        vector<int> temp;
        for(int j = 0; j < num.size(); j++){
            if(num[j] > k){
                temp.push_back(num[j]);
            }
        }
        if(temp.size() > 0){
            int min_val = *min_element(temp.begin(), temp.end());
            answer.push_back(min_val);
        }
        else answer.push_back(-1);
    }
    
    return answer;
}