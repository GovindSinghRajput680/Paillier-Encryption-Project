#include "common.h"

void readMessage();
void encryptMessage();
void decryptMessage();

int main(){
    
    readMessage();
    encryptMessage();
    decryptMessage();

    cout<<"cipher text: "<<c<<endl;
    cout<<"Recieved message is: "<<endl;
    cout<<decrypted_message<<endl;
    
}