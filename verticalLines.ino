void verticalLines(){
  int verticalSize = int(random(verticalSizeLineLimit));
  
  for(int i=0;i<verticalSize; i++){
      RM.step(1, BACKWARD, INTERLEAVE);
      R+=1;
      testBoundaries();
      LM.step(1,FORWARD,INTERLEAVE);
      L+=1;
      testBoundaries();
    }
}


