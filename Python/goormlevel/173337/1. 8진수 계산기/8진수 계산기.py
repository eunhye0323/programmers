# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
n = input()
array = input().split()
answer = 0
for i in array:
	answer += int(i)

answer = oct(answer)
# Python은 8진수라는 것을 표시하기 위해 앞에 0o를 붙이므로 2번째 idx부터 출력
print(answer[2:])