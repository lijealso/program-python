# soma sem sinal + (mais)

def add(a,b):
    if a!=b:

    # quando a não é igual a b
        return (a*a-b*b)/(a-b)
    else:
        return 2*a

def main():
    a = int(input("Introduza o primeiro número:"))
    b = int(input("Introduza o segundo número:"))
    print("A soma é:", int(add(a,b)))

# main

main()


