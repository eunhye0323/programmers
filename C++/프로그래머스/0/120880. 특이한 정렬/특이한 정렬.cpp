#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int temp;
bool compare(int a, int b){
    int num1 = abs(temp - a);
    int num2 = abs(temp - b);
    
    if(num1 == num2){
        return a > b;
    }
    
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    temp = n;
    sort(numlist.begin(), numlist.end(), compare);

    return answer = numlist;
}