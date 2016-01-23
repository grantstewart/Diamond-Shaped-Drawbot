void LeftSideDownLineShapes(){

  //////////////SETS UP THE STYLE OF DRAWING////////////
  randoChoice = int(random(100));  // this defines how long the long back and forth lines are
  if (randoChoice<=percentChanceOfChoosingLargeLineLimit){
    lateralLineLimit = int(random(lateralLineLargeLimit));
  }
  else{
    lateralLineLimit = int(random(lateralLineSmallLimit));
  }
  if (lineGapChoice<=percentChangeOfChoosingGapLargeLimit){
    lineGap = int(random(lineGaplargeLimit));
  }
  else{
    lineGap = int(random(lineGapSmallLimit));
  }

  int zizzo = lineGap; //choose random 0 1 2 3 
  int zizzo2 = lateralLineLimit; //choose random 0 1 2 3 
  int numLines = int(random(13));

  for(int i=0;i<numLines;i++){
    testBoundaries();
    LM.step(zizzo, FORWARD, INTERLEAVE); 
    L+=zizzo;
    digitalWrite(2, LOW);
    testBoundaries();
    RM.step(zizzo2,FORWARD,INTERLEAVE);
    R-=zizzo2;
    digitalWrite(2, HIGH);
    testBoundaries();
    LM.step(zizzo,FORWARD, INTERLEAVE);
    L+=zizzo;
    digitalWrite(2, LOW);
    testBoundaries();
    RM.step(zizzo2,BACKWARD,INTERLEAVE);
    R+=zizzo2;
    digitalWrite(2, HIGH);
    testBoundaries();
  }



}



