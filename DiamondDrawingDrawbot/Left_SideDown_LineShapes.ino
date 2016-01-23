void LeftSideDownLineShapes(){

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
      lateralLineLimit = int(random(1000));
    }
    else{
      lateralLineLimit = random(100);
    }
    lineGapChoice = int(random(100));  // this defines the amound of gap separating the long back and forth lines
    if (lineGapChoice<2){
      lineGap = int(random(80));

    } 
    else {
      lineGap = int(random(10));
    }

    int zizzo = int(random(lineGap)); //choose random 0 1 2 3 
    int zizzo2 = int(random(lateralLineLimit)); //choose random 0 1 2 3 
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
}

