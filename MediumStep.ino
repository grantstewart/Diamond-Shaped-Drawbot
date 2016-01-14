void MediumStep(){

  
  int choice = int(random(4)); //choose random 0 1 2 3 
  int stepSizeb = int(random(stepSizeLimit)); //amount to step
  
  
  if (choice == 0) {
    LM.step(stepSizeb, FORWARD, INTERLEAVE); //move left string downwards by the stepsize
    L+=stepSizeb;
 
  } 
  else if (choice == 1) {
    LM.step(stepSizeb,BACKWARD, INTERLEAVE); //move left string upwards by the stepsize
    L-=stepSizeb;
  
  } 
  else if (choice ==2) {
    RM.step(stepSizeb,BACKWARD, INTERLEAVE); //move right string downwards by the stepsize
    R+=stepSizeb;
  
  } 
  else{
    RM.step(stepSizeb,FORWARD, INTERLEAVE); //move right string upwards by the stepsize
    R-=stepSizeb;
  
  }
}










