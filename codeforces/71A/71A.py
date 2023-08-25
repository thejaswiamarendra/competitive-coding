import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')
sys.stderr = open('error.txt', 'w')

def longword(s):
    if len(s)<=10:
        return s
    return s[0] + str(len(s[1:-1])) + s[-1]

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        s = input()
        print(longword(s))