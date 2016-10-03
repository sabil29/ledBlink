/* 
  Blink
  Menyalakan LED pada pin 6 selama 4 detik dan Mematikanya selama 4 detik.

   Ini contoh kode Programnya.
 */

 int led = 6 ;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital pin 6.
  
void setup() 
{
  pinMode(led, OUTPUT);// Mengatur Digital Pin sebagai Output.

}

void loop() {
  digitalWrite(led, HIGH);          // Mengatur LED agar Menyala.
  delay(3500);                      // Tunggu sampai 4 detik.
  digitalWrite(led ,LOW);           // Mengatur LED agar Mati.
  delay(3500);                      // Tunggu sampai 4 detik. 
}
