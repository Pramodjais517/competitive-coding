# your code goes here
for j in range(int(input())):
	x,y,s=map(str,input().split())
	x=int(x)
	y=int(y)
	a=-1
	for i in range(len(s)):
		if(s[i]=='E' or s[i]=='W'):
			if s[i]=='E':
				x+=1
			else:
				x-=1
		else:
			if s[i]=='N':
				y+=1
			else:
				y-=1
		if abs(x)+abs(y)<=i+1:
			a=i+1
			break
	if a==-1:
		print('Case #{}: IMPOSSIBLE'.format(j+1))
	else:
		print('Case #{}: {}'.format(j+1,a))
