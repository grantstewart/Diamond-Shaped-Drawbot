void RightSideUpLineShapes(){

 //////////////SETS UP THE STYLE OF DRAWING////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////LONG BACK AND FORTH LINES
  randoChoice = int(random(100));  // this defines how long the long back and forth lines are
  if (randoChoice<=percentChanceOfChoosingLargeLineLimit){
    lateralLineLimit = int(random(lateralLineLargeLimit));
  }
  else{
    lateralLineLimit = int(random(lateralLineSmallLimit));
  }
  
  ///////////////////////////////////////////////////////////////////////GAP BETWEEN LONG LINES
  lineGapChoice = int(random(100));
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
      RM.step(zizzo, FORWARD, INTERLEAVE); 
      R-=zizzo;
      digitalWrite(2, LOW);
      testBoundaries();
      LM.step(zizzo2,FORWARD,INTERLEAVE);
      L+=zizzo2;
      digitalWrite(2, HIGH);
      testBoundaries();
      RM.step(zizzo,FORWARD, INTERLEAVE);
      R-=zizzo;
      digitalWrite(2, LOW);
      testBoundaries();
      LM.step(zizzo2,BACKWARD,INTERLEAVE);
      L-=zizzo2;
      digitalWrite(2, HIGH);
      testBoundaries();
    }


  }


