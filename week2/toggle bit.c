#include<stdio.h>
char togglebit(char byte_value,int bit_position){//declare the values
     return byte_value ^ (1<<bit_position);//xor operation for change the values

}
void main(){
    
    printf("%x",togglebit(0x01,6));
    
}
    
