# Recortar uma imagem
from PIL import Image
img = Image.open("lince.jpg")
box = (200, 200, 400, 400)
region = img.crop(box)
region.save('crop.jpg')
region.show()
