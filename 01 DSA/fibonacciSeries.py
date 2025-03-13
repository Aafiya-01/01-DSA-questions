def recur(n):
    if(n<=1):
        return n
    else:
        return (recur(n-1) + recur(n-2))

n_terms=5
if n_terms<=0:
    print("invalid")
else:
    print("fibonacci: ")
for i in range(n_terms+1):
    print(recur(i))            