class Encoder {
  public:
    Encoder(int pinA, int pinB);
    void Encoder::getPinA() {

    }
    void Encoder::getPinB() {

    }
  private:
    void Encoder::setPinA() {

    }
    void Encoder::setPinB() {

    }
    int _pinA, _pinB;

};

Encoder::Encoder(int pinA, int pinB) {
  pinMode(pinA, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pinA), readA, CHANGE);

  pinMode(pinB, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pinB),readB, CHANGE);
}

void readA() {
  
}

void readB() {
  
}
