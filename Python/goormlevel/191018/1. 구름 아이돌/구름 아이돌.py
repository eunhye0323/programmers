# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
n = int(input())
array = input().split()
students = []
# tuple에 score와 idx+1을 저장
for i in range(0, n):
	students.append((int(array[i]), i+1))

# 성적이 큰 순서대로(내림차순) 정렬
students.sort(reverse=True)

for i in range(0, 3):
	# 기본적으로 Python의 print()는 출력 후 자동으로 줄을 바꿈
	# 따라서 출력 후 줄바꿈 대신 " "를 붙이도록 함
	print(students[i][1], end=" ")