
# gravador de voz
import sounddevice
from scipy.io.wavfile import write

fs=44100 # sample rate
second=int(input("Introduza a duração em segundos: "))

print("A gravar....\n")

record_voice=sounddevice.rec(int(second * fs),samplerate=fs,channels=2)

sounddevice.wait()

write("out.wav",fs,record_voice)

print("terminado...\nPor favor confira o ficheiro...")