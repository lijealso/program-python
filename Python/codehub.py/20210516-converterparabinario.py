
# converter decimal para binário, método recursivo

def ConverterParaBinario(n):

    if n > 1:
        ConverterParaBinario(n // 2)
    print(n % 2,end = '')

if __name__ == '__main__':

        dec_val = 340
        ConverterParaBinario(dec_val)
