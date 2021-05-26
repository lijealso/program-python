import requests, json
city = "lisbon"
api_key = "e661f46e60e247d88e02de4653eebe8d"
base_url = "https://api.openweathermap.org/data/2.5/weather"
url = base_url+"?q="+city+"&appid="+api_key+"&units=metric"
response = requests.get(url)
x = response.json()
print(x)
if x['cod']!=401:
    print("Cidade: ", x['name'])
    print("Tempo: ", x['weather'][0]['description'])
    print("Temperatura: ", x['main']['temp'])

else:
    print("Cidade não encontrada")