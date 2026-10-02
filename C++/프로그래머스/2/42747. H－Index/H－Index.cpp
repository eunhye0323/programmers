#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.rbegin(), citations.rend());
    
    int h = 0;
    for(int i = 0; i < citations.size(); i++){
        if(citations[i] >= i+1){
            h = i+1;
            //cout << "i : " << i << ", i+1 : " << i+1 << ", h : " << i+1 << endl;
        }
        else break;
    }
    return answer = h;
}