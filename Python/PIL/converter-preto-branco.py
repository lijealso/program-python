# Converter Imagem para preto e branco
from PIL import Image
img = Image.open("lince.jpg")
BlackAndWhite = img.convert("L")
BlackAndWhite.save("pb_lince.jpg")
BlackAndWhite.show()
