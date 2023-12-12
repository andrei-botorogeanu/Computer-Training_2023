#
# Stack
# 1. Reverse: abcde => edcba
# 2. Generarea submultimilor unei multimi:
#    M = {1,2,3}
#    1
#    1 2
#    1 2 3
#    1 3
#    2
#    2 3
#    3
#    multimea vida

# 3. Reverse Polish Notation
#    Expression: (1 + 2) * 3 (afix)
#
#    1 2 + 3 *  postfix
#    3 3 *
#    9
#

class RPN:
    def __init__(self):
        self.stack = []
        self.result = 0

    def push(self, data):
        self.stack.append(float(data))

    def pop(self):
        return self.stack.pop(len(self.stack)-1)

    def operation(self,op):
        term1 = self.pop()
        term2 = self.pop()
        self.result = eval('%f%c%f'%(term2,op,term1))
        self.push(self.result)

    def eval(self, str):

        print("Evaluation...", str)

        for ch in str.split(" "):

            if ch in '+-*/':
                #se efectueaza calculul
                self.operation( ch )
            else:
                #daca ch este in [0...9]
                self.push(ch)
        return self.result

def main():
    #se creeaza un obiect de tip RPN
    calc = RPN()

    # (1+2)*(3+4)+3 => expression postfix
    # expr = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
    # expr = "55"

    #
    # se adauga 2 in stiva
    # se adauga 1 in stiva

    ans = calc.eval( expr )

    print( ans )

    #expr = "12 2 + 3 *"

main()

# Stiva
#
#  42
#
#
#
