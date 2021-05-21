# converter decimal para binário, função embutida

def ConverterParaBinario(n):
    return bin(n).replace("0b", "")
        

if __name__ == '__main__':
    print(ConverterParaBinario(340))
