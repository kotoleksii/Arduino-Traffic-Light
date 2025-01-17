unsigned const int A = 6;
unsigned const int B = 5;
unsigned const int C = 4;
unsigned const int D = 3;
unsigned const int E = 2;
unsigned const int F = 7;
unsigned const int G = 8;

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  
  randomSeed(analogRead(0));
}

void loop()
{
  int number = random(0, 10);
  
  switch (number) {
  	case 0:
    	showNumber(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW);
    	break;
    case 1:
    	showNumber(LOW, HIGH, HIGH, LOW, LOW, LOW, LOW);
    	break;
    case 2:
    	showNumber(HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH);
    	break;
    case 3:
    	showNumber(HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH);
    	break;
    case 4:
    	showNumber(LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH);
    	break;
    case 5:
    	showNumber(HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH);
    	break;
    case 6:
    	showNumber(HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH);
    	break;
    case 7:
    	showNumber(HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW);
    	break;
    case 8:
    	showNumber(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH);
    	break;
    case 9:
    	showNumber(HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH);
    	break;
  }
  
  delay(2000);
}

void showNumber(int a, int b, int c, int d, int e,
                int f, int g) {
  digitalWrite(A, a);
  digitalWrite(B, b);
  digitalWrite(C, c);
  digitalWrite(D, d);
  digitalWrite(E, e);
  digitalWrite(F, f);
  digitalWrite(G, g);
}