import requests
#Se importa el modulo requests
response = requests.get('https://www.google.com')
#Se busca google
print('Tipo: ', type(response))
print('Respuesta:', response)
print('Respuesta Text:', response.text)


