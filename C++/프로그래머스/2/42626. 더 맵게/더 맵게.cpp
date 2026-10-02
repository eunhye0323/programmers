#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int cal_sco(int a, int b){
    int temp = a + (b * 2); 
    //cout << a << " " << b << " " << temp << endl;    
    return temp;
}
int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<>>sco(scoville.begin(), scoville.end());
    int answer = 0;
    
    int count = 0;
    //pq가 비어있지 않고 가장 작은 값이 K보다 작은지
    while(!sco.empty() && sco.top() < K){
        //위의 조건을 충족하지만 모든 음식의 스코빌 지수를 K 이상으로 만들 수 없는 경우
        if(sco.size() < 2) { count = -1; break; }
        
        //스코빌 지수가 가장 낮은 두 개를 꺼냄
        int min_element1 = sco.top();
        sco.pop();
        int min_element2 = sco.top();
        sco.pop();
        
        count++;
        //그렇지 않을 경우 스코빌 지수 계산해서 priority_queue에 추가
        int new_element = cal_sco(min_element1, min_element2);
        sco.push(new_element);        
    }

    return answer = count;
}