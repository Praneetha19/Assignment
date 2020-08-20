def function(string):
    demo="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    for i in demo:
        if i not in string.upper():
            return False
    return True   
string=input("Enter the string:")
a=function(string)
if a==True:
    print("Entered string is a pangram!",string)
else:
    print("Entered string is not a pangram!",string)
