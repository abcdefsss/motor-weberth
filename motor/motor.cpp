#include ¨motor.hpp¨
#include ¨arduino.h¨

void motor::setTerminal(int terminal){

  this->terminal;
   pinmode(this>terminal, OUTPUT);
}
  //sintaxe
  tipo_da_funçâo nome_da_classe::nome_do_método(paramétros){

    //corpo do método
    
  }
    this->nome_do_atributo

    void motor::ligarmotor(){
      if(this->terminal >=0 && this->terminal <=13){
        digitalwrite(this->terminal, HIGH);
        this->estado = HIGH
      }
    }

      void motor::desligarmotor(){
      if(this->terminal >=0 && this->terminal <=13){
        digitalwrite(this->terminal, LOW);
        this->estado = LOW;
   
      }
    }

     #include ¨motor.hpp¨
     motor meu Motor;
     void setup(){
      meuMotor.setTerminal(2);
     }
     //sintaxe
     nome_do_objeto.nome_do_método();
      #include ¨motor.hpp¨
      motor meuMotor;
      void setup()
        meuMotor.setTerminal(2)
        }

        void loop (){
          meuMotor.ligarmotor();
          delay(1000);
          meuMotor.desligarMotor();
          delay(1000);
        }
       
     
     }
  
