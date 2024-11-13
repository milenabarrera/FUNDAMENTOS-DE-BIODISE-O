# ENTREGABLE 7

# Hardware electrónico
## Diseño esquemático electrónico

![geraldine](https://github.com/user-attachments/assets/66badef1-6cf0-43b5-b8b9-13a6a4c3faac)
### Prototipado electrónico

![22](https://github.com/user-attachments/assets/34d02eb3-b7c8-40c8-91a6-87b124e5f51a)
![11](https://github.com/user-attachments/assets/aefabb3c-6c81-456d-9d24-5b987d79338e)

## Ejecución

![EJECUCION](https://github.com/user-attachments/assets/87681728-7867-4b67-a493-4229cb44f9d7)

## Código
### JOYSTICK
![JOYSTICK1](https://github.com/user-attachments/assets/6776dbc6-a935-471d-b692-793127f5fc18)
![JOYSTICK2](https://github.com/user-attachments/assets/2db8e9ed-25f1-4984-8dd9-6422a2e2788d)
### MOTORES

![codmotor 1](https://github.com/user-attachments/assets/52b90702-d3fb-4e29-96db-bb8d0022fac6)
![codmotor 2](https://github.com/user-attachments/assets/1155a189-f902-4cbe-81f7-29881d5c4f4f)
![codmotor 3](https://github.com/user-attachments/assets/d7458c9b-3a78-4515-a544-d81243e4f7ea)

## Impresión 3D

## Caja de componentes
![1](https://i.postimg.cc/DZh69DGQ/Smart-Select-20241030-084707-Chrome.jpg)
![2](https://i.postimg.cc/Pf0W0Jwb/Smart-Select-20241030-084855-Chrome.jpg)

## Case 
![1](https://i.postimg.cc/x82LQcB6/54e24017-ee9c-4f36-9206-87d0f48a0b53.jpg)
![2](https://i.postimg.cc/JnM8SDg0/IMG-20241106-WA0000.jpg)

## Compartimiento para motor y baterías
![1](https://i.postimg.cc/YSGPGWV8/espaciomotr.jpg)
![2](https://i.postimg.cc/cLQT8GBg/espaciocontapa.jpg)

Link: https://cad.onshape.com/documents/ca858fee3b7b2ad4cc1c3b6a/w/d80e6140443c176be9d90e0b/e/5a9bb124509f66af6cbcca03

## Diagrama de flujo

> <p align="center">
> <img src="https://github.com/user-attachments/assets/677173cb-ab4b-4d38-9ba8-99a53ac392c1"/>
> </p>

> <p align="center">
> <img src="https://github.com/user-attachments/assets/b15e32a0-2227-436e-a50e-9c984aad1250"/>
> </p>

https://www.canva.com/design/DAGVEVXKpno/JSUt6PHdUbssdZ6l9p_XJg/edit

## Reporte de Pruebas, retos y limitaciones de los componentes por separado

## 1. Evaluación de la funcionalidad básica y usabilidad del sistema
Se realizaron pruebas individuales con el propósito de identificar problemas de funcionamiento y algunas mejoras necesarias previas al avance. La evaluación se centró en el control del joystick y el control de los motores. 

### A)
- Control del Joystick:
Evaluamos la sensibilidad y respuestas del joystick en los ejes X e Y para asegurarnos de que se envíen señales precisas al ESP-32 encargado de este control. Gracias a esta prueba se demostró que el joystick presenta una buena sensibilidad. Además, como recomendación, podríamos implementar un suavizado de señal con el objetivo de mejorar la precisión de lectura de los movimientos.

- Componentes: 
ESP-32, joystick, batería recargable de 3.7V y un puerto de entrada USB tipo C con un módulo de carga TP 4056.
### B)
- Control de Motores:
Por una parte, realizamos algunas pruebas de conexión entre el ESP-32 y el controlador de motores L298N para verificar el correcto funcionamiento de los motores. Por otra parte, probamos el regulador de voltaje para garantizar que los motores reciban una potencia estable. En esta prueba logramos que el L298N controle la dirección y velocidad de los motores individualmente, aunque observamos que los motores pierden potencia al funcionar  a máxima velocidad simultáneamente. Esto último representa una posible limitación en la capacidad del regulador de voltaje o la fuente de alimentación.

- Componentes: 
ESP-32, L298N, motores JGA25 de 12V DC y un regulador de voltaje.

## 2. Identificación de retos y limitaciones:
Durante el proceso de pruebas pudimos identificar algunos desafíos y limitaciones que se relacionan con la viabilidad de nuestro proyecto. Algunos de esos desafíos fueron los siguientes:

### A)
- Comunicación ESP-32 a ESP-32:
Tanto la distancia como algunas condiciones ambientales podrían afectar la comunicación por medio de Bluetooth entre el ESP-32 encargado del joystick y el otro ESP-32 encargado del control de los motores.

### B)
- Capacidad del controlador L298N:
El controlador L298N es capaz de controlar a los dos motores JGA25 de 12V, aunque su eficiencia energética puede llegar a ser limitada, lo que podría reducir la autonomía del sistema.

## Retroalimentación 

### Respuestas de la docente Isabel Nuñez

### Apariencia y deseño:

- #### ¿El diseño del dispositivo le parece visualmente atractivo?
Innovador, para el usuario y otros posibles usuarios 

- #### ¿El tamaño, forma y color del dispositivo parecen adecuados?
Llamativos, novedosos, características neutras y sobrias

### Ergonomía y Comodidad:

- #### ¿Considera que las partes de contacto con el usuario se ven cómodas?
Sí, en este caso el control del joystick es la única parte en contacto con el usuario de fácil acceso

- #### ¿La ubicación de los controles parece accesible y fácil de manejar?
Actualmente no, pero con las modificaciones acordadas le parece que sí 


### Comprensión y Facilidad de Uso:

- #### ¿Las funciones del dispositivo son claras?
Sí, se tiene como objetivo adaptar una silla de ruedas para volverla eléctrica a un bajo costo y que tenga la capacidad de moverse hacia adelante, atrás y ambos lados. La principal función del dispositivo es brindarle a usuarios con movilidad reducida la capacidad de desplazarse sin realizar mucho esfuerzo.

- #### ¿Le parece intuitivo el uso del dispositivo según el diseño?
Sí, tal vez necesita de una pequeña explicación antes de que el paciente la empiece a utilizar, pero nada más que eso.

### Funcionalidad y Potenciales Problemas:

- #### ¿Identifica alguna área en el diseño que podría ser problemática durante el uso real?
La parte más complicada sería manejar los controles, aunque solo se ve lo de adelante y por ende el equipo(la parte de la caja) puede ser poco entendible.

- #### ¿Hay algo que cambiaría en el diseño antes de hacer una versión física?
Por el momento no, mantendría los conceptos previos formulados durante los anteriores entregables



#### Respuestas a preguntas adicionales sobre las necesidades de pacientes con sillas de ruedas:
- Los pacientes prefieren giros precisos, no suelen tener dificultades para moverse hacia adelante y hacia atrás, pero si tienen problemas con los giros.
se necesitan giros preciso.
- No requieran mucho mantenimiento.






