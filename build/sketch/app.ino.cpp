#include <Arduino.h>
#line 1 "c:\\Users\\Louis Vincent\\Desktop\\arduino\\car\\app.ino"
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
        pinMode(p1,OUTPUT); 
        pinMode(p2,OUTPUT);
         pinMode(e,OUTPUT);
         digitalWrite(p1,LOW);
        digitalWrite(p2,LOW);
          digitalWrite(e,HIGH);

        
    }

    void c(){
        digitalWrite(p1,HIGH);
        digitalWrite(p2,LOW);

    }
     void ac(){
        digitalWrite(p1,LOW);
        digitalWrite(p2,HIGH);

    }
    void stop(){
        digitalWrite(p1,LOW);
        digitalWrite(p2,LOW);
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
#line 87 "c:\\Users\\Louis Vincent\\Desktop\\arduino\\car\\app.ino"
void setup();
#line 93 "c:\\Users\\Louis Vincent\\Desktop\\arduino\\car\\app.ino"
void loop();
#line 87 "c:\\Users\\Louis Vincent\\Desktop\\arduino\\car\\app.ino"
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

