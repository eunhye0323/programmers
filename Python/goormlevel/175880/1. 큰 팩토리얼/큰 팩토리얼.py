# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
user_input = int(input())
answer=1

for i in range(1, user_input+1):
	answer = answer * i;	

print(answer % 1000000007)