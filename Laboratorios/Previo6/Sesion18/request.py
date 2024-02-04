import requests
#Se importa el modulo requests
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
#Se busca esa pagina
print('Tipo: ', type(response))
print('Respuesta:', response)
print('Respuesta Text:', response.text)

print('Respuesta:',response.__dict__)


