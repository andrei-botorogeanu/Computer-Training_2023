import sys

def main():
    for line in sys.stdin:
        if 'EXIT' == line.rstrip():
            break
        print(f'Processing message from sys.stdin ->> {line}'

def main2():
      while True:
        data = input("Message --->")
        if data == 'Exit':
            break
        print(f'Processing message from sys.stdin ->> {data}')

def test_strip():
    str = "___Python3___"
    print(str)
    print(str.strip("_"))
    print(str)
    print("Left strip:",str.lstrip("_"))
    print(str)
    print("Right strip:",str.rstrip("_"))
    print(str)
main()
#main2()
#test_strip()
