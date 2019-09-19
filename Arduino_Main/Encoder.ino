class Encoder {
  public:
    Encoder(int pinA, int pinB);
    void getPinA();
    void getPinB();
  private: 
    void setPinA();
    void setPinB();
    int _pinA, _pinB;


void Encoder::getPinA() {
  
}

void Encoder::getPinB() {
  
}

void Encoder::setPinA() {
  
}

void Encoder::setPinB() {
  
}

}

Encoder::Encoder(int pinA, int pinB) {
  pinMode(pinA, INPUT_PULLUP);
  attachInterrupt(digitalPintToInterrupt(pinA),readA);
  
}
