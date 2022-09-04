#include<stdio.h>

  
       void play();//declaring function proto type
       void stop();
       void pause();
       void current_playing_song();
       void total_list_of_songs();
       void music(int num)
       {
          if(num==1)
   play();
  else if(num==2)//musical  defination
   stop();
   else if(num==3)
   pause();
   else if(num==4)
   current_playing_song();
   else if(num==5)
   total_list_of_songs();
   
   
     
       }
      
       void main(){
           
       int num;
   printf("enter the choice");
   scanf("%d",&num);
   music(num);//passing the value using this function
       }
  
  void play(){
      printf("it is palying\n");//defination of proto type
  }
  void stop(){
      printf("it is stop\n");
  }
  void pause(){
      printf("it is pause\n");
  }
  void current_playing_song(){
      printf("it is current playing song");
  }
  void  total_list_of_songs(){
      printf("total number of songs");
  }
  
  
  
  
  
   
   
