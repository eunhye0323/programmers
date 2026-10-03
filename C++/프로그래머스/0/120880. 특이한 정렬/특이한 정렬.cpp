#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int temp;

bool compare(int a, int b){
    int num1 = abs(temp - a);
    int num2 = abs(temp - b);
    
    cout << "a, b, temp 출력 : " << a << " " << b << " " << temp << endl; 
    cout << "num1, num2 출력 : " << num1 << " " << num2 << endl;
    
    //두 수가 같을 경우 더 큰 수를 먼저 배치(내림차순)
    if(num1 == num2){
        return a > b;
    }
    
    //두 수가 다를 경우 n과 가까운 순서대로 배치
    return num1 < num2;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    temp = n;
    sort(numlist.begin(), numlist.end(), compare);
    return answer = numlist;
}