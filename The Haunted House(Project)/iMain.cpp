# include "iGraphics.h"
# include "ibots.h"
# include <iostream>



struct buttonCordinate
{
	int x, y;

}bCordinate[5];
int mposx, mposy;
char button[5][19] = { "Pic\\HHStart.bmp", "Pic\\HHContinue.bmp", "Pic\\HHIns.bmp", "Pic\\HHCredits.bmp", "Pic\\HHQuit.bmp" };
char homemenu[22] = "Pic\\HauntedHouse2.bmp";
char start[20] = "Pic\\HHFrontDoor.bmp";
char start1[21] = "Pic\\HHFrontDoor1.bmp";
char ins[13] = "Pic\\HHIn.bmp";
char credits[15] = "Pic\\HHcred.bmp";
char quit[15] = "Pic\\HHQuit.bmp";
char intro1[13] = "Pic\\HHTN.bmp";
char intro2[14] = "Pic\\HHwar.bmp";
char convo0[17] = "Pic\\HHConvo0.bmp";
char convo1[17] = "Pic\\HHConvo1.bmp";
char convo2[17] = "Pic\\HHConvo2.bmp";
char convo3[17] = "Pic\\HHConvo3.bmp";
char convo4[17] = "Pic\\HHConvo4.bmp";
char convo5[17] = "Pic\\HHConvo5.bmp";
char convo6[17] = "Pic\\HHConvo6.bmp";
char convo7[17] = "Pic\\HHConvo7.bmp";
char convo8[17] = "Pic\\HHConvo8.bmp";
char convo9[17] = "Pic\\HHConvo9.bmp";
char convo10[18] = "Pic\\HHConvo10.bmp";
char convo11[18] = "Pic\\HHConvo11.bmp";
char convo12[18] = "Pic\\HHConvo12.bmp";
char convo13[18] = "Pic\\HHConvo13.bmp";
char confirm[18] = "Pic\\HHConfirm.bmp";
char livingroom[23] = "Pic\\Living.bmp";
char door[15] = "Pic\\door2.bmp";
char Bath1[14] = "Pic\\Bath1.bmp";
char Bath2[14] = "Pic\\Bath2.bmp";
char Bath3[14] = "Pic\\Bath3.bmp";
char Bedroom[16] = "Pic\\Bedroom.bmp";
char Key[12] = "Pic\\key.bmp";
char Key1[13] = "Pic\\key1.bmp";
char Balcony[16] = "Pic\\Balcony.bmp";
char Leg[12] = "Pic\\leg.bmp";
char bhoot[15] = "Pic\\HHvoot.bmp";
char CRE1[16] = "Pic\\Credit1.bmp";
char CRE2[16] = "Pic\\Credit2.bmp";
char CRE3[16] = "Pic\\Credit3.bmp";
char CRE4[16] = "Pic\\Credit4.bmp";
char CRE5[16] = "Pic\\Credit5.bmp";
char CRE6[16] = "Pic\\Credit6.bmp";
char CRE7[16] = "Pic\\Credit7.bmp";
char CRE8[16] = "Pic\\Credit8.bmp";
char CRE9[21] = "Pic\\HauntedHouse.bmp";
char note1[17] = "Pic\\noteliv1.bmp";
char note2[17] = "Pic\\noteliv2.bmp";
char note3[18] = "Pic\\notebath1.bmp";
char note4[18] = "Pic\\notebath2.bmp";
char note5[18] = "Pic\\notebath3.bmp";
char note6[16] = "Pic\\notebed.bmp";
char pic[15] = "Pic\\picliv.bmp";
char diary[17] = "Pic\\diarybed.bmp";
char devil1[15] = "Pic\\devil1.bmp";
char devil2[15] = "Pic\\devil2.bmp";
char devil3[15] = "Pic\\devil3.bmp";
char hammer[15] = "Pic\\Hammer.bmp";
char Pause[14] = "Pic\\Pause.bmp";
boolean musicOn = true;
boolean musicOn1 = true;
boolean musicOn2 = true;
int image = -1;  //menu
int MS = 0;
int s = 0;


//assigned through header   ---->>>


//int flag = 0; 
//int l = 0;
//int c = 0;
//int b = 0, d = 0, e = 0, m = 0, n = 0, o = 0;
//int noteliv1 = 0, noteliv2 = 0, notebath1 = 0, notebath2 = 0, notebath3 = 0, notebed1 = 0, notebed2 = 0;
//int picliv = 0;
//int chabi = 0;
//int p = 0, q = 0, r = 0, t = 0, u = 0, v = 0, w = 0, z = 0;

/*

function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here
	iClear();
	iShowBMP(0, 0, intro1); //iBoTs
	if (c >= 5 && c <= 14)
	{
		iShowBMP(0, 0, intro2);//Warning
	}
	else if (c >= 14)
	{
		if (image == -1)
		{
			iShowBMP(0, 0, homemenu);
			for (int i = 0; i < 5; i++)
			{
				iShowBMP2(bCordinate[i].x, bCordinate[i].y, button[i], 0);  //Buttons
			}
		}
		else if (image == 0){

			iClear();
			//The conversation 
			iShowBMP(0, 0, convo0);
			iSetColor(255, 0, 0);
			iText(570, 360, "The Neighbour", GLUT_BITMAP_TIMES_ROMAN_24);
			if (a >= 3 && a < 5)
			{
				iShowBMP(0, 0, convo1);
			}
			else if (a >= 5 && a < 7){
				iShowBMP(0, 0, convo2);
			}
			else if (a >= 7 && a < 10){
				iShowBMP(0, 0, convo3);
			}
			else if (a >= 10 && a < 14){
				iShowBMP(0, 0, convo4);
			}
			else if (a >= 14 && a < 24){
				iShowBMP(0, 0, convo5);
			}
			else if (a >= 24 && a < 45){
				iShowBMP(0, 0, convo6);
			}
			else if (a >= 45 && a < 48){
				iShowBMP(0, 0, convo7);
			}
			else if (a >= 48 && a < 52){
				iShowBMP(0, 0, convo8);
			}
			else if (a >= 52 && a < 60){
				iShowBMP(0, 0, convo9);
			}
			else if (a >= 60 && a < 68){
				iShowBMP(0, 0, convo10);
			}
			else if (a >= 68 && a < 88){
				iShowBMP(0, 0, convo11);
			}
			else if (a >= 88 && a < 93){
				iShowBMP(0, 0, convo12);
			}
			else if (a >= 93 && a < 100){
				iShowBMP(0, 0, convo13);
			}
			else if (a >= 100 && a < 101)
			{
				iShowBMP(0, 0, convo0);
			}
			//investigate or not
			else if (a >= 101)
			{
				iShowBMP(0, 0, confirm);
			}
			if (a > 0 && a < 101)
			{
				//to skip the conversation
				iSetColor(255, 0, 0);
				iText(1080, 700, "Press 'Space' to skip", GLUT_BITMAP_HELVETICA_18);
			}
			//selecting no

			
				if (flag == 1)
				{
					iShowBMP(0, 0, convo0);
					iSetColor(255, 0, 0);
					iText(575, 360, "Game Over", GLUT_BITMAP_TIMES_ROMAN_24);
					if (b >= 2)
					{

						image = -1;
						flag = 0;
						a = 0;
						b = 0;
						d = 0;
						e = 0;
						f = 0;
						g = 0;
						h = 0;
						k = 0;
						l = 0;
						m = 0;
						n = 0;
						o = 0;
						p = 0;
						q = 0;
						r = 0;
						t = 0;
						u = 0;
						v = 0;
						w = 0;
						z = 0;
						noteliv1 = 0;
						noteliv2 = 0;
						notebath1 = 0;
						notebath2 = 0;
						notebath3 = 0;
						notebed1 = 0;
						notebed2 = 0;
						picliv = 0;
						chabi = 0;
						musicOn = true;
						musicOn1 = true;
						musicOn2 = true;
						noteliv1X = 1280;
						noteliv2X = 1280;
						piclivX = 1280;
						notebath1X = 1280;
						notebath2X = 1280;
						notebedX = 1280;
						Tx = 320;
						MS = 0;
						s = 0;
						notesound1 = 0;
						notesound2 = 0;
					}
				}
				else if (flag == 2)
				{
					if (MS == 0)
					{
						if (l == 0)
						{
							iShowBMP(0, 0, convo0);
							iSetColor(255, 0, 0);
							iText(575, 370, "The House", GLUT_BITMAP_TIMES_ROMAN_24);
							if (f >= 3)
							{
								iShowBMP(0, 0, start);
								iShowBMP2(mposx - 50, mposy - 50, hammer, 0);
							}
							if (g == 4)
							{
								iShowBMP(0, 0, start1);
								iShowBMP2(mposx - 50, mposy - 50, hammer, 0);
							}
							//the door
							if (g > 4)
							{
								iShowBMP(0, 0, door);
							}
							//printf("%d %d\n", mposx, mposy);

							//blackscreen after the door
							if (h == 1)
							{
								iShowBMP(0, 0, convo0);
								iSetColor(255, 0, 0);
								iText(565, 370, "Livingroom", GLUT_BITMAP_TIMES_ROMAN_24);
							}
							//livingroom
							if (k > 1)
							{
								iShowBMP(0, 0, livingroom);
							}
							if (noteliv1 == 1)
							{
								if (noteliv1X > 0)
								{
									noteliv1X -= Tx;
									iShowBMP(noteliv1X, 0, note1);
								}
								if (noteliv1X == 0)
								{
									iShowBMP(0, 0, note1);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (noteliv2 == 1)
							{
								if (noteliv2X > 0)
								{
									noteliv2X -= Tx;
									iShowBMP(noteliv2X, 0, note2);

								}
								if (noteliv2X == 0)
								{
									iShowBMP(0, 0, note2);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (picliv == 1)
							{
								if (piclivX > 0)
								{
									piclivX -= Tx;

									iShowBMP(piclivX, 0, pic);
								}
								if (piclivX == 0)
								{
									iShowBMP(0, 0, pic);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}

							}
							if (noteliv1 == 2 && noteliv2 == 2 && picliv == 2)
							{
								iSetColor(255, 0, 0);
								iText(1035, 20, "Press 'Enter' for next room ->", GLUT_BITMAP_HELVETICA_18);
							}
						}
						if (l == 1)
						{
							if (m >= 0 && m <= 2)
							{
								iShowBMP(0, 0, convo0);
								iSetColor(255, 0, 0);
								iText(565, 370, "Bathroom", GLUT_BITMAP_TIMES_ROMAN_24);
							}
							else if (m > 2)
								iShowBMP(0, 0, Bath1);
							if (notebath1 == 1)
							{
								if (notebath1X > 0)
								{
									notebath1X -= Tx;
									iShowBMP(notebath1X, 0, note3);

								}
								if (notebath1X == 0)
								{
									iShowBMP(0, 0, note3);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (notebath1 == 2)
							{
								iShowBMP(0, 0, Bath2);
							}
							if (notebath2 == 1)
							{
								if (notebath2X > 0)
								{
									notebath2X -= Tx;
									iShowBMP(notebath2X, 0, note4);

								}
								if (notebath2X == 0)
								{
									iShowBMP(0, 0, note4);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (notebath1 == 2 && notebath2 == 2)
							{
								iShowBMP(0, 0, Bath3);
							}
							if (notebath3 == 1)
							{
								iShowBMP(0, 0, note5);
								iSetColor(255, 0, 0);
								iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
							}
							if (notebath1 == 2 && notebath2 == 2 && notebath3 == 2)
							{
								iSetColor(255, 0, 0);
								iText(1035, 20, "Press 'Enter' for next room ->", GLUT_BITMAP_HELVETICA_18);
							}
						}

						if (l == 2)
						{
							if (n >= 0 && n <= 2)
							{
								iShowBMP(0, 0, convo0);
								iSetColor(255, 0, 0);
								iText(565, 370, "Bedroom", GLUT_BITMAP_TIMES_ROMAN_24);
							}
							else if (n > 2)
								iShowBMP(0, 0, Bedroom);
							if (notebed1 == 1)
							{
								iShowBMP(0, 0, diary);
								iShowBMP2(275, 300, devil1, 0);
								iShowBMP2(720, 100, devil2, 0);
								iShowBMP2(275, 400, devil3, 0);
								iSetColor(255, 0, 0);
								iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
							}
							if (notebed2 == 1)
							{
								if (notebedX > 0)
								{
									notebedX -= Tx;
									iShowBMP(notebedX, 0, note6);
								}
								if (notebedX == 0)
								{
									iShowBMP(0, 0, note6);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (notebed1 == 2 && notebed2 == 2)
							{

								iShowBMP2(696, 38, Key, 0);
							}
							if (chabi == 1)
							{
								iShowBMP(0, 0, Key1);
								iSetColor(255, 0, 0);
								iText(1035, 20, "Press 'Enter' for next room ->", GLUT_BITMAP_HELVETICA_18);

							}
						}
					
					if (l == 3)
					{
						if (o >= 0 && o <= 2)
						{
							iShowBMP(0, 0, convo0);
							iSetColor(255, 0, 0);
							iText(565, 370, "Balcony", GLUT_BITMAP_TIMES_ROMAN_24);

						}
						else if (o > 2){
							iShowBMP(0, 0, Balcony);

						}

						if (p == 1)
						{
							iSetColor(255, 255, 255);
							iText(5, 5, "#%#_95", GLUT_BITMAP_8_BY_13);

						}
						if (q == 1)
						{
							iSetColor(255, 255, 255);
							iText(1210, 5, "#(%0pz", GLUT_BITMAP_8_BY_13);

						}
						if (r == 1)
						{
							iSetColor(255, 255, 255);
							iText(5, 700, "$#(np%tvw", GLUT_BITMAP_8_BY_13);

						}
						if (t == 1)
						{
							iSetColor(255, 255, 255);
							iText(1210, 700, "$(6tzv", GLUT_BITMAP_8_BY_13);

						}
						if (u == 1)
						{
							iSetColor(255, 255, 255);
							iText(620, 5, "%+809=", GLUT_BITMAP_8_BY_13);

						}
						if (v == 1)
						{
							iSetColor(255, 255, 255);
							iText(620, 700, "<h+j^w|i?/", GLUT_BITMAP_8_BY_13);

						}
						if (p == 1 && q == 1 && r == 1 && t == 1 && u == 1 && v == 1)
						{
							l = 4;
							chabi = 0;
						}
					}



					if (l == 4)
					{
						if (w >= 0 && w <= 12)
						{
							iShowBMP(0, 0, convo0);
							iSetColor(255, 255, 255);
							iText(450, 360, "WHAT ON EARTH IS HAPPENING!!!", GLUT_BITMAP_TIMES_ROMAN_24);
						}
						else if (w > 12 && w <= 15)
						{
							iShowBMP(0, 0, bhoot);
						}
						else if (w > 15 && w <= 16)
						{
							iShowBMP(0, 0, convo0);
						}
						else if (w > 16)
						{
							iShowBMP(0, 0, start);
						}
					}

					//iShowBMP(mposx, mposy, cursor);
					//printf("%d %d\n",mposx,mposy);
					if (l == 5)
					{


						if (z >= 0 && z <= 2)
						{
							iShowBMP(0, 0, convo0);
							iSetColor(255, 255, 255);
							iText(445, 360, "WAS THAT ALL MY IMAGINATION???", GLUT_BITMAP_TIMES_ROMAN_24);
						}
						else if (z > 2 && z <= 3)
						{
							iShowBMP(0, 0, convo0);
						}
						else if (z > 3 && z <= 4)
						{
							iShowBMP(0, 0, CRE1);
						}
						else if (z >= 5 && z <= 7)
						{
							iShowBMP(0, 0, CRE2);
						}
						else if (z >= 8 && z <= 9)
						{
							iShowBMP(0, 0, CRE1);
						}
						else if (z >= 10 && z <= 12)
						{
							iShowBMP(0, 0, CRE3);
						}
						else if (z >= 13 && z <= 14)
						{
							iShowBMP(0, 0, CRE1);
						}
						else if (z >= 15 && z <= 17)
						{
							iShowBMP(0, 0, CRE4);
						}
						else if (z >= 18 && z <= 19)
						{
							iShowBMP(0, 0, CRE1);
						}
						else if (z >= 20 && z <= 22)
						{
							iShowBMP(0, 0, CRE5);
						}
						else if (z >= 23 && z <= 24)
						{
							iShowBMP(0, 0, CRE1);
						}
						else if (z >= 25 && z <= 27)
						{
							iShowBMP(0, 0, CRE6);
						}
						else if (z >= 28 && z <= 29)
						{
							iShowBMP(0, 0, CRE1);
						}
						else if (z >= 30 && z <= 32)
						{
							iShowBMP(0, 0, CRE7);
						}
						else if (z >= 33 && z <= 34)
						{
							iShowBMP(0, 0, CRE1);
						}
						else if (z >= 35 && z <= 37)
						{
							iShowBMP(0, 0, CRE8);
						}
						else if (z >= 38 && z <= 40)
						{
							iShowBMP(0, 0, CRE9);
						}
						else if (z >= 41 && z <= 42)
						{
							iShowBMP(0, 0, convo0);
						}
						if (z >= 42)
						{

							image = -1;
							flag = 0;
							a = 0;
							b = 0;
							d = 0;
							e = 0;
							f = 0;
							g = 0;
							h = 0;
							k = 0;
							l = 0;
							m = 0;
							n = 0;
							o = 0;
							p = 0;
							q = 0;
							r = 0;
							t = 0;
							u = 0;
							v = 0;
							w = 0;
							z = 0;
							noteliv1 = 0;
							noteliv2 = 0;
							notebath1 = 0;
							notebath2 = 0;
							notebath3 = 0;
							notebed1 = 0;
							notebed2 = 0;
							picliv = 0;
							chabi = 0;
							musicOn = true;
							musicOn1 = true;
							musicOn2 = true;
							noteliv1X = 1280;
							noteliv2X = 1280;
							piclivX = 1280;
							notebath1X = 1280;
							notebath2X = 1280;
							notebedX = 1280;
							Tx = 320;
							MS = 0;
							s = 0;
							notesound1 = 0;
							notesound2 = 0;
						}

					}


				}
				else if (MS == 1 && h == 1)
				{
					iShowBMP(0, 0, Pause);
				}
			}


			


		}
		else if (image == 1)
		{
			iClear();
			//loadgame();
			//s = 1;
			if (s <= 1)
			{
				loadgame();
			}
			if (s > 0)
			{

				
				if (flag == 2)
				{
					if (MS == 0)
					{
						if (l == 0)
						{
							iShowBMP(0, 0, convo0);
							iSetColor(255, 0, 0);
							iText(575, 370, "The House", GLUT_BITMAP_TIMES_ROMAN_24);
							if (f >= 3)
							{
								iShowBMP(0, 0, start);
								iShowBMP2(mposx - 50, mposy - 50, hammer, 0);
							}
							if (g == 4)
							{
								iShowBMP(0, 0, start1);
								iShowBMP2(mposx - 50, mposy - 50, hammer, 0);
							}
							//the door
							if (g > 4)
							{
								iShowBMP(0, 0, door);
							}
							//printf("%d %d\n", mposx, mposy);

							//blackscreen after the door
							if (h == 1)
							{
								iShowBMP(0, 0, convo0);
								iSetColor(255, 0, 0);
								iText(565, 370, "Livingroom", GLUT_BITMAP_TIMES_ROMAN_24);
							}
							//livingroom
							if (k > 1)
							{
								iShowBMP(0, 0, livingroom);
							}
							if (noteliv1 == 1)
							{
								if (noteliv1X > 0)
								{
									noteliv1X -= Tx;
									iShowBMP(noteliv1X, 0, note1);
								}
								if (noteliv1X == 0)
								{
									iShowBMP(0, 0, note1);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (noteliv2 == 1)
							{
								if (noteliv2X > 0)
								{
									noteliv2X -= Tx;
									iShowBMP(noteliv2X, 0, note2);

								}
								if (noteliv2X == 0)
								{
									iShowBMP(0, 0, note2);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (picliv == 1)
							{
								if (piclivX > 0)
								{
									piclivX -= Tx;

									iShowBMP(piclivX, 0, pic);
								}
								if (piclivX == 0)
								{
									iShowBMP(0, 0, pic);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}

							}
							if (noteliv1 == 2 && noteliv2 == 2 && picliv == 2)
							{
								iSetColor(255, 0, 0);
								iText(1035, 20, "Press 'Enter' for next room ->", GLUT_BITMAP_HELVETICA_18);
							}
						}
						if (l == 1)
						{
							if (m >= 0 && m <= 2)
							{
								iShowBMP(0, 0, convo0);
								iSetColor(255, 0, 0);
								iText(565, 370, "Bathroom", GLUT_BITMAP_TIMES_ROMAN_24);
							}
							else if (m > 2)
								iShowBMP(0, 0, Bath1);
							if (notebath1 == 1)
							{
								if (notebath1X > 0)
								{
									notebath1X -= Tx;
									iShowBMP(notebath1X, 0, note3);

								}
								if (notebath1X == 0)
								{
									iShowBMP(0, 0, note3);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (notebath1 == 2)
							{
								iShowBMP(0, 0, Bath2);
							}
							if (notebath2 == 1)
							{
								if (notebath2X > 0)
								{
									notebath2X -= Tx;
									iShowBMP(notebath2X, 0, note4);

								}
								if (notebath2X == 0)
								{
									iShowBMP(0, 0, note4);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (notebath1 == 2 && notebath2 == 2)
							{
								iShowBMP(0, 0, Bath3);
							}
							if (notebath3 == 1)
							{
								iShowBMP(0, 0, note5);
								iSetColor(255, 0, 0);
								iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
							}
							if (notebath1 == 2 && notebath2 == 2 && notebath3 == 2)
							{
								iSetColor(255, 0, 0);
								iText(1035, 20, "Press 'Enter' for next room ->", GLUT_BITMAP_HELVETICA_18);
							}
						}

						if (l == 2)
						{
							if (n >= 0 && n <= 2)
							{
								iShowBMP(0, 0, convo0);
								iSetColor(255, 0, 0);
								iText(565, 370, "Bedroom", GLUT_BITMAP_TIMES_ROMAN_24);
							}
							else if (n > 2)
								iShowBMP(0, 0, Bedroom);
							if (notebed1 == 1)
							{
								iShowBMP(0, 0, diary);
								iShowBMP2(275, 300, devil1, 0);
								iShowBMP2(720, 100, devil2, 0);
								iShowBMP2(275, 400, devil3, 0);
								iSetColor(255, 0, 0);
								iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
							}
							if (notebed2 == 1)
							{
								if (notebedX > 0)
								{
									notebedX -= Tx;
									iShowBMP(notebedX, 0, note6);
								}
								if (notebedX == 0)
								{
									iShowBMP(0, 0, note6);
									iSetColor(255, 0, 0);
									iText(1080, 20, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
								}
							}
							if (notebed1 == 2 && notebed2 == 2)
							{

								iShowBMP2(696, 38, Key, 0);
							}
							if (chabi == 1)
							{
								iShowBMP(0, 0, Key1);
								iSetColor(255, 0, 0);
								iText(1035, 20, "Press 'Enter' for next room ->", GLUT_BITMAP_HELVETICA_18);

							}
						}

						if (l == 3)
						{
							if (o >= 0 && o <= 2)
							{
								iShowBMP(0, 0, convo0);
								iSetColor(255, 0, 0);
								iText(565, 370, "Balcony", GLUT_BITMAP_TIMES_ROMAN_24);

							}
							else if (o > 2){
								iShowBMP(0, 0, Balcony);

							}

							if (p == 1)
							{
								iSetColor(255, 255, 255);
								iText(5, 5, "#%#_95", GLUT_BITMAP_8_BY_13);

							}
							if (q == 1)
							{
								iSetColor(255, 255, 255);
								iText(1210, 5, "#(%0pz", GLUT_BITMAP_8_BY_13);

							}
							if (r == 1)
							{
								iSetColor(255, 255, 255);
								iText(5, 700, "$#(np%tvw", GLUT_BITMAP_8_BY_13);

							}
							if (t == 1)
							{
								iSetColor(255, 255, 255);
								iText(1210, 700, "$(6tzv", GLUT_BITMAP_8_BY_13);

							}
							if (u == 1)
							{
								iSetColor(255, 255, 255);
								iText(620, 5, "%+809=", GLUT_BITMAP_8_BY_13);

							}
							if (v == 1)
							{
								iSetColor(255, 255, 255);
								iText(620, 700, "<h+j^w|i?/", GLUT_BITMAP_8_BY_13);

							}
							if (p == 1 && q == 1 && r == 1 && t == 1 && u == 1 && v == 1)
							{
								l = 4;
								chabi = 0;
							}
						}



						if (l == 4)
						{
							if (w >= 0 && w <= 12)
							{
								iShowBMP(0, 0, convo0);
								iSetColor(255, 255, 255);
								iText(450, 360, "WHAT ON EARTH IS HAPPENING!!!", GLUT_BITMAP_TIMES_ROMAN_24);
							}
							else if (w > 12 && w <= 15)
							{
								iShowBMP(0, 0, bhoot);
							}
							else if (w > 15 && w <= 16)
							{
								iShowBMP(0, 0, convo0);
							}
							else if (w > 16)
							{
								iShowBMP(0, 0, start);
							}
						}

						//iShowBMP(mposx, mposy, cursor);
						//printf("%d %d\n",mposx,mposy);
						if (l == 5)
						{


							if (z >= 0 && z <= 2)
							{
								iShowBMP(0, 0, convo0);
								iSetColor(255, 255, 255);
								iText(445, 360, "WAS THAT ALL MY IMAGINATION???", GLUT_BITMAP_TIMES_ROMAN_24);
							}
							else if (z > 2 && z <= 3)
							{
								iShowBMP(0, 0, convo0);
							}
							else if (z > 3 && z <= 4)
							{
								iShowBMP(0, 0, CRE1);
							}
							else if (z >= 5 && z <= 7)
							{
								iShowBMP(0, 0, CRE2);
							}
							else if (z >= 8 && z <= 9)
							{
								iShowBMP(0, 0, CRE1);
							}
							else if (z >= 10 && z <= 12)
							{
								iShowBMP(0, 0, CRE3);
							}
							else if (z >= 13 && z <= 14)
							{
								iShowBMP(0, 0, CRE1);
							}
							else if (z >= 15 && z <= 17)
							{
								iShowBMP(0, 0, CRE4);
							}
							else if (z >= 18 && z <= 19)
							{
								iShowBMP(0, 0, CRE1);
							}
							else if (z >= 20 && z <= 22)
							{
								iShowBMP(0, 0, CRE5);
							}
							else if (z >= 23 && z <= 24)
							{
								iShowBMP(0, 0, CRE1);
							}
							else if (z >= 25 && z <= 27)
							{
								iShowBMP(0, 0, CRE6);
							}
							else if (z >= 28 && z <= 29)
							{
								iShowBMP(0, 0, CRE1);
							}
							else if (z >= 30 && z <= 32)
							{
								iShowBMP(0, 0, CRE7);
							}
							else if (z >= 33 && z <= 34)
							{
								iShowBMP(0, 0, CRE1);
							}
							else if (z >= 35 && z <= 37)
							{
								iShowBMP(0, 0, CRE8);
							}
							else if (z >= 38 && z <= 40)
							{
								iShowBMP(0, 0, CRE9);
							}
							else if (z >= 41 && z <= 42)
							{
								iShowBMP(0, 0, convo0);
							}
							if (z >= 42)
							{

								image = -1;
								flag = 0;
								a = 0;
								b = 0;
								d = 0;
								e = 0;
								f = 0;
								g = 0;
								h = 0;
								k = 0;
								l = 0;
								m = 0;
								n = 0;
								o = 0;
								p = 0;
								q = 0;
								r = 0;
								t = 0;
								u = 0;
								v = 0;
								w = 0;
								z = 0;
								noteliv1 = 0;
								noteliv2 = 0;
								notebath1 = 0;
								notebath2 = 0;
								notebath3 = 0;
								notebed1 = 0;
								notebed2 = 0;
								picliv = 0;
								chabi = 0;
								musicOn = true;
								musicOn1 = true;
								musicOn2 = true;
								noteliv1X = 1280;
								noteliv2X = 1280;
								piclivX = 1280;
								notebath1X = 1280;
								notebath2X = 1280;
								notebedX = 1280;
								Tx = 320;
								MS = 0;
								s = 0;
								notesound1 = 0;
								notesound2 = 0;
							}

						}

					}
					else if (MS == 1 && h == 1)
					{
						iShowBMP(0, 0, Pause);
					}

				}
				
			}

		

		
	}


					
		
		else if (image == 2)
		{
			iShowBMP(0, 0, ins);
			iSetColor(255, 0, 0);
			iText(1080, 700, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
			iSetColor(255, 255, 255);
			
		}
		else if (image == 3)
		{
			iShowBMP(0, 0, credits);
			iSetColor(255, 0, 0);
			iText(1080, 700, "Press 'b' to go back", GLUT_BITMAP_HELVETICA_18);
		}
		else if (image == 4)
		{
			exit(0);
		}		
	}
		
		
	
	
	
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (c > 14 && image == -1)
		{
			//for the buttons in the menu
			for (int i = 0; i < 5; i++)
			{
				if (mx >= bCordinate[i].x && mx <= bCordinate[i].x + 260 && my >= bCordinate[i].y && my <= bCordinate[i].y + 90)
				{
					image = i;
				}
			}
		}
	}

	if (image == 0 && l != 5)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			{
				if (musicOn)
				{
					musicOn = false;
					PlaySound("Sound\\ConvoPlay.wav", NULL, SND_ASYNC); //conversation music
				}
			}
			//place your codes here
		}
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (image == 1)
		{
			s++;
		}
	}
	if (a >= 101)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{

			if (mx >= 475 && mx <= 540 && my >= 290 && my <= 336 && e == 0)
			{
				flag = 2;  //yes
				d = 1;
			}
			else if (mx >= 745 && mx <= 797 && my >= 290 && my <= 336 && d == 0)
			{
				flag = 1;  //no
				e = 1;


			}


		}
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (!musicOn && e == 1)
			{
				musicOn = true;
				PlaySound("Sound\\HHsmenu.wav", NULL, SND_LOOP | SND_ASYNC);  //if 'no' then the menu sound starts to play
			}
			else if (flag == 2 && l != 3 && l != 4 && l != 5)
			{
				
				if (musicOn1)
				{
					
					musicOn1 = false;
					PlaySound("Sound\\Insects.wav", NULL, SND_LOOP | SND_ASYNC);  //if 'yes' then the gameplay music starts
				}
			}
		}
	}
	if ((flag == 2 && l != 5 && MS == 0) || (image == 1 && a >= 101 && MS == 0))
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			


			if (mx >= 625 && mx <= 865 && my >= 110 && my <= 615 && f > 3 && MS == 0)
			{
				
				g++;
				if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
				{
					//to break the sealed part of the door
					if (!musicOn1 && g < 5 && f > 3)
					{
						
						musicOn1 = true;
						PlaySound("Sound\\Door1.wav", NULL, SND_ASYNC);
						//door sound

					}
					else if (!musicOn1 && g == 5 && f > 3)
					{
					
						musicOn1 = true;
						PlaySound("Sound\\BreakDoor.wav", NULL, SND_ASYNC); //door break sound
					}
					if (g > 5)
					{
						
						h = 1;
					}
				}
			}
		}
		if (k > 1)
		{
			
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 355 && mx <= 425 && my >= 250 && my <= 270)
					noteliv1 = 1;
				if (mx >= 815 && mx <= 870 && my >= 355 && my <= 370)
					noteliv2 = 1;
				if (mx >= 260 && mx <= 307 && my >= 555 && my <= 620)
					picliv = 1;
			}
			if (noteliv1 == 1 && noteliv2 == 1 && picliv == 1)
			{
				if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
				{

				}
			}
		}
		if (l == 1 && m > 2)
		{
		
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 100 && mx <= 192 && my >= 392 && my <= 414)
				{
					notebath1 = 1;
				}
			}
		}
		if (l == 1 && notebath1 == 2 && m > 2)
		{
			
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 1122 && mx <= 1180 && my >= 620 && my <= 682)
				{
					notebath2 = 1;
				}
			}
		}
		if (l == 1 && notebath1 == 2 && notebath2 == 2 && m > 2)
		{
			
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 945 && mx <= 990 && my >= 230 && my <= 250)
				{
					notebath3 = 1;
				}
			}
		}
		if (l == 2 && n > 2)
		{
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 650 && mx <= 682 && my >= 490 && my <= 502)
				{
					notebed1 = 1;
				}
				if (mx >= 295 && mx <= 340 && my >= 390 && my <= 415)
				{
					notebed2 = 1;
				}
			}
		}
		if (l == 2 && n > 2 && notebed1 == 2 && notebed2 == 2)
		{
			
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 727 && mx <= 763 && my >= 64 && my <= 81)
				{
					chabi = 1;
				}
			}
		}
		if (l == 3 && o > 2)
		{
			
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 401 && mx <= 432 && my >= 241 && my <= 316)
				{
					p = 1;
				}
				if (mx >= 401 && mx <= 432 && my >= 350 && my <= 378)
				{
					q = 1;
				}
				if (mx >= 401 && mx <= 432 && my >= 410 && my <= 558)
				{
					r = 1;
				}
				if (mx >= 909 && mx <= 938 && my >= 246 && my <= 320)
				{
					t = 1;
				}
				if (mx >= 908 && mx <= 938 && my >= 352 && my <= 380)
				{
					u = 1;
				}
				if (mx >= 907 && mx <= 938 && my >= 414 && my <= 558)
				{
					v = 1;
				}
				if (p == 1 && q == 1 && r == 1 && t == 1 && u == 1 && v == 1)
				{
					if (musicOn2)
					{
						musicOn2 = false;
						PlaySound("Sound\\Scare.wav", NULL, SND_ASYNC);
					}
				}
			}
		}
		if (l == 4 && w > 16)
		{
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 625 && mx <= 865 && my >= 110 && my <= 615)
				{
					l = 5;
					if (!musicOn)
					{
						musicOn = true;
						PlaySound("Sound\\Playmusic.wav", NULL, SND_LOOP | SND_ASYNC);  //if 'no' then the menu sound starts to play
					}
				}
			}
		}
	}	
	
	if (MS == 1)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{

			if (mx >= 475 && mx <= 540 && my >= 290 && my <= 336)
			{
				if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
				{
					if (!musicOn)
					{
						musicOn = true;
						PlaySound("Sound\\HHsmenu.wav", NULL, SND_LOOP | SND_ASYNC);
					}
					image = -1;
					flag = 0;
					a = 0;
					b = 0;
					d = 0;
					e = 0;
					f = 0;
					g = 0;
					h = 0;
					k = 0;
					l = 0;
					m = 0;
					n = 0;
					o = 0;
					p = 0;
					q = 0;
					r = 0;
					t = 0;
					u = 0;
					v = 0;
					w = 0;
					z = 0;
					noteliv1 = 0;
					noteliv2 = 0;
					notebath1 = 0;
					notebath2 = 0;
					notebath3 = 0;
					notebed1 = 0;
					notebed2 = 0;
					picliv = 0;
					chabi = 0;
					musicOn = true;
					musicOn1 = true;
					musicOn2 = true;
					noteliv1X = 1280;
					noteliv2X = 1280;
					piclivX = 1280;
					notebath1X = 1280;
					notebath2X = 1280;
					notebedX = 1280;
					Tx = 320;
					MS = 0;
					s = 0;
					notesound1 = 0;
					notesound2 = 0;
				}
			
			}
			else if (mx >= 745 && mx <= 797 && my >= 290 && my <= 336)
			{
				MS = 0;
			}


		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (image == 1 && l != 3 && l != 4 && l != 5)
		{

			if (musicOn1)
			{
				musicOn = false;
				musicOn1 = false;
				PlaySound("Sound\\Insects.wav", NULL, SND_LOOP | SND_ASYNC);  //if 'yes' then the gameplay music starts
			}
		}
	}
	if (image == 1 && l == 5)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)

		{
			if (!musicOn)
			{
				musicOn = true;
				PlaySound("Sound\\Playmusic.wav", NULL, SND_LOOP | SND_ASYNC);  //if 'no' then the menu sound starts to play
			}
		}
	}
	

	
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouse(int mx, int my)
{
	//place your code here

		mposx = mx;
		mposy = my;
	
	

}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{


	if (image == 2 || image == 3 || image == 4)
	{
		if (key == 'b')
		{
			//to go back
			image = -1;  
		}
	}
	if (image == 0)
	{
		if (key == ' ')
		{
			//space to make a = 101 to skip the conversation
			a = 101;
		}
	}

	if (flag == 2 && l != 4 && l != 5 && MS == 0)
	{
		if (noteliv1 == 1)
		{
			if (key == 'b')
			{
				noteliv1 = 2;
			}
		}
		if (noteliv2 == 1)
		{
			if (key == 'b')
			{
				noteliv2 = 2;
			}
		}
		if (picliv == 1)
		{
			if (key == 'b')
			{
				picliv = 2;
			}
		}
		if (noteliv1 == 2 && noteliv2 == 2 && picliv == 2)
		{
			if (key == '\r')
			{
				l = 1;
			}
		}
		if (notebath1 == 1)
		{
			if (key == 'b')
			{
				notesound1++;
				notebath1 = 2;
				if (notesound1 == 1)
				{
					if (!musicOn1)
					{
						musicOn1 = true;
						PlaySound("Sound\\Scare3.wav", NULL, SND_ASYNC);
					}
				}
				
			}
		}
		if (notebath2 == 1)
		{
			if (key == 'b')
			{
				notesound2++;
				notebath2 = 2;
				if (notesound2 == 1)
				{
					if (!musicOn1)
					{
						musicOn1 = true;
						PlaySound("Sound\\Scare2.wav", NULL, SND_ASYNC);
					}
				}
				
			}
		}
		if (notebath3 == 1)
		{
			if (key == 'b')
			{
				notebath3 = 2;
			}
		}
		if (notebath1 == 2 && notebath2 == 2 && notebath3 == 2)
		{
			if (key == '\r')
			{
				l = 2;
			}
		}
		if (notebed1 == 1)
		{
			if (key == 'b')
			{
				notebed1 = 2;
			}
		}
		if (notebed2 == 1)
		{
			if (key == 'b')
			{
				notebed2 = 2;
			}
		}
		if (notebed1 == 2 && notebed2 == 2 && chabi == 1)
		{
			if (key == '\r')
			{
				l = 3;
				if (!musicOn1)
				{
					musicOn1 = true;
					PlaySound("Sound\\Rain.wav", NULL, SND_LOOP | SND_ASYNC);  
				}
			}
		}
		
	}
	
	
	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if (flag == 2 && h == 1 && l != 3 && l != 4 && l != 5)
	{
		if (key == GLUT_KEY_INSERT)
		{
			MS = 1;
			savegame();
		
		}
	}
	if (flag == 2 && h == 1 && l != 3 && l != 4 && l != 5)
	{
		if (key == GLUT_KEY_END)
		{
			MS = 1;
			savegame();
	

		}
	}

	//place your codes for other keys here
}
void change()
{
	//to call the intros following iSetTimer()
	c++;
}
void change1()
{
	//calling images after images for the conversation following iSetTimer()
	if (image == 0)
		a++;

}
void change2()
{
	//if select 'no' in the "Want to Investigate?" then go back to the main menu following iSetTimer()
	if (flag == 1)
	{
		b++;
	}
}
void change3()
{
	if (flag == 2)
	{
		//for the sealed door after the black screen following iSetTimer()
		f++;
	}
}
void change4()
{
	if (h == 1)
	{
		//for the livingroom after breaking the door following iSetTimer()
		k++;
	}
}
void change5()
{
	if (l == 1)
	{
		m++;
	}
}
void change6()
{
	if (l == 2)
	{
		n++;
	}
}
void change7()
{
	if (l == 3)
	{
		o++;
	}
}
void voot()
{
	if (p == 1 && q == 1 && r == 1 && t == 1 && u == 1 && v == 1)
	{
		w++;
	}
}
void lastchange()
{
	if (l == 5)
	{
		z++;
	}
}
int main()
{
	//place your own initialization codes here.
	int sum = 30;
	for (int i = 4; i >= 0; i--)
	{
		bCordinate[i].x = 1000;
		bCordinate[i].y = sum;
		sum += 150;

	}
	if (musicOn)
	{
		PlaySound("Sound\\HHsmenu.wav", NULL, SND_LOOP | SND_ASYNC);   //menu sound
	}
	iSetTimer(800, change);
	iSetTimer(1500, change1);
	iSetTimer(800, change2);
	iSetTimer(1000, change3);
	iSetTimer(2000, change4);
	iSetTimer(1000, change5);
	iSetTimer(1000, change6);
	iSetTimer(1000, change7);
	iSetTimer(1000, voot);
	iSetTimer(1000, lastchange);
	iInitialize(1280, 720, "The Haunted House");
	iStart();
	return 0;
}
