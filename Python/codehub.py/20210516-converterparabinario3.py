# converter decimal para binário, sem função embutida

def DecimalParaBinario(n):
    return "{0:b}".format(int(n))

if __name__ == '__main__':
    print(DecimalParaBinario(340))
