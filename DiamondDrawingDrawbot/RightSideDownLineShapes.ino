void RightSideDownLineShapes(){

   //////////////SETS UP THE STYLE OF DRAWING////////////
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

    //////////////SETS UP THE STYLE OF DRAWING////////////
    randoChoice = int(random(100));  // this defines how long the long back and forth lines are
    if (randoChoice<3){
      lateralLineLimit = int(random(500));
    }
    else{
      lateralLineLimit = random(30);
    }
    lineGapChoice = int(random(100));  // this defines the amound of gap separating the long back and forth lines
    if (lineGapChoice<2){
      lineGap = int(random(50));

    } 
    else {
      lineGap = int(random(10));
    }
  int zizzo = int(random(lineGap)); //choose random 0 1 2 3 
  int zizzo2 = int(random(lateralLineLimit)); //choose random 0 1 2 3 
  int numLines = int(random(13));

  for(int i=0;i<numLines;i++){

    
    testBoundaries();
    RM.step(zizzo, BACKWARD, INTERLEAVE); 
    R+=zizzo;
     digitalWrite(2, LOW);
    testBoundaries();
    LM.step(zizzo2,BACKWARD,INTERLEAVE);
    L-=zizzo2;
     digitalWrite(2, HIGH);
    testBoundaries();
    RM.step(zizzo,BACKWARD, INTERLEAVE);
    R+=zizzo;
     digitalWrite(2, LOW);
    testBoundaries();
    LM.step(zizzo2,FORWARD,INTERLEAVE);
    L+=zizzo2;
     digitalWrite(2, HIGH);



    testBoundaries();
  }

  }
}

