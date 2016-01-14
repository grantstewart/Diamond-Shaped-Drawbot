void RightSideDownLineShapes(){
  randoChoice = int(random(100));  // this defines how long the long back and forth lines are
  if (randoChoice<percentChanceOfChoosingLargeLineLimit){
    lateralLineLimit = int(random(lateralLineLargeLimit));
  }
  else{
    lateralLineLimit = random(lateralLineSmallLimit);
  }
  lineGapChoice = int(random(100));  // this defines the amound of gap separating the long back and forth lines
  if (lineGapChoice<percentChangeOfChoosingGapLargeLimit){
    lineGap = int(random(lineGaplargeLimit));
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
    LM.step(zizzo2,BACKWARD,INTERLEAVE);
    L-=zizzo2;
    testBoundaries();
    RM.step(zizzo,BACKWARD, INTERLEAVE);
    R+=zizzo;
    testBoundaries();
    LM.step(zizzo2,FORWARD,INTERLEAVE);
    L+=zizzo2;
    testBoundaries();
  }


}

