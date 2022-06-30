#include <ESP8266WiFi.h>

WiFiClient client;
WiFiServer server(80);

#define led1 D5
#define led2 D6
#define led3 D7
#define led4 D8
#define fan1 D1
#define fan2 D2
#define fan3 D3
#define fan4 D4


void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.begin("Mooazam", "mooazam123");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(200);
    Serial.print("..");
  }
  Serial.println();
  Serial.println("NodeMCU is connected!");
  Serial.println(WiFi.localIP());
  server.begin();
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(fan1, OUTPUT);
  pinMode(fan2, OUTPUT);
  pinMode(fan3, OUTPUT);
  pinMode(fan4, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  client = server.available();  //Gets a client that is connected to the server and has data available for reading.
  if (client == 1)
  {
    String request =  client.readStringUntil('\n');
    Serial.println(request);
    request.trim();
    if (request == "GET /room1led1on HTTP/1.1")
    {
      digitalWrite(led1, HIGH);
      Serial.println("Room 1 LED 1 is ON");
    }
    if (request == "GET /room1led1off HTTP/1.1")
    {
      digitalWrite(led1, LOW);
      Serial.println("Room 1 LED 1 is OFF");
    }
    if (request == "GET /room1led2on HTTP/1.1")
    {
      digitalWrite(led2, HIGH);
      Serial.println("Room 1 LED 2 is ON");
    }
    if (request == "GET /room1led2off HTTP/1.1")
    {
      digitalWrite(led2, LOW);
      Serial.println("Room 1 LED 2 is OFF");
    }
    if (request == "GET /room1fan1on HTTP/1.1")
    {
      digitalWrite(fan1, HIGH);
      Serial.println("Room 1 FAN 1 is ON");
    }
    if (request == "GET /room1fan1off HTTP/1.1")
    {
      digitalWrite(fan1, LOW);
      Serial.println("Room 1 FAN 1 is OFF");
    }
    if (request == "GET /room1fan2on HTTP/1.1")
    {
      digitalWrite(fan2, HIGH);
      Serial.println("Room 1 FAN 2 is ON");
    }
    if (request == "GET /room1fan2off HTTP/1.1")
    {
      digitalWrite(fan2, LOW);
      Serial.println("Room 1 FAN 2 is OFF");
    }
    if (request == "GET /room2led1on HTTP/1.1")
    {
      digitalWrite(led1, HIGH);
      Serial.println("Room 2 LED 1 is ON");
    }
    if (request == "GET /room2led1off HTTP/1.1")
    {
      digitalWrite(led1, LOW);
      Serial.println("Room 2 LED 1 is OFF");
    }
    if (request == "GET /room2led2on HTTP/1.1")
    {
      digitalWrite(led2, HIGH);
      Serial.println("Room 2 LED 2 is ON");
    }
    if (request == "GET /room2led2off HTTP/1.1")
    {
      digitalWrite(led2, LOW);
      Serial.println("Room 2 LED 2 is OFF");
    }
    if (request == "GET /room2fan1on HTTP/1.1")
    {
      digitalWrite(fan1, HIGH);
      Serial.println("Room 2 FAN 1 is ON");
    }
    if (request == "GET /room2fan1off HTTP/1.1")
    {
      digitalWrite(fan1, LOW);
      Serial.println("Room 2 FAN 1 is OFF");
    }
    if (request == "GET /room2fan2on HTTP/1.1")
    {
      digitalWrite(fan2, HIGH);
      Serial.println("Room 2 fan 2 is ON");
    }
    if (request == "GET /room2fan2off HTTP/1.1")
    {
      digitalWrite(fan2, LOW);
      Serial.println("Room 2 FAN 2 is OFF");
    }
    if (request == "GET /room3led3on HTTP/1.1")
    {
      digitalWrite(led1, HIGH);
      Serial.println("Room 3 LED 1 is ON");
    }
    if (request == "GET /room3led1off HTTP/1.1")
    {
      digitalWrite(led1, LOW);
      Serial.println("Room 3 LED 1 is OFF");
    }
    if (request == "GET /room3led3on HTTP/1.1")
    {
      digitalWrite(led2, HIGH);
      Serial.println("Room 3 LED 2 is ON");
    }
    if (request == "GET /room3led2off HTTP/1.1")
    {
      digitalWrite(led2, LOW);
      Serial.println("Room 3 LED 2 is OFF");
    }
    if (request == "GET /room3fan1on HTTP/1.1")
    {
      digitalWrite(fan1, HIGH);
      Serial.println("Room 3 FAN 1 is ON");
    }
    if (request == "GET /room3fan1off HTTP/1.1")
    {
      digitalWrite(fan1, LOW);
      Serial.println("Room 3 FAN 1 is OFF");
    }
    if (request == "GET /room3fan2on HTTP/1.1")
    {
      digitalWrite(fan2, HIGH);
      Serial.println("Room 3 FAN 2 is ON");
    }
    if (request == "GET /room3fan2off HTTP/1.1")
    {
      digitalWrite(fan2, LOW);
      Serial.println("Room 3 FAN 2 is OFF");
    }
    if (request == "GET /room4led1on HTTP/1.1")
    {
      digitalWrite(led1, HIGH);
      Serial.println("Room 4 LED 1 is ON");
    }
    if (request == "GET /room4led1off HTTP/1.1")
    {
      digitalWrite(led1, LOW);
      Serial.println("Room 4 LED 1 is OFF");
    }
    if (request == "GET /room4led2on HTTP/1.1")
    {
      digitalWrite(led2, HIGH);
      Serial.println("Room 4 LED 2 is ON");
    }
    if (request == "GET /room4led2off HTTP/1.1")
    {
      digitalWrite(led2, LOW);
      Serial.println("Room 4 LED 2 is OFF");
    }
    if (request == "GET /room4fan1on HTTP/1.1")
    {
      digitalWrite(fan1, HIGH);
      Serial.println("Room 4 FAN 1 is ON");
    }
    if (request == "GET /room4fan1off HTTP/1.1")
    {
      digitalWrite(fan1, LOW);
      Serial.println("Room 4 FAN 1 is OFF");
    }
    if (request == "GET /room4fan2on HTTP/1.1")
    {
      digitalWrite(fan2, HIGH);
      Serial.println("Room 4 FAN 2 is ON");
    }
    if (request == "GET /room4fan2off HTTP/1.1")
    {
      digitalWrite(fan2, LOW);
      Serial.println("Room 4 FAN 2 is OFF");
    }
  }
  client.println("HTTP/1.1 200 OK");
  client.println("Content-type:text/html");
  client.println("Connection: close");
  client.println("");
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.println("<head>");
  client.println("<title>Home Automation</title>");
  client.println(" <style>body{text-align: center;background-color: #E3E2E7;}</style>");
  client.println("<head>");
  client.println("<body>");
  client.println("<h1>Home automation System!</h1>");
  client.println("<h2>Made By: WARDA MUKHTAR</h2>");
  client.println("<h2>Room 1</h2>");
  client.println("<a href=\"/room2led1on\"\"><button>LED 1 ON</button></a>");
  client.println("<a href=\"/room2led1off\"\"><button>LED 1 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room2led2on\"\"><button>LED 2 ON</button></a>");
  client.println("<a href=\"/room2led2off\"\"><button>LED 2 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room2fan1on\"\"><button>FAN 1 ON</button></a>");
  client.println("<a href=\"/room2fan1off\"\"><button>FAN 1 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room2fan2on\"\"><button>FAN 2 ON</button></a>");
  client.println("<a href=\"/room2fan2off\"\"><button>FAN 2 OFF</button></a>");
  client.println("<br><br>");
  client.println("<h2>Room 2</h2>");
  client.println("<a href=\"/room2led1on\"\"><button>LED 1 ON</button></a>");
  client.println("<a href=\"/room2led1off\"\"><button>LED 1 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room2led2on\"\"><button>LED 2 ON</button></a>");
  client.println(" <a href=\"/room2led2off\"\"><button>LED 2 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room2fan1on\"\"><button>FAN 1 ON</button></a>");
  client.println("<a href=\"/room2fan1off\"\"><button>FAN 1 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room2fan2on\"\"><button>FAN 2 ON</button></a>");
  client.println("<a href=\"/room2fan2off\"\"><button>FAN 2 OFF</button></a>");
  client.println("<br><br>");
  client.println("<h2>Room 3</h2>");
  client.println("<a href=\"/room3led1on\"\"><button>LED 1 ON</button></a>");
  client.println("<a href=\"/room3led1off\"\"><button>LED 1 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room3led2on\"\"><button>LED 2 ON</button></a>");
  client.println("<a href=\"/room3led2off\"\"><button>LED 2 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room3fan1on\"\"><button>FAN 1 ON</button></a>");
  client.println("<a href=\"/room3fan1off\"\"><button>FAN 1 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room3fan2on\"\"><button>FAN 2 ON</button></a>");
  client.println("<a href=\"/room3fan2off\"\"><button>FAN 2 OFF</button></a>");
  client.println("<br><br>");
  client.println("<h2>Room 4</h2>");
  client.println("<a href=\"/room4led1on\"\"><button>LED 1 ON</button></a>");
  client.println("<a href=\"/room4led1off\"\"><button>LED 1 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room4led2on\"\"><button>LED 2 ON</button></a>");
  client.println("<a href=\"/room4led2off\"\"><button>LED 2 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room4fan1on\"\"><button>FAN 1 ON</button></a>");
  client.println("<a href=\"/room4fan1off\"\"><button>FAN 1 OFF</button></a>");
  client.println("<br><br>");
  client.println("<a href=\"/room4fan2on\"><button>FAN 2 ON</button></a>");
  client.println("<a href=\"/room4fan2off\"\"><button>FAN 2 OFF</button></a>");
  client.println("<br><br>");
  client.println("</body>");
  client.println("</html>");
}
  
  
  
