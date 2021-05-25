# criar uma tabela simples com prettytable 2 - ver: 
# podem-se definir logo os campo em PrettyTable()

from prettytable import PrettyTable

minhatabela = PrettyTable(["Nome", "Turma", "Classificação"])

minhatabela.add_row(["Maria","X","18"])
minhatabela.add_row(["José","Y","20"])

print(minhatabela)
