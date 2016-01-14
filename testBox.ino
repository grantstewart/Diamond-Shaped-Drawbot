void testBox(){
  // test the boundary limits by drawing a box
  LM.step(lowerLimit, BACKWARD, INTERLEAVE);
  RM.step(lowerLimit, FORWARD, INTERLEAVE);
  LM.step(lowerLimit, FORWARD, INTERLEAVE);
  RM.step(lowerLimit, BACKWARD, INTERLEAVE);

}

