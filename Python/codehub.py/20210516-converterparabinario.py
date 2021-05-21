
# converter decimal para binário, método recursivo

def ConverterParaBinario(n):

    if n > 1:
        ConverterParaBinario(n // 2)
    print(n % 2,end = '')

if __name__ == '__main__':

        dec_val = 340
        ConverterParaBinario(dec_val)

#   340 | 2 | 0
#   170 | 2 | 0
#    85 | 2 | 1
#    42 | 2 | 0
#    21 | 2 | 1
#    10 | 2 | 0
#     5 | 2 | 1
#     2 | 2 | 0
#     1 | 2 | 1
#
#   valor: 101010100
