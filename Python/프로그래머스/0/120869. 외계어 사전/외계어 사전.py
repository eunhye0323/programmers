def solution(spell, dic):
    answer = 0
    
    for word in dic:
        if sorted(spell) == sorted(word):
            answer = 1
            break
        else:
            answer = 2
    
    return answer