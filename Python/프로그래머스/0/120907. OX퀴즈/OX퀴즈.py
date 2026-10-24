def solution(quiz):
    quiz_list = []
    answer = []
    for i in quiz:
        q = i.split()
        #print(q)
        
        num1 = int(q[0])
        num2 = int(q[2])
        sign = q[1]
        ans = int(q[4])
        
        if(sign == '+'):
            if(num1+num2 == int(ans)):
                answer.append("O")
            else:
                answer.append("X")
        if(sign == '-'):
            if(num1-num2 == int(ans)):
                answer.append("O")
            else:
                answer.append("X")        

    return answer