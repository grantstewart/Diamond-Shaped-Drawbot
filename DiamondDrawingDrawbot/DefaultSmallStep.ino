void DefaultSmallStep(){
     
  int choice = int(random(4)); //choose random 0 1 2 3 
  
  if (choice == 0) {
    LM.step(defaultSmallStepSize, FORWARD, INTERLEAVE); //move left string downwards by the stepsize
    L+=defaultSmallStepSize;

    testBoundaries();

  } 
  else if (choice == 1) {
    LM.step(defaultSmallStepSize,BACKWARD, INTERLEAVE); //move left string upwards by the stepsize
    L-=defaultSmallStepSize;

    testBoundaries();

  } 
  else if (choice ==2) {
    RM.step(defaultSmallStepSize,BACKWARD, INTERLEAVE); //move right string downwards by the stepsize
    R+=defaultSmallStepSize;

    testBoundaries();

  } 
  else{
    RM.step(defaultSmallStepSize,FORWARD, INTERLEAVE); //move right string upwards by the stepsize
    R-=defaultSmallStepSize;

    testBoundaries();

  }
  
  //fadeLED();
}

