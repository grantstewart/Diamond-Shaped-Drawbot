void DefaultSmallStep(){
     
  int choice = int(random(4)); //choose random 0 1 2 3 
  
  if (choice == 0) {
    LM.step(1, FORWARD, INTERLEAVE); //move left string downwards by the stepsize
    L+=1;
  } 
  else if (choice == 1) {
    LM.step(1,BACKWARD, INTERLEAVE); //move left string upwards by the stepsize
    L-=1;
  } 
  else if (choice ==2) {
    RM.step(1,BACKWARD, INTERLEAVE); //move right string downwards by the stepsize
    R+=1;
  } 
  else{
    RM.step(1,FORWARD, INTERLEAVE); //move right string upwards by the stepsize
    R-=1;
  }
}
