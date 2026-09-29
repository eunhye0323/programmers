#include <string>
#include <vector>

using namespace std;

int cal_gcd(int a, int b){
    int temp;
    while(b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = cal_gcd(n,m);
    //push gcd
    answer.push_back(gcd);
    //push lcm
    answer.push_back((n*m)/gcd);
    return answer;
}