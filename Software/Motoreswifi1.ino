#include <esp_now.h>
#include <WiFi.h>

// Pines de control del L298N
const int motor1Pin1 = 27; // IN1
const int motor1Pin2 = 26; // IN2
const int motor2Pin1 = 25; // IN3
const int motor2Pin2 = 33; // IN4

// Pines de velocidad (PWM)
const int motor1SpeedPin = 14; // PWM para motor 1
const int motor2SpeedPin = 32; // PWM para motor 2

// Estructura para recibir datos (debe coincidir con la estructura enviada)
typedef struct struct_message {
  char direction[2]; // Para almacenar la dirección
} struct_message;

struct_message myData;

// Variable para verificar la conexión
bool connected = false;

// Callback cuando se reciben datos
void OnDataRecv(const esp_now_recv_info *info, const uint8_t *incomingData, int len) {
  memcpy(&myData, incomingData, sizeof(myData));
  Serial.print("Bytes received: ");
  Serial.println(len);
  Serial.print("Direction: ");
  Serial.println(myData.direction);
  
  // Marcar como conectado
  connected = true;

  // Control de motores basado en la dirección recibida
  if (strcmp(myData.direction, "U") == 0) {
    // Mover ambos motores hacia adelante
    analogWrite(motor1SpeedPin, 255); // Velocidad máxima para motor 1
    analogWrite(motor2SpeedPin, 255); // Velocidad máxima para motor 2
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, HIGH);
    digitalWrite(motor2Pin2, LOW);
  } 
  else if (strcmp(myData.direction, "D") == 0) {
    // Mover ambos motores hacia atrás
    analogWrite(motor1SpeedPin, 255); // Velocidad máxima para motor 1
    analogWrite(motor2SpeedPin, 255); // Velocidad máxima para motor 2
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, HIGH);
  } 
  else if (strcmp(myData.direction, "R") == 0) {
    // Detener motor derecho y mover motor izquierdo
    analogWrite(motor1SpeedPin, 255); // Velocidad máxima para motor 1
    analogWrite(motor2SpeedPin, 0);    // Detener motor 2
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);
  } 
  else if (strcmp(myData.direction, "L") == 0) {
    // Detener motor izquierdo y mover motor derecho
    analogWrite(motor1SpeedPin, 0);    // Detener motor 1
    analogWrite(motor2SpeedPin, 255); // Velocidad máxima para motor 2
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, HIGH);
    digitalWrite(motor2Pin2, LOW);
  } 
  else {
    // Detener ambos motores si no hay movimiento
    analogWrite(motor1SpeedPin, 0);
    analogWrite(motor2SpeedPin, 0);
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);
  }
}

void setup() {
  // Inicializar el Monitor Serial
  Serial.begin(115200);

  // Configurar el dispositivo como estación Wi-Fi
  WiFi.mode(WIFI_STA);

  // Iniciar ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error al inicializar ESP-NOW");
    return;
  }
  Serial.print(F("Receiver initialized : "));
  Serial.println(WiFi.macAddress());

  // Definir la función de recepción
  esp_now_register_recv_cb(OnDataRecv);

  // Configurar los pines de los motores como salida
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  
  // Configurar los pines de velocidad como salida
  pinMode(motor1SpeedPin, OUTPUT);
  pinMode(motor2SpeedPin, OUTPUT);
}

void loop() {
  // Comprobar el estado de la conexión
  if (!connected) {
    Serial.println("No se ha recibido ninguna señal del emisor.");
  } else {
    Serial.println("Conexión establecida con el emisor.");
    connected = false; // Reiniciar la variable para la próxima verificación
  }
  delay(1000); // Esperar un segundo antes de la próxima verificación
} 