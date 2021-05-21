# videos não têm som !!
from pytube import YouTube

# não esquecer de instalar o módulo

link = input("Introduza o endereço do YouTube: ")
yt = YouTube(link)
videos = yt.streams.all()
# faz o stream de todos os formatos disponíveis

video = list(enumerate(videos))
# faz o índice dos formatos numa lista começando no zero
for i in video:
    print(i)
    # imprime todos os formatos de vídeo com um índice apropriado

print ("Introduza a opção para o formato do download")
dn_option = int(input("Introduza a opção: "))
# pergunta que formato quer descarregar
dn_video = videos[dn_option]
dn_video.download() # para descarregar o video

print ("video descarregado com sucesso")
