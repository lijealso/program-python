import os, sys
from PIL import Image

# tamanho da miniatura
size = (128, 128)

for infile in sys.argv[1:]:
  outfile = os.path.splitext(infile)[0] + ".thumbnail"
#  quando infile NÃO É IGUAL A outfile
  if infile != outfile:
    try:
# abre a imagem   
      with Image.open(infile) as img:
        img.thumbnail(size)
# grava a miniatura
        img.save(outfile, "JPEG")
    except OSError:
      print("não foi possível criar miniatura para", infile)
img.show()
