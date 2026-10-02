#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    //0번째는 항상 추가
    answer.push_back(arr[0]);
    for(int i=1; i<arr.size(); i++){
        //그 다음 인덱스부터 이전 인덱스와 비교해서 값이 동일하면 추가, 동일하지 않으면 넘어감
        if(arr[i] != arr[i-1]){
            answer.push_back(arr[i]);
            //cout << "i : " << i << ", arr[i] : " << arr[i] << endl;
        }
    }

    return answer;
}