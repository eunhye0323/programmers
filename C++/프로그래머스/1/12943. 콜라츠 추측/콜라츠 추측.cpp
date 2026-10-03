#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long temp;

int collatz(long long n, int cnt){
    if(n == 1){
        return cnt;
    }
    
    else if(cnt == 500){
        return -1;
    }

    else if(temp % 2 == 0){
        temp = temp/2;
    }
    
    else if(temp % 2 != 0){
        temp = temp*3+1;
    }
    
    //cout << temp << " ";
    cnt++;
    return collatz(temp, cnt);
}

int solution(int num) {
    int answer = 0;
    temp = num;    
    answer = collatz(temp, answer);
    return answer;
}