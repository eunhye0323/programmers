def solution(num_list):
    answer = [0] * 2
    
    odd = 0;
    even = 0;
    for i in num_list:
        if(i % 2 == 0):
            even += 1;
        else:
            odd += 1;
            
    answer[0] = even;
    answer[1] = odd;
    return answer