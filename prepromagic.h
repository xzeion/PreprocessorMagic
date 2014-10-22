/*This first line checks to see if this header file has already been included to the compiler. If it is not defined then define is called. Thus ifndef means "If not defined"*/
#ifndef Prepromagic_h
#define Prepromagic_h // will define the header when ifndef returns not defined.

class Magic{
  public:
    Magic(); //constructor
    ~Magic(); //destructor

    /* This is the magic part. By defining this in the public space this will read the reg
     * file and use the contents of it to define a flexable function that can be used to
     * build a generic register set. Very cool!
     */
    #define AMAZINGTHING(n,name,type) inline type_get##name(int addr){\
        return get__type(addr,n);\
    }
    #include "test.reg"
    #undef AMAZINGTHING

  private:
    uint16_t get_uint16_t(int kung, int foo);

};
#endif
