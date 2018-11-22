// arduino code for the gauntlet
const int iLED = 9; // index finger LED
const int mLED = 10; // middle finger LED
const int rLED = 11; // ring finger LED
const int lLED = 12; // little finger LED

const int iSwitch = 2; // index finger sensor
const int mSwitch = 3; // middle finger sensor
const int rSwitch = 4; // ring finger sensor
const int lSwitch = 5; // little finger sensor

//these will probably need to be used for the pressure sensor but simple switches will be used until then
const int iSense = A5; // index finger sensor
const int mSense = A4; // middle finger sensor
const int rSense = A3; // ring finger sensor
const int lSense = A2; // little finger sensor

const int od = 2349;
const int hcs = 2217;
const int hc = 2093;
const int hb = 1865;
const int ha = 1760;
const int hgs = 1661;
const int hg = 1568;
const int hfs = 1480;
const int hf = 1397;
const int he = 1319;
const int hds = 1245;
const int hd = 1174;
const int cs = 1109;
const int c = 1047;
const int b = 988;
const int as = 932;
const int a = 880;
const int gs = 831;
const int g = 784;
const int fs = 740;
const int f = 698;
const int e = 659;
const int d = 587;
const int lcs = 523;
const int lb = 494;
const int la = 440;

const int bhcs = 69;
const int bhc = 65;
const int bb = 58;
const int bas = 58;
const int ba = 55;
const int bgs = 52;
const int bg = 49;
const int bfs = 46;
const int bf = 44;
const int be = 41;
const int bds = 39;
const int bd = 37;
const int bcs = 35;
const int bc = 33;
  

void setup() {
  for (int i = 0; i < 2; i++)
  {
    for (int pinNo = 9; pinNo < 13; pinNo++) {
      if (i == 0) {
        pinMode(pinNo, OUTPUT);
        pinMode((pinNo - 7), INPUT);
      }
      digitalWrite(pinNo, HIGH);
    }
    delay(500);
    for (int pinNo = 9; pinNo < 13; pinNo++) {
      digitalWrite(pinNo, LOW);
    }
    delay(500);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(iLED, HIGH);
  digitalWrite(mLED, HIGH);
  digitalWrite(rLED, HIGH);
  digitalWrite(lLED, HIGH);
  if(digitalRead(iSwitch) == HIGH){
    digitalWrite(iLED, LOW);
    delay(500);
    tank();
  }
  if(digitalRead(mSwitch) == HIGH){
    digitalWrite(mLED, LOW);
    delay(500);
    bakerStreet();
  }
  if(digitalRead(rSwitch) == HIGH){
    digitalWrite(rLED, LOW);
    delay(500);
    mortalKombat();
  }
  if(digitalRead(lSwitch) == HIGH){
    digitalWrite(lLED, HIGH);
    delay(500);
    duckTales();
  }
}

void flash() {
  tone(8, 440, 1000);
  delay(500);
  tone(8, 880, 500);
  for(int i=0; i<40; i++){
    for (int pinNo = 9; pinNo < 13; pinNo++) {
      digitalWrite(pinNo, HIGH);
    }
    delay(21);
    for (int pinNo = 9; pinNo < 13; pinNo++) {
      digitalWrite(pinNo, LOW);
    }
    delay(30);
  }
  int num;
  for(int i2=0; i2<21; i2++){
    num = random(4);
    digitalWrite(9+num, HIGH);
    while(digitalRead(2+num) == LOW){
      // making it wait
    }
    digitalWrite(9+num, LOW);
  }
}

void carelessWhisper(){
  for(int i=0; i<2; i++){
    for(int index=0; index<2; index++){
      tone(8, 370, 500);
      delay(500);
      tone(8, 330, 250);
      delay(300);
      tone(8, 247, 350);
      delay(400);
      tone(8, 196, 300);
      delay(400);
    }
    for (int index2=0; index2<2; index2++){
      tone(8, 293, 500);
      delay(500);
      tone(8, 261, 200);
      delay(300);
      tone(8, 196, 300);
      delay(400);
      tone(8, 165, 300);
      delay(400);
    }
    tone(8, 261, 500);
    delay(500);
    tone(8, 247, 200);
    delay(300);
    tone(8, 196, 300);
    delay(400);
    tone(8, 165, 300);
    delay(400);
  
    tone(8, 131, 800);
    delay(1150);
    tone(8, 131, 50);
    delay(50);
    tone(8, 123, 400);
    delay(400);
  
    tone(8, 131, 400);
    delay(400);
    tone(8, 147, 400);
    delay(400);
    tone(8, 165, 400);
    delay(400);
    tone(8, 185, 400);
    delay(400);
  
    tone(8, 196, 400);
    delay(400);
    tone(8, 220, 400);
    delay(400);
    tone(8, 247, 400);
    delay(400);
  }
}

void bakerStreet(){
  int crot = 526;
  int semi = crot*4;
  int minu = crot*2;
  int quav = crot/2;
  int semiq = crot/4;
  for(int index = 0; index<2; index++){
    noteLeg(d,quav);
    note(hd, quav);
    note(cs, crot);
    note(b, semiq);
    note(a, semiq);
    note(b, semi);
    delay(crot + quav);
    
    noteLeg(d,quav);
    note(hd, quav);
    note(cs, crot);
    noteLeg(b, semiq);
    note(a, semiq);
    note(fs, quav);
    note(fs, quav+minu);
    delay(crot+quav);
  
    note(fs, quav);
    note(hd, quav);
    note(cs, crot);
    noteLeg(b, semiq);
    note(a, semiq);
    note(a, crot+quav);
    note(a, quav);
    note(a, crot+quav);
    note(a, quav);
    note(fs, crot+quav);
    note(fs, quav);
    note(hd, quav);
    note(cs, crot);
    noteLeg(b, semiq);
    note(a, semiq);
    noteLeg(b, semiq);
    note(cs, semiq);
    if(index == 0){
      note(b, quav+minu);
    }
    else{
      note(b, crot);
    }
  }
  noteLeg(e, crot/3);
  noteLeg(f, crot/3);
  note(e, crot/3);
  note(d, quav);
  note(lb, quav+crot);
  note(la, semiq);
  note(lb, semiq+quav);
  note(lb, crot);
  note(d, quav);
  note(d, quav);
  note(d, crot);
  note(fs, crot); 
}

void mortalKombat(){
  int crot = 476;
  int semi = crot*4;
  int minu = crot*2;
  int quav = crot/2;
  int semiq = crot/4;

  for(int i=0; i<2; i++){
    noteSta(fs, quav);
    noteSta(fs, quav);
    noteSta(a, quav);
    noteSta(fs, quav);
    noteSta(b, quav);
    noteSta(fs, quav);
    noteSta(cs, quav);
    noteSta(b, quav);
    
    noteSta(a, quav);
    noteSta(a, quav);
    noteSta(cs, quav);
    noteSta(a, quav);
    noteSta(he, quav);
    noteSta(a, quav);
    noteSta(cs, quav);
    noteSta(a, quav);
    
    noteSta(e, quav);
    noteSta(e, quav);
    noteSta(b, quav);
    noteSta(e, quav);
    noteSta(a, quav);
    noteSta(e, quav);
    noteSta(b, quav);
    noteSta(a, quav);
    
    noteSta(d, quav);
    noteSta(d, quav);
    noteSta(fs, quav);
    noteSta(d, quav);
    noteSta(a, quav);
    noteSta(d, quav);
    noteSta(a, quav);
    noteSta(gs, quav);
  }
  for(int i2=0; i2<4; i2++){
    noteSta(fs, quav+semiq);
    noteSta(fs, quav+semiq);
    noteSta(fs, quav);
    delay(semiq);
    noteSta(fs, quav);
    noteSta(e, quav);
    noteSta(a, quav);
  
    noteSta(fs, quav+semiq);
    noteSta(fs, quav+semiq);
    noteSta(fs, quav);
    delay(semiq);
    noteSta(fs, quav);
    noteSta(e, quav);
    noteSta(d, quav);
  
    noteSta(fs, quav+semiq);
    noteSta(fs, quav+semiq);
    noteSta(fs, quav);
    delay(semiq);
    noteSta(fs, quav);
    noteSta(e, quav);
    noteSta(a, quav);
  
    noteSta(fs, quav+semiq);
    noteSta(fs, quav+semiq);
    noteSta(fs, quav);
    noteSta(fs, semiq);
    noteSta(fs, quav);
    noteSta(fs, semiq);
    noteSta(fs, quav);
  }

  for(int i3=0; i3<4; i3++){
    noteSta(fs, semiq);
    noteSta(cs, quav);
    noteSta(fs, semiq);
    noteSta(a, quav);
    noteSta(fs, semiq);
    noteSta(g, quav);
    noteSta(fs, semiq);
    noteSta(a, quav);
    noteSta(fs, semiq);
    noteSta(gs, semiq);
    noteSta(e, quav);

    if(i3%2==0){
      noteSta(fs, semiq);
      noteSta(cs, quav);
      noteSta(fs, semiq);
      noteSta(a, quav);
      noteSta(fs, semiq);
      noteSta(g, quav);
      noteSta(fs, semiq);
      noteSta(a, quav);
      noteSta(fs, semiq);
      noteSta(gs, semiq);
      noteSta(e, quav);
    }
    else{
      noteSta(fs, semiq);
      noteSta(cs, quav);
      noteSta(fs, semiq);
      noteSta(a, quav);
      noteSta(e, semiq);
      noteSta(e, quav);
      noteSta(e, semiq);
      noteSta(fs, quav);
      noteSta(fs, quav);
      delay(quav);
    }

    for(int i4=0; i4<2; i4++){
      if(i4!=1){
        noteSta(fs, quav);
        noteSta(fs, quav);
        noteSta(a, quav);
        noteSta(fs, quav);
        noteSta(b, quav);
        noteSta(fs, quav);
        noteSta(cs, quav);
        noteSta(b, quav);
      }

      noteSta(a, quav);
      noteSta(a, quav);
      noteSta(cs, quav);
      noteSta(a, quav);
      noteSta(he, quav);
      noteSta(a, quav);
      noteSta(cs, quav);
      noteSta(a, quav);
      
      noteSta(e, quav);
      noteSta(e, quav);
      noteSta(b, quav);
      noteSta(e, quav);
      noteSta(a, quav);
      noteSta(e, quav);
      noteSta(b, quav);
      noteSta(a, quav);
      
      noteSta(d, quav);
      noteSta(d, quav);
      noteSta(fs, quav);
      noteSta(d, quav);
      noteSta(a, quav);
      noteSta(d, quav);
      noteSta(a, quav);
      noteSta(gs, quav);
    }
  }
}

void duckTales(){
  int crot = 343;
  int semi = crot*4;
  int minu = crot*2;
  int quav = crot/2;
  int semiq = crot/4;

  for(int i=0; i<2; i++){
    note(f, crot);
    note(a, crot);
    note(c, crot);
    note(hd, crot);

    note(hds, crot);
    note(hds, quav);
    noteLeg(d, crot);
    noteLeg(c, quav);
    note(as, crot);

    if(i==0){
      note(as, crot+quav);
      note(a, minu+quav);
      note(as, crot+quav);
      note(a, minu+quav);  
    }
    else {
      note(hds, crot+quav);
      note(hd, minu+quav);
      note(hds, crot+quav);
      note(hd, minu+quav);  
    }
  }
  delay(crot);
  note(g, crot);
  note(as, crot);
  note(hd, crot);
  note(hd, crot+quav);
  note(c, minu+quav);

  delay(crot);
  note(hd, crot);
  note(hf, crot);
  note(hg, crot);
  note(ha, crot);
  note(hg, minu+crot);

  for(int i2=0; i2<3; i2++){
    note(hf, crot);
    note(hf, crot);
    delay(crot);
    note(hc, crot);
    note(ha, crot);
    delay(minu+crot);

    if(i2<2){
      note(hf, crot);
      note(hds, crot);
      note(cs, crot);
      note(hds, crot);
      note(hf, crot);
      note(hds, crot);
      note(cs, crot);
      note(hds, crot);
    }
  }
}

void tank(){
  int crot = 429;
  int semi = crot*4;
  int minu = crot*2;
  int quav = crot/2;
  int semiq = crot/4;

  note(hf, semiq);
  note(hfs, quav);
  note(hf, semiq);
  note(hfs, quav);
  note(hf, semiq);
  note(hfs, quav);
  note(hf, semiq);
  note(hfs, quav);
  note(hg, quav);
  note(hgs, quav);
  delay(semi);

  for(int i=0; i<8; i++){
    note(bc, quav+semiq);
    note(bg, quav+semiq);
    note(bfs, quav);
    note(bf, quav+semiq);
    note(bds, quav);
    note(bds, semiq);
    delay(quav);
  }
  for(int i2=0; i2<3; i2++){
    if(i2==2){
      note(hd,semiq);
      noteSta(ha,quav);
      note(hd,semiq);
      noteSta(hgs,quav);
      note(hd,semiq);
      noteSta(hf,quav);
      note(hd,semiq);
      note(c,crot);
      note(hd,minu+crot+quav);
      delay(crot);
    }
    else if(i2==1){
      note(a, semiq);
    }
    else{
      note(f, semiq);
    }
    noteSta(he,quav);
    note(a,semiq);
    noteSta(hds,quav);
    note(a,semiq);
    noteSta(c,quav);
    note(a,semiq);
    note(g,crot);
    note(a,minu+crot+quav);
    delay(crot);
  }
  note(hfs,semiq);
  note(hgs,semiq);
  delay(crot);
  note(hfs,semiq);
  note(hgs,semiq);
  delay(crot);
  note(hc, semiq);
  note(ha, semiq);
  delay(quav);
  note(ha,semiq);
  note(hb,semiq);
  delay(crot);
  note(ha,semiq);
  note(hb,semiq);
  delay(crot);
  note(od, semiq);
  note(hcs, semiq);
  delay(quav);

  note(a, semiq);
  noteSta(he,quav);
  note(a,semiq);
  noteSta(hds,quav);
  note(a,semiq);
  noteSta(c,quav);
  note(a,semiq);
  note(g,crot);
  note(a,quav);
  delay(quav);
  for(int i3=0; i3<5; i3++){
    noteSta(he,quav); 
  }
  note(he, semiq);
  note(he, semiq);
}

void noteSta(int pitch, int dur){
  tone(8, pitch, dur*11/16);
  delay(dur);
}

void note(int pitch, int dur) {
  tone(8, pitch, dur*15/16);
  delay(dur);  
}

void noteLeg(int pitch, int dur) {
  tone(8, pitch, dur);
  delay(dur);  
}
