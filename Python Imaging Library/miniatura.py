import os, sys
from PIL import Image

size = (128, 128)

for infile in sys.argv[1:]:
  outfile = os.path.splitext(infile)[0] + ".thumbnail"
  if infile != outfile:
    try:
      with Image.open(infile) as img:
        img.thumbnail(size)
        img.save(outfile, "JPG")
    except OSError;
      print("não foi possível criar miniatura para", infile)
