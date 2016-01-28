void fadeLED(){
  
  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
  
  
  /*
   currentTime = millis();
  if(currentTime >= (loopTime + 20)){  
    // set the brightness of pin 2
    analogWrite(2, brightness);    
    
    // change the brightness for next time through the loop:
    brightness = brightness + fadeAmount/2;

    // reverse the direction of the fading at the ends of the fade:
    if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount*10; 
    }     
    loopTime = currentTime;  // Updates loopTime
  } 
  
  */
}
