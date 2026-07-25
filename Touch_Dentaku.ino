/*
 Name:		TouchTest.ino
 Created:	2019-12-25 12:52:14 AM
 Author:	Michael
*/

// the setup function runs once when you press reset or power the board

#include <Arduino.h>

#include <SPI.h>

#include <Adafruit_GFX.h>
#include <Waveshare4InchTftShield.h>

// Assign human-readable names to some common 16-bit color values:
#define	BLACK   0x0000
#define	BLUE    0x001F
#define	RED     0xF800
#define	GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

int j=0;

namespace
{
    Waveshare4InchTftShield Waveshield;
}

void setup() 
{
    SPI.begin();
    Waveshield.begin();

    Waveshield.drawRect(0,150,60,240, MAGENTA);

    Waveshield.setCursor(5,5);
    Waveshield.setTextSize(5);
    Waveshield.print("Calclator");

    Waveshield.fillRect(80,160,60,60, WHITE);
    Waveshield.setCursor(280,90);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("3");
    Waveshield.setRotation(0);

    Waveshield.fillRect(80,240,60,60, WHITE);
    Waveshield.setCursor(200,90);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("2");
    Waveshield.setRotation(0);

    Waveshield.fillRect(80,320,60,60, WHITE);
    Waveshield.setCursor(120,90);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("1");
    Waveshield.setRotation(0);

    Waveshield.fillRect(160,160,60,60, WHITE);
    Waveshield.setCursor(280,170);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("6");
    Waveshield.setRotation(0);

    Waveshield.fillRect(160,240,60,60, WHITE);
    Waveshield.setCursor(200,170);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("5");
    Waveshield.setRotation(0);

    Waveshield.fillRect(160,320,60,60, WHITE);
    Waveshield.setCursor(120,170);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("4");
    Waveshield.setRotation(0);

    Waveshield.fillRect(240,160,60,60, WHITE);
    Waveshield.setCursor(280,250);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("9");
    Waveshield.setRotation(0);


    Waveshield.fillRect(240,240,60,60, WHITE);
    Waveshield.setCursor(200,250);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("8");
    Waveshield.setRotation(0);

    Waveshield.fillRect(240,320,60,60, WHITE);
    Waveshield.setCursor(120,250);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("7");
    Waveshield.setRotation(0);

}

int i = 0;

// the loop function runs over and over again until power down or reset

void loop()
{
    Waveshield.setRotation(0);
    //  Get raw touchscreen values.
    TSPoint p = Waveshield.getPoint();

    //  Remaps raw touchscreen values to screen co-ordinates.  Automatically handles
    //  rotation!
    Waveshield.normalizeTsPoint(p);



    //  Now that we have a point in screen co-ordinates, draw something there.
   //Waveshield.fillCircle(p.x, p.y, 3, BLUE);
   

   if (p.x <= 140 && p.y <= 400 && p.x > 80 && p.y > 340) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("1");
   }

   if (p.x <= 140 && p.y <= 320 && p.x > 80 && p.y > 260) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("2");
   }

    if (p.x <= 140 && p.y <= 220 && p.x > 80 && p.y > 160) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("3");
   }

    if (p.x <= 240 && p.y <= 380 && p.x > 180 && p.y > 320) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("4");
   }

    if (p.x <= 240 && p.y <= 300 && p.x > 180 && p.y > 240) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("5");
   }

    if (p.x <= 240 && p.y <= 220 && p.x > 180 && p.y > 160) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("6");
   }

    if (p.x <= 320 && p.y <= 360 && p.x > 260 && p.y > 300) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("7");
   }

    if (p.x <= 320 && p.y <= 300 && p.x > 260 && p.y > 240) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("8");
   }

    if (p.x <= 320 && p.y <= 220 && p.x > 260 && p.y > 160) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("9");
   }
}
