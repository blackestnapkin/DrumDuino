int piezo1 = A1;
int threshold = 400;

void setup() {
  Serial.begin(31250);
}

//send MIDI message
void MIDImessage(byte command, byte data1, byte data2) {
  Serial.write(command);
  Serial.write(data1);
  Serial.write(data2);
}

void loop() {
  int piezoVal1 = analogRead(piezo1);

  if (piezoVal1>threshold) {
    MIDImessage(0x90, 60, 127);
    delay(30);
    MIDImessage(0x90, 60, 0);  
  }else {
    MIDImessage(0x90, 60, 0);
  }
}

