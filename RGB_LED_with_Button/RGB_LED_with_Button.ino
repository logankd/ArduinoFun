/*************************************************************************/
const int redPin = 11;  // R petal on RGB LED module connected to digital pin 11 
const int greenPin = 10;  // G petal on RGB LED module connected to digital pin 9 
const int bluePin = 9;  // B petal on RGB LED module connected to digital pin 10 
const int buttonPin = 12;
/**************************************************************************/      
void setup()
{ 
  pinMode(buttonPin,INPUT);//initialize the key pin as input 
   pinMode(redPin, OUTPUT); // sets the redPin to be an output 
   pinMode(greenPin, OUTPUT); // sets the greenPin to be an output 
   pinMode(bluePin, OUTPUT); // sets the bluePin to be an output 
}    
/***************************************************************************/      
void loop()  // run over and over again  
{    
  if(digitalRead(buttonPin) == HIGH )
  {
          // Basic colors:  
          color(255, 0, 0); // turn the RGB LED red 
          delay(1000); // delay for 1 second  
          color(0,255, 255); // turn the RGB LED green  
          delay(1000); // delay for 1 second  
          color(0, 0, 255); // turn the RGB LED blue  
          delay(1000); // delay for 1 second 
          // Example blended colors:  
          color(255,0,0); // turn the RGB LED red  
          delay(1000); // delay for 1 second  
          color(237,109,0); // turn the RGB LED orange  
          delay(1000); // delay for 1 second  
          color(255,215,0); // turn the RGB LED yellow  
          delay(1000); // delay for 1 second  
          color(34,139,34); // turn the RGB LED green  
          delay(1000); // delay for 1 second 
          color(0,0,255); // turn the RGB LED blue  
          delay(1000); // delay for 1 second
          color(0,46,90); // turn the RGB LED  indigo 
          delay(1000); // delay for 1 second
          color(128,0,128); // turn the RGB LED purple  
          delay(1000); // delay for 1 second
    
  }
  else{
   digitalWrite(redPin, HIGH); 
      digitalWrite(greenPin, LOW);
         digitalWrite(bluePin, LOW);
         
  }
}     
/******************************************************/     
void color (unsigned char red, unsigned char green, unsigned char blue)     // the color generating function  
{    
          analogWrite(redPin, red);   
          analogWrite(bluePin, blue); 
          analogWrite(greenPin, green); 
}
/******************************************************/

