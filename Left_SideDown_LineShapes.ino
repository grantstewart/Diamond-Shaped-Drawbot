void LeftSideDownLineShapes(){
//////////////SETS UP THE STYLE OF DRAWING////////////
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
    LM.step(zizzo, FORWARD, INTERLEAVE); 
    L+=zizzo;
    testBoundaries();
    RM.step(zizzo2,FORWARD,INTERLEAVE);
    R-=zizzo2;
    testBoundaries();
    LM.step(zizzo,FORWARD, INTERLEAVE);
    L+=zizzo;
    testBoundaries();
    RM.step(zizzo2,BACKWARD,INTERLEAVE);
    R+=zizzo2;
    testBoundaries();
  }



}

