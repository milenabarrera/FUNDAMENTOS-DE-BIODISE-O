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
![Joystick](https://github.com/user-attachments/assets/93ec191b-591d-4dfb-bf84-5658e28eb16a)
### MOTORES
![codmotor 1](https://github.com/user-attachments/assets/d7218e84-47db-4538-855e-524c8384a339)
![codmotor 2](https://github.com/user-attachments/assets/72c1a0ea-e6e8-4296-956b-5d3e6b676188)
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
> <img src="https://github.com/user-attachments/assets/76d8c430-fcbd-43fd-b4dc-26186ef77a6b" width="600" height="800"/>
> </p>

> <p align="center">
> <img src="https://github.com/user-attachments/assets/27ddfc4a-e483-4975-b9ae-a3ed2a053d90" width="700" height="500"/>
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





