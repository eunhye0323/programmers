from collections import Counter

def solution(array):
    answer = 0
    
    counter = Counter(array)
    max_count = max(counter.values())
    most_common = [item for item, count in counter.items() if count == max_count]
    print(most_common)
    
    if(len(most_common) == 1):
        answer = most_common[0]
    elif(len(most_common) > 1):
        answer = -1
    return answer