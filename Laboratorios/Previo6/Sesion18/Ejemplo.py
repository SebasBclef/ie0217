import requests

#Paso 1, hacer solicitud para obtener datos de usuario

users_response = requests.get('https://jsonplaceholder.typicode.com/users')
users_data = users_response.json()

#Paso 2, hacer solicitud para obtener datos de publicaciones

posts_response = requests.get('https://jsonplaceholder.typicode.com/users')
posts_data = posts_response.json()


#Paso 3, procesar los datos para obtener info
user_posts={}

for user in users_data:
    user_posts[user['id']]= []

for post in posts_data:
    user_id = post.get('userId') #se usa .get() para evitar key error
    if user_id in user_posts:
        user_posts[user_id].append({
            'title': post['title'],
            'body': post ['body']
        })

#Paso 4, mostrando resultados
        
for user_id, posts in user_posts.items():
    user=next((user for user in users_data if user ['id']== user_id),None)
    if user:
        print(f"\nPublicaciones de {user['name']} ({user['email']}): \n")
        for post in posts:
            print(f"Title: {post['title']}\nBody {post['body']}\n")
        else:
            print(f'No se encontraron datos para el usuario con ID {user_id}')