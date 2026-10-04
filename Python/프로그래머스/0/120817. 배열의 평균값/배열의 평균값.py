def solution(numbers):
    num_length = len(numbers);
    answer = 0
    
    for i in numbers:
        answer += i
        
    answer = answer / num_length
    return answer