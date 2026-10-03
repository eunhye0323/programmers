#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

double cal_factorial(int n){
    int i = 1;
    double result = 1;
    
    while(i <= n){
        result = result * i;
        //cout << "i에 대한 result : " << i << " " << result << " ";
        i++;
    }
    //cout << endl;
    
    return result;
}
int solution(int balls, int share) {
    double answer = 0;
    double n_fac = cal_factorial(balls);
    double m_fac = cal_factorial(share);
    double n_m_fac = cal_factorial(balls - share);
    
    //cout << n_fac << " " << m_fac << " " << n_m_fac << " " << endl;
    
    double temp = (n_m_fac * m_fac);
    answer = round(n_fac / temp);
    //cout << answer;

    return answer;
}