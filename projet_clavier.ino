
const int nb_input = 8;
int input[nb_input] = {3, 4, 5, 6, 14, 15, 21, 23};

void setup()
{
  for(unsigned int i = 0; i < nb_input; ++i)
  {
    pinMode(input[i], INPUT_PULLUP);
  }
  Serial.begin(9600);
}

void tap(int i)
{
  switch(i)
  {
    case(3) : 
      Keyboard.print("A\n");
      break;
    case(4) :
      Keyboard.print("B\n");
      break;
    case(5) :
      Keyboard.print("B\n");
      break;
    case(6) :
      Keyboard.print("B\n");
      break;
    case(14) :
      Keyboard.print("B\n");
      break;
    case(15) :
      Keyboard.print("B\n");
      break;
    case(21) :
      Keyboard.print("B\n");
      break;
    case(23) :
      Keyboard.print("B\n");
      break;
  }
  
}

void loop()
{
 for(unsigned int i = 0; i < nb_input; ++i)
 { 
  if(digitalRead(input[i]) == LOW)
  {
    tap(input[i]);
    //Serial.print(i);
    delay(250);
  }
 }
}
