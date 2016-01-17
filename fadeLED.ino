void fadeLED(){
  currentTime = millis();
  if(currentTime >= (loopTime + 20)){  
    // set the brightness of pin 2
    analogWrite(2, brightness);    
    
    // change the brightness for next time through the loop:
    brightness = brightness + fadeAmount/2;

    // reverse the direction of the fading at the ends of the fade:
    if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount*2; 
    }     
    loopTime = currentTime;  // Updates loopTime
  }
}
