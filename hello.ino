// This #include statement was automatically added by the Particle IDE.
#include <InternetButton.h>
InternetButton button = InternetButton();

void setup() {

button.begin();

// Create an API endpoint to turn off lights
// Particle.function takes 2 parameters
// Parameter 1 = NAME OF API ENDPOINT
// Parameter 2 = FUNCTION YOU WANT TO RUN WHEN

Particle.function("simly1", smile1);
Particle.function("simly2", smile2);

Particle.function("simly3", smile3);
Particle.function("turnlightsoff", smile4);




}

void loop() {
// write some test code
//button.allLedsOn(20,20,20);
}

// Template of an exposed function

int smile1(String command) {
     button.ledOn(1,0,255,0);
     button.ledOn(11,0,255,0);

     button.ledOn(3,0,255,0);
     button.ledOn(4,0,255,0);
     button.ledOn(5,0,255,0);
     button.ledOn(6,0,255,0);
      button.ledOn(7,0,255,0);
     button.ledOn(8,0,255,0);
      button.ledOn(9,0,255,0);
      delay(10000);
      button.allLedsOff(); 
     delay(6000);
    button.ledOn(1,0,255,0);
     button.ledOn(11,0,255,0);
        button.ledOn(4,0,255,0);
     button.ledOn(5,0,255,0);
     button.ledOn(6,0,255,0);
     button.ledOn(7,0,255,0);
    button.ledOn(8,0,255,0);
     delay(10000);
      button.allLedsOff(); 
      delay(6000);
    button.allLedsOff();
     button.ledOn(1,0,255,0);
     button.ledOn(11,0,255,0);
    button.ledOn(5,0,255,0);
     button.ledOn(6,0,255,0);
      button.ledOn(7,0,255,0);
       delay(10000);

    button.allLedsOff(); 
    delay(6000);
     button.ledOn(1,255,0,0);
     button.ledOn(11,255,0,0);
     button.ledOn(4,255,0,0);
     button.ledOn(5,255,0,0);
     button.ledOn(6,255,0,0);
      button.ledOn(7,255,0,0);
     button.ledOn(8,255,0,0);
      delay(10000);
    return 1;
    
  }
  
  int smile2(String command){
  


    return 1;
     
  }
  int smile3(String command){
   
    return 1;
  }
int smile4(String command){
   button.allLedsOff();
   delay(20000);

    return 1;
      
  }
