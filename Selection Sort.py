A=[]
n=int(input("Enter the number of elements:"))
for i in range(0,n):
    a=A.append(int(input("Enter the number:")))
print("Elements before sorting:",A)
for i in range(len(A)):
    mini=i
    for j in range(i+1,len(A)):
        if A[mini]>A[j]:
            mini=j
    A[i],A[mini]=A[mini],A[i]
print("Elements after sorting:",A)
