void testBoundaries(){
  
  //if pen is outside the limits, move it back within the limits one step at a time - and update the length as you go of each side L and R
  while(L<=upperLimit) {
   LM.step(1, FORWARD, INTERLEAVE);
   L+=1;
  }
  while(L>=lowerLimit){
   LM.step(1, BACKWARD, INTERLEAVE);
   L-=1;
  }
  while (R<=upperLimit) {
    RM.step(1, BACKWARD, INTERLEAVE);
    R+=1;
  }
  while(R>=lowerLimit ){
   RM.step(1, FORWARD, INTERLEAVE);
   R-=1;
  }
  
  
}
