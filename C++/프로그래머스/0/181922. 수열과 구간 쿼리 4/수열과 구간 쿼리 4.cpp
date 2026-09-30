#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    
    for(int i = 0; i < queries.size(); i++){
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        //cout << s << " " << e << " " << k << endl;
        for(int j = s; j <= e; j++){
            //s ≤ i ≤ e인 모든 i에 대해 i가 k의 배수인 경우
            if(j % k == 0){
                //arr[i]에 1을 더함
                answer[j]++;
                //cout << answer[j] << " ";
            }            
        }
        //cout << endl;
    }
    return answer;
}