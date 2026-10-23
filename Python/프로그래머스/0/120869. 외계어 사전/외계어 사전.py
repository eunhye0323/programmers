def solution(spell, dic):
    answer = 2
    
    for word in dic:
        if sorted(spell) == sorted(word):
            answer = 1
            break
    
    return answer