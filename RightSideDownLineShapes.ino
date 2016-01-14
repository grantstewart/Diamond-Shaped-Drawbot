void RightSideDownLineShapes(){
  randoChoice = int(random(100));  // this defines how long the long back and forth lines are
  if (randoChoice<3){
    lateralLineLimit = int(random(600));
  }
  else{
    lateralLineLimit = random(90);
  }
  lineGapChoice = int(random(100));  // this defines the amound of gap separating the long back and forth lines
  if (lineGapChoice<10){
    lineGap = int(random(150));
  } 
  else {
    lineGap = 5;
  }
  int zizzo = int(random(lineGap)); //choose random 0 1 2 3 
  int zizzo2 = int(random(lateralLineLimit)); //choose random 0 1 2 3 
  int numLines = int(random(13));

  for(int i=0;i<numLines;i++){
    testBoundaries();
    RM.step(zizzo, BACKWARD, INTERLEAVE); 
    R+=zizzo;
    testBoundaries();
    LM.step(zizzo2,FORWARD,INTERLEAVE);
    L+=zizzo2;
    testBoundaries();
    RM.step(zizzo,BACKWARD, INTERLEAVE);
    R+=zizzo;
    testBoundaries();
    LM.step(zizzo2,BACKWARD,INTERLEAVE);
    L-=zizzo2;
    testBoundaries();
  }


}

