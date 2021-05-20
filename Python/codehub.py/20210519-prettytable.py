# criar uma tabela simples com prettytable

from prettytable import PrettyTable

# especificar o nome das colunas
minhatabela = PrettyTable()

minhatabela.field_names = ["Código", "Nome", "Horas"]

# adicionar linhas
minhatabela.add_row(["0769", "Arquitetura interna do computador", "25"])
minhatabela.add_row(["0800", "Serviços adicionais de rede", "50"])
minhatabela.add_row(["0802", "Processamento computacional", "25"])
minhatabela.add_row(["7846", "Informática - noções básicas", "50"])
print(minhatabela)
