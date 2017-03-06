//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// The Unnamed Circuit
// 
// Made by a99182003 a99182003
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4210778-the-unnamed-circuit

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led[8] = {2,3,4,5,6,7,8,9};
int i,num;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  for (i=0;i<8;i++)
  {
    pinMode(led[i], OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
 
  for (num=0;num<1;num++){			//左移8次
  	for (i=7;i>=0;i--){
	    digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
	  	delay(100);               // wait for a second
	  	digitalWrite(led[i], LOW);    // turn the LED off by making the voltage LOW
	  	delay(100);               // wait for a second
  	}
  }
 
  for (num=0;num<1;num++){			//右移2次
	  for (i=0;i<8;i++){
	    digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
	  	delay(100);               // wait for a second
	  	digitalWrite(led[i], LOW);    // turn the LED off by making the voltage LOW
	  	delay(100);               // wait for a second
       
  	}
  }
}
