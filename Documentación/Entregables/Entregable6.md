# ENTREGABLE 6
# Hardware electrónico
## Diseño esquemático electrónico

![INICIO (1)](https://github.com/user-attachments/assets/2e5a0fab-90ba-4c8b-af9e-c55906a594d9)
### Prototipado electrónico

![22](https://github.com/user-attachments/assets/34d02eb3-b7c8-40c8-91a6-87b124e5f51a)
![11](https://github.com/user-attachments/assets/aefabb3c-6c81-456d-9d24-5b987d79338e)

## Ejecución

![EJECUCION](https://github.com/user-attachments/assets/87681728-7867-4b67-a493-4229cb44f9d7)

## Código

![1](https://github.com/user-attachments/assets/ab62a6d4-884e-4f43-9f7c-b67045e0d74a)
![2](https://github.com/user-attachments/assets/d13b24ed-679c-4e9b-bd69-f07b3792febe)

## Impresión 3D

![1](https://i.postimg.cc/JnjtvKzf/IMG-20241030-WA0010.jpg)

![2](https://i.postimg.cc/KjF42LKR/IMG-20241030-WA0009.jpg)

![3](https://i.postimg.cc/RVghkWvZ/IMG-20241030-WA0007.jpg)

![4](https://i.postimg.cc/rprpRgxD/IMG-20241030-WA0008.jpg)

Link: https://cad.onshape.com/documents/ca858fee3b7b2ad4cc1c3b6a/w/d80e6140443c176be9d90e0b/e/5a9bb124509f66af6cbcca03

## Diagrama de flujo

> <p align="center">
> <img src="https://github.com/user-attachments/assets/76d8c430-fcbd-43fd-b4dc-26186ef77a6b" width="600" height="800"/>
> </p>

https://www.canva.com/design/DAGVEVXKpno/JSUt6PHdUbssdZ6l9p_XJg/edit

## Reporte de Pruebas, retos y limitaciones de los componentes por separado

## 1. Evaluación de la Funcionalidad Básica y Usabilidad
Identificar Componentes Principales: Enumera cada componente clave de tu sistema (por ejemplo, sistema de propulsión de las ruedas, control mediante joystick, batería, etc.).

![Captura de pantalla 2024-10-30 020957](https://github.com/user-attachments/assets/d6203dd2-5209-4918-ad62-d069860ce27f)

### Pruebas Individuales 

Realiza pruebas básicas en cada componente para verificar que cumple su función:

### Control por Joystick: 
El sistema del joystick responde bien. Cuando el usuario mueve el joystick manda una señal al ESP-32. Este esp-32 procesa la señal y la envía al otro esp-32 encargado de los motores para que estos se muevan con una dirección y velocidad deseada.

### Fuente de energía:   
La batería se debe de soldar, por eso no aparece en la imagen. 

### Registro de Resultados:
Documenta los resultados de cada prueba, anotando cualquier problema de funcionamiento o limitación.

### Problemas identificados: 

- Algunos componentes que íbamos a utilizar no se encontraban disponibles en el mercado.
- Los componentes elegidos eran muy costosos.
- No se tenían las herramientas para soldar ciertos componentes. 
- Algunos de los componentes no eran adecuados para nuestro sistema

### Mejoras hechas a partir de los problemas identificados: 

- Buscamos entre diversas tiendas online todos los componentes, y a un precio accesible para todos en el equipo. 
- Se buscaron las herramientas paras soldar
- Se utilizó una matriz morfológica ideal para tener los componentes principales bien mapeados. 

## 2. Identificación de Retos y Limitaciones

### Análisis de Factores Técnicos:

La precisión del joystick es adecuada, la resistencia de los materiales es media, pues algunos componentes son altamente frágiles, la estabilidad del sistema es adecuada pues está todo balanceado en cuestión peso. Se han integrado módulos puente H para los motores DC, un regulador de voltaje, una portapila, ya que al reevaluar, necesitamos implementar los componentes mencionados para una mejor comunicación entre el sistema. 

### Dificultades de Integración: 

Al principio hubieron problemas para la comunicación entre joystick y esp-32, pero fue cuestión de reorganizar los cables, de esa forma se garantiza la buena comunicación. 

## 3. Propuestas de Soluciones

### Soluciones Técnicas: 

- Para cada reto identificado, plantea una posible mejora. Por ejemplo:
- Se implementaron herramientos para soldar la batería, nos prestamos de un compañero del equipo. 



