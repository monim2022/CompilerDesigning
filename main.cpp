#include<iostream>
#include<string>
using namespace std;
class symbolTable
{
    string Operator[5];
    string punctuation[5];
    string Identifier[5];
    public:
    symbolTable(string op,string punc,string iden)
    {
        if(op=="op")
        {
         opMethod(op);

        }
        else if(punc=="punc")
        {
            puncMethod(punc);
        }

        else if(iden=="id")
        {
            idenMethod(iden);

        }

    }
   void opMethod(string n){

       n=op;

   }
   void puncMethod(string n){

         n=punc;

   }
   void idenMethod(string n){
       n=iden;

   }
};



int main()
{
    symbolTable obj1("op","punc","id");

    /*
    symbolTable obj1 = new symbolTable();
    obj1.opMethod("op");
    obj1.puncMethod("punc");
    obj1.idenMethod("id");
    */


}



