import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')
sys.stderr = open('error.txt', 'w')

if __name__ == '__main__':
    n = int(input())
    print(2*n)