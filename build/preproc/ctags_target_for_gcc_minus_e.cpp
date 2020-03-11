# 1 "c:\\Users\\Louis Vincent\\Desktop\\arduino\\car\\app.ino"
class motor{
    public:
    int p1,p2,e;

    void pinout(int p1,int p2,int e)
    {
        this->p1 = p1;
        this->p2 = p2;
        this->e = e;

    }
    void setup(){
        pinMode(p1,0x1);
        pinMode(p2,0x1);
         pinMode(e,0x1);
         digitalWrite(p1,0x0);
        digitalWrite(p2,0x0);
          digitalWrite(e,0x1);


    }

    void c(){
        digitalWrite(p1,0x1);
        digitalWrite(p2,0x0);

    }
     void ac(){
        digitalWrite(p1,0x0);
        digitalWrite(p2,0x1);

    }
    void stop(){
        digitalWrite(p1,0x0);
        digitalWrite(p2,0x0);
    }
};

class car{
    public:
    motor lm,rm;

    car() : lm() , rm(){

    }

    void setup(){

    }
    void setlm(int p1,int p2,int e){
    // lm = new motor();
    lm.pinout(6,7,8);
     lm.setup();

 }
 void setrm(int p1,int p2,int e){
    // rm = new motor();
    rm.pinout(9,10,11);
      rm.setup();

 }

void f(){
    lm.c();
    rm.c();
}
void b(){
    lm.ac();
    rm.ac();
}
void r(){
     lm.c();
    rm.ac();
}
void l(){
     lm.ac();
    rm.c();
}
void s(){
    lm.stop();
    rm.stop();
}

};

car c;
void setup()
{
 c.setlm(6,7,8);
    c.setrm(9,10,11);
}

void loop()
{
 c.f();
    delay(1000);
    c.s();
}
